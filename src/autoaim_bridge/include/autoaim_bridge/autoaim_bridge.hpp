#ifndef AUTOAIM_BRIDGE__AUTOAIM_BRIDGE_HPP_
#define AUTOAIM_BRIDGE__AUTOAIM_BRIDGE_HPP_

#include "rclcpp/rclcpp.hpp"
#include "tide_msgs/msg/tracker_info.hpp"
#include "auto_aim_interfaces/msg/target.hpp"

class AutoAimBridge : public rclcpp::Node {
public:
    AutoAimBridge();

private:
    // 移除 vision:: 命名空间
    rclcpp::Publisher<tide_msgs::msg::TrackerInfo>::SharedPtr tracker_pub_;
    bool has_detection_;
};

#endif  // AUTOAIM_BRIDGE__AUTOAIM_BRIDGE_HPP_

