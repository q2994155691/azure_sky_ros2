#include <rclcpp/rclcpp.hpp>
#include <ros2_socketcan/socket_can_receiver.hpp>
#include <ros2_socketcan/socket_can_sender.hpp>
#include "auto_aim_interfaces/msg/robot_status.hpp"
#include "sensor_msgs/msg/joint_state.hpp"
#include <tf2/LinearMath/Quaternion.h>
#include <tf2_geometry_msgs/tf2_geometry_msgs.hpp>
#include <tf2_ros/transform_broadcaster.h>
#include <cstdint>
#include <cmath>
#include <string>
#include <memory>
#include <thread>
#include <array>

using namespace std::chrono_literals;

// 定义CAN帧结构
struct CanFrame {
    uint32_t id;
    uint8_t dlc;
    std::array<uint8_t, 8> data;
};

class RMCanDriver : public rclcpp::Node
{
public:
    RMCanDriver() : Node("rm_can_driver")
    {
        // Declare parameters
        this->declare_parameter("can_interface", "can0");
        this->declare_parameter("gimbal.yaw_id", 5);
        this->declare_parameter("gimbal.pitch_id", 6);
        
        // Get parameters
        this->get_parameter("can_interface", can_interface_);
        this->get_parameter("gimbal.yaw_id", yaw_id_);
        this->get_parameter("gimbal.pitch_id", pitch_id_);
        
        // 初始化 TF 广播器
        tf_broadcaster_ = std::make_unique<tf2_ros::TransformBroadcaster>(*this);
        
        // Create publishers
        robot_status_pub_ = this->create_publisher<auto_aim_interfaces::msg::RobotStatus>(
            "/robot_status", 10);
        joint_state_pub_ = this->create_publisher<sensor_msgs::msg::JointState>(
            "/joint_states", 10);
        
        // 创建定时器定期广播TF
        tf_timer_ = this->create_wall_timer(
            10ms, std::bind(&RMCanDriver::broadcastTransform, this));
        
        // Initialize CAN receiver
        try {
            can_receiver_ = std::make_unique<drivers::socketcan::SocketCanReceiver>(can_interface_);
            // 启动接收线程
            can_thread_ = std::thread(&RMCanDriver::canReceiveLoop, this);
            RCLCPP_INFO(this->get_logger(), "CAN receiver initialized on %s", can_interface_.c_str());
            RCLCPP_INFO(this->get_logger(), "Listening for yaw ID: 0x%X, pitch ID: 0x%X", 
                        0x200 + static_cast<uint32_t>(yaw_id_), 0x200 + static_cast<uint32_t>(pitch_id_));
        } catch (const std::exception& e) {
            RCLCPP_ERROR(this->get_logger(), "Failed to initialize CAN receiver: %s", e.what());
            return;
        }
    }

private:
    void canReceiveLoop()
    {
        while (rclcpp::ok()) {
            try {
                // 接收CAN帧
                std::array<uint8_t, 8> data;
                const auto id = can_receiver_->receive(data, std::chrono::milliseconds(100));
                
                // 处理CAN帧
                CanFrame frame;
                frame.id = id.get(); // 使用 get() 方法获取 uint32_t 类型的 ID
                frame.dlc = 8; // ros2_socketcan 接收固定长度数据
                frame.data = data;
                
                canFrameCallback(frame);
            } catch (const std::exception& e) {
                // 忽略超时错误，只记录其他错误
                if (std::string(e.what()).find("timeout") == std::string::npos) {
                    RCLCPP_WARN(this->get_logger(), "CAN receive error: %s", e.what());
                }
            }
        }
    }
    
    void canFrameCallback(const CanFrame &frame)
    {
        // Check if it's a gimbal feedback frame
        if (frame.id == (0x200 + static_cast<uint32_t>(yaw_id_))) {
            // Parse yaw data
            parseGimbalData(frame, true);
        } else if (frame.id == (0x200 + static_cast<uint32_t>(pitch_id_))) {
            // Parse pitch data
            parseGimbalData(frame, false);
        }
        
        // 只要收到数据就发布消息，不等两个数据都到达
        if (has_yaw_data_ || has_pitch_data_) {
            auto robot_status_msg = auto_aim_interfaces::msg::RobotStatus();
            robot_status_msg.header.stamp = this->now();
            robot_status_msg.header.frame_id = "gimbal_link";
            robot_status_msg.yaw = yaw_angle_;
            robot_status_msg.pitch = pitch_angle_;
            robot_status_msg.yaw_velocity = yaw_velocity_;
            robot_status_msg.pitch_velocity = pitch_velocity_;
            robot_status_msg.yaw_current = yaw_current_;
            robot_status_msg.pitch_current = pitch_current_;
            
            robot_status_pub_->publish(robot_status_msg);
            
            // Also publish joint states for visualization
            auto joint_state_msg = sensor_msgs::msg::JointState();
            joint_state_msg.header.stamp = this->now();
            joint_state_msg.name = {"gimbal_yaw_joint", "gimbal_pitch_joint"};
            
            // 只发布已收到的数据
            if (has_yaw_data_ && has_pitch_data_) {
                joint_state_msg.position = {yaw_angle_, pitch_angle_};
                joint_state_msg.velocity = {yaw_velocity_, pitch_velocity_};
            } else if (has_yaw_data_) {
                joint_state_msg.position = {yaw_angle_, 0.0};
                joint_state_msg.velocity = {yaw_velocity_, 0.0};
            } else {
                joint_state_msg.position = {0.0, pitch_angle_};
                joint_state_msg.velocity = {0.0, pitch_velocity_};
            }
            
            joint_state_pub_->publish(joint_state_msg);
        }
    }
    
