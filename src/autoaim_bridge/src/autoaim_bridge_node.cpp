// autoaim_bridge/src/autoaim_bridge_node.cpp
#include <cmath>
#include <memory>
#include "rclcpp/rclcpp.hpp"
#include "auto_aim_interfaces/msg/target.hpp"
#include "tide_msgs/msg/target.hpp"

class AutoAimBridge : public rclcpp::Node
{
public:
  AutoAimBridge() : Node("autoaim_bridge")
  {
    // 配置QoS以匹配發布者的BEST_EFFORT策略
    auto qos = rclcpp::QoS(10);
    qos.reliability(rclcpp::ReliabilityPolicy::BestEffort);
    qos.durability(rclcpp::DurabilityPolicy::Volatile);
    
    target_sub_ = create_subscription<auto_aim_interfaces::msg::Target>(
      "/tracker/target", qos,
      std::bind(&AutoAimBridge::target_callback, this, std::placeholders::_1));

    tracker_pub_ = create_publisher<tide_msgs::msg::Target>(
      "/gimbal/tracker_target", 10);

    RCLCPP_INFO(get_logger(), 
                "AutoAim Bridge - forwarding /tracker/target to /gimbal/tracker_target with BEST_EFFORT QoS");
  }

private:
  void target_callback(const auto_aim_interfaces::msg::Target::SharedPtr msg)
  {
    tide_msgs::msg::Target tgt;

    tgt.position.x = msg->position.x;
    tgt.position.y = msg->position.y;
    tgt.position.z = msg->position.z;
    tgt.yaw = msg->yaw;
    tgt.tracking = msg->tracking;

    tracker_pub_->publish(tgt);
    
    RCLCPP_DEBUG(get_logger(), 
                 "Forwarding target: tracking=%s, pos(%.3f, %.3f, %.3f)", 
                 msg->tracking ? "true" : "false",
                 tgt.position.x, tgt.position.y, tgt.position.z);
  }

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

