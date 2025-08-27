#ifndef AUTOAIM_BRIDGE__AUTOAIM_BRIDGE_HPP_
#define AUTOAIM_BRIDGE__AUTOAIM_BRIDGE_HPP_

#include "rclcpp/rclcpp.hpp"
#include "tide_msgs/msg/tracker_info.hpp"
#include "auto_aim_interfaces/msg/debug_processor.hpp"
#include "auto_aim_interfaces/msg/debug_detector.hpp"

class AutoAimBridge : public rclcpp::Node {
public:
    AutoAimBridge();

private:
    void detector_callback(const auto_aim_interfaces::msg::DebugDetector::SharedPtr msg);
    void processor_callback(const auto_aim_interfaces::msg::DebugProcessor::SharedPtr msg);
    
    rclcpp::Subscription<auto_aim_interfaces::msg::DebugDetector>::SharedPtr detector_sub_;
    rclcpp::Subscription<auto_aim_interfaces::msg::DebugProcessor>::SharedPtr processor_sub_;
    // 移除 vision:: 命名空间
    rclcpp::Publisher<tide_msgs::msg::TrackerInfo>::SharedPtr tracker_pub_;
    bool has_detection_;
};

#endif  // AUTOAIM_BRIDGE__AUTOAIM_BRIDGE_HPP_