    void parseGimbalData(const CanFrame &frame, bool is_yaw)
    {
        if (frame.dlc < 8) {
            RCLCPP_WARN(this->get_logger(), "Received incomplete CAN frame");
            return;
        }
        
        // Extract data (big-endian format)
        uint16_t angle_raw = (frame.data[0] << 8) | frame.data[1];
        int16_t velocity_raw = (frame.data[2] << 8) | frame.data[3];
        int16_t current_raw = (frame.data[4] << 8) | frame.data[5];
        uint8_t temperature = frame.data[6];
        
        // Convert to physical units
        // Angle: 0-8191 corresponds to 0-2π radians
        double angle = (static_cast<double>(angle_raw) / 8191.0) * 2.0 * M_PI;
        
        // Velocity: rpm to rad/s
        double velocity = static_cast<double>(velocity_raw) * (2.0 * M_PI / 60.0);
        
        // Current: already in appropriate units (assumed to be in A)
        double current = static_cast<double>(current_raw);
        
        if (is_yaw) {
            yaw_angle_ = angle;
            yaw_velocity_ = velocity;
            yaw_current_ = current;
            yaw_temperature_ = temperature;
            has_yaw_data_ = true;
            last_yaw_time_ = this->now();
        } else {
            pitch_angle_ = angle;
            pitch_velocity_ = velocity;
            pitch_current_ = current;
            pitch_temperature_ = temperature;
            has_pitch_data_ = true;
            last_pitch_time_ = this->now();
        }
        
        RCLCPP_DEBUG(this->get_logger(), 
            "%s: angle=%.3f rad, velocity=%.3f rad/s, current=%.3f A, temp=%d°C",
            is_yaw ? "Yaw" : "Pitch", angle, velocity, current, temperature);
    }
    
    void broadcastTransform()
    {
        // 检查数据是否超时(超过1秒认为超时)
        auto current_time = this->now();
        bool yaw_valid = has_yaw_data_ && (current_time - last_yaw_time_).nanoseconds() < 1e9;
        bool pitch_valid = has_pitch_data_ && (current_time - last_pitch_time_).nanoseconds() < 1e9;
        
        // 如果至少有一个数据有效，则广播TF
        if (yaw_valid || pitch_valid) {
            geometry_msgs::msg::TransformStamped transform;
            transform.header.stamp = current_time - rclcpp::Duration::from_seconds(0.005);
            transform.header.stamp = current_time;
            transform.header.frame_id = "odom";
            transform.child_frame_id = "gimbal_link";
            
            tf2::Quaternion q;
            // 使用有效的数据或默认值
            double yaw = yaw_valid ? yaw_angle_ : 0.0;
            double pitch = pitch_valid ? pitch_angle_ : 0.0;
            tf2::Quaternion gimbal_rotation;
            // 注意：根据你的实际安装情况调整轴顺序
            q.setRPY(0, -pitch - M_PI/2, yaw);  
            transform.transform.rotation = tf2::toMsg(q);
            
            // 设置平移（如果需要）
            transform.transform.translation.x = 0.0;
            transform.transform.translation.y = 0.0;
            transform.transform.translation.z = 0.0;
            
            tf_broadcaster_->sendTransform(transform);
        }
    }
    
    // CAN parameters
    std::string can_interface_;
    int yaw_id_;
    int pitch_id_;
    
    // CAN receiver
    std::unique_ptr<drivers::socketcan::SocketCanReceiver> can_receiver_;
    std::thread can_thread_;
    
    // Publishers
    rclcpp::Publisher<auto_aim_interfaces::msg::RobotStatus>::SharedPtr robot_status_pub_;
    rclcpp::Publisher<sensor_msgs::msg::JointState>::SharedPtr joint_state_pub_;
    
    // TF broadcaster and timer
    std::unique_ptr<tf2_ros::TransformBroadcaster> tf_broadcaster_;
    rclcpp::TimerBase::SharedPtr tf_timer_;
    
    // Data storage
    double yaw_angle_ = 0.0;
    double pitch_angle_ = 0.0;
    double yaw_velocity_ = 0.0;
    double pitch_velocity_ = 0.0;
    double yaw_current_ = 0.0;
    double pitch_current_ = 0.0;
    uint8_t yaw_temperature_ = 0;
    uint8_t pitch_temperature_ = 0;
    bool has_yaw_data_ = false;
    bool has_pitch_data_ = false;
    
    // 时间戳用于超时检查
    rclcpp::Time last_yaw_time_;
    rclcpp::Time last_pitch_time_;
};

int main(int argc, char * argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<RMCanDriver>());
    rclcpp::shutdown();
    return 0;
}