// autoaim_bridge/src/autoaim_bridge_node.cpp
#include <cmath>
#include <memory>
#include "rclcpp/rclcpp.hpp"
#include "auto_aim_interfaces/msg/target.hpp"
#include "tide_msgs/msg/target.hpp"
#include <tf2_ros/transform_listener.h>
#include <tf2_ros/buffer.h>
#include <tf2_geometry_msgs/tf2_geometry_msgs.hpp>

class AutoAimBridge : public rclcpp::Node
{
public:
  AutoAimBridge() : Node("autoaim_bridge")
  {
    // 初始化TF2
    tf_buffer_ = std::make_shared<tf2_ros::Buffer>(this->get_clock());
    tf_listener_ = std::make_shared<tf2_ros::TransformListener>(*tf_buffer_);
    
    // 配置QoS
    auto qos = rclcpp::QoS(10);
    qos.reliability(rclcpp::ReliabilityPolicy::BestEffort);
    qos.durability(rclcpp::DurabilityPolicy::Volatile);
    
    target_sub_ = create_subscription<auto_aim_interfaces::msg::Target>(
      "/tracker/target", qos,
      std::bind(&AutoAimBridge::target_callback, this, std::placeholders::_1));
    
    tracker_pub_ = create_publisher<tide_msgs::msg::Target>(
      "/gimbal/tracker_target", 10);
    
    RCLCPP_INFO(get_logger(), 
                "AutoAim Bridge initialized with TF transformation: camera_optical_frame → pitch_link");
  }

private:
  void target_callback(const auto_aim_interfaces::msg::Target::SharedPtr msg)
  {
    tide_msgs::msg::Target tgt;
    
    // 複製基本信息
    tgt.tracking = msg->tracking;
    tgt.yaw = msg->yaw;
    tgt.v_yaw = msg->v_yaw;
    tgt.radius_1 = msg->radius_1;
    tgt.radius_2 = msg->radius_2; 
    tgt.dz = msg->dz;
    
    if (msg->tracking && !msg->header.frame_id.empty()) {
      try {
        // 坐標轉換：camera_optical_frame → pitch_link
        geometry_msgs::msg::PointStamped point_in_camera;
        point_in_camera.header = msg->header;
        point_in_camera.point = msg->position;
        
        geometry_msgs::msg::PointStamped point_in_pitch;
        tf_buffer_->transform(point_in_camera, point_in_pitch, "pitch_link", 
                            tf2::Duration(std::chrono::milliseconds(100)));
        
        // 使用轉換後的坐標
        tgt.position = point_in_pitch.point;
        
        // 速度轉換
        geometry_msgs::msg::Vector3Stamped vel_in_camera;
        vel_in_camera.header = msg->header;
        vel_in_camera.vector = msg->velocity;
        
        geometry_msgs::msg::Vector3Stamped vel_in_pitch;
        tf_buffer_->transform(vel_in_camera, vel_in_pitch, "pitch_link",
                            tf2::Duration(std::chrono::milliseconds(100)));
        
        tgt.velocity = vel_in_pitch.vector;
        
        RCLCPP_INFO_THROTTLE(get_logger(), *this->get_clock(), 2000,
                           "Transformed: camera(%.3f, %.3f, %.3f) → pitch(%.3f, %.3f, %.3f)",
                           msg->position.x, msg->position.y, msg->position.z,
                           tgt.position.x, tgt.position.y, tgt.position.z);
                           
      } catch (tf2::TransformException &ex) {
        // TF轉換失敗，使用原始坐標（可能不準確）
        RCLCPP_WARN_THROTTLE(get_logger(), *this->get_clock(), 1000,
                            "TF transform failed: %s, using original coordinates", ex.what());
        tgt.position = msg->position;
        tgt.velocity = msg->velocity;
      }
    } else {
      // 沒有追蹤或frame_id為空，直接使用原始數據
      tgt.position = msg->position;
      tgt.velocity = msg->velocity;
    }
    
    tracker_pub_->publish(tgt);
    
    RCLCPP_DEBUG(get_logger(), 
                 "Published target: tracking=%s, pos(%.3f, %.3f, %.3f)", 
                 msg->tracking ? "true" : "false",
                 tgt.position.x, tgt.position.y, tgt.position.z);
  }
  
  std::shared_ptr<tf2_ros::Buffer> tf_buffer_;
  std::shared_ptr<tf2_ros::TransformListener> tf_listener_;
  rclcpp::Subscription<auto_aim_interfaces::msg::Target>::SharedPtr target_sub_;
  rclcpp::Publisher<tide_msgs::msg::Target>::SharedPtr tracker_pub_;
};

int main(int argc, char **argv)
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<AutoAimBridge>());
  rclcpp::shutdown();
  return 0;
}

