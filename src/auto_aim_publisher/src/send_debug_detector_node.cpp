#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/header.hpp"
#include <opencv2/opencv.hpp>
#include "sensor_msgs/msg/image.hpp"
#include <cv_bridge/cv_bridge.h>
#include "auto_aim_interfaces/msg/debug_detector.hpp"
#include <iostream>
#include <string>

using namespace std::chrono_literals;

static double get_now_time()
{
    auto now = std::chrono::system_clock::now();
    auto durationSinceEpoch = now.time_since_epoch();
    auto seconds = std::chrono::duration_cast<std::chrono::seconds>(durationSinceEpoch);
    auto microseconds = std::chrono::duration_cast<std::chrono::microseconds>(durationSinceEpoch - seconds);
    double fractional_seconds = microseconds.count() * 1e-6;
    return seconds.count() + fractional_seconds;
}

class AutoAimPublisher : public rclcpp::Node {
public:
    AutoAimPublisher() : Node("send_debug_detector_node") {
    	this->declare_parameter<int>("set_enemy_color", 0);  // 0:不设置 1:蓝色 2:红色
        this->declare_parameter<bool>("debug", true);
        // 获取参数值
        int enemy_color = this->get_parameter("set_enemy_color").as_int();
        RCLCPP_INFO(this->get_logger(), "Enemy color set to: %d", enemy_color);
        
        // 创建调试消息发布者
        
        publisher_ = this->create_publisher<auto_aim_interfaces::msg::DebugDetector>(
            "debug_detector_topic", 10);
        
        // ← 关键修改：订阅图像话题而不是直接访问相机
        image_subscription_ = this->create_subscription<sensor_msgs::msg::Image>(
            "/image_raw", 10,
            std::bind(&AutoAimPublisher::image_callback, this, std::placeholders::_1));
        
        RCLCPP_INFO(this->get_logger(), "send_debug_detector_node started, waiting for images...");
    }

    ~AutoAimPublisher() {
        // 不再需要释放VideoCapture
    }

private:
    // ← 新的回调函数：处理接收到的图像
    void image_callback(const sensor_msgs::msg::Image::SharedPtr msg) {
        double start_time = get_now_time();
        
        try {
            // 将ROS图像消息转换为OpenCV格式
            cv_bridge::CvImagePtr cv_ptr = cv_bridge::toCvCopy(msg, sensor_msgs::image_encodings::BGR8);
            cv::Mat src = cv_ptr->image;
            
            if (src.empty()) {
                RCLCPP_WARN(this->get_logger(), "Received empty image");
                return;
            }

            // 图像处理（可选的缩放）
            double resize_start = get_now_time();
            cv::resize(src, src, cv::Size(src.cols / 3, src.rows / 3));
            double resize_time = get_now_time() - resize_start;
            
            RCLCPP_INFO(this->get_logger(), "Resize time: %.6f seconds", resize_time);

            // 创建调试消息
            auto debug_message = auto_aim_interfaces::msg::DebugDetector();
            
            // 设置消息头
            std_msgs::msg::Header header;
            header.stamp = this->now();
            header.frame_id = "send_debug_detector_node";

            // 将处理后的图像转换回ROS消息格式
            cv_bridge::CvImage cv_image;
            cv_image.header = header;
            cv_image.encoding = "bgr8";
            cv_image.image = src;

            sensor_msgs::msg::Image image_msg;
            cv_image.toImageMsg(image_msg);
            debug_message.image = image_msg;

            // 发布调试消息
            publisher_->publish(debug_message);
            
            double total_time = get_now_time() - start_time;
            RCLCPP_INFO(this->get_logger(), "Total processing time: %.6f seconds", total_time);
            
        } catch (cv_bridge::Exception& e) {
            RCLCPP_ERROR(this->get_logger(), "cv_bridge exception: %s", e.what());
        }
    }

    rclcpp::Publisher<auto_aim_interfaces::msg::DebugDetector>::SharedPtr publisher_;
    rclcpp::Subscription<sensor_msgs::msg::Image>::SharedPtr image_subscription_;
    // 移除了 VideoCapture* video; 和 timer_
};

int main(int argc, char * argv[]) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<AutoAimPublisher>());
    rclcpp::shutdown();
    return 0;
}

