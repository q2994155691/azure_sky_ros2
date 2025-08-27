// autoaim_bridge/src/autoaim_bridge_node.cpp
#include <cmath>
#include <memory>

#include "rclcpp/rclcpp.hpp"
#include "auto_aim_interfaces/msg/debug_detector.hpp"
#include "auto_aim_interfaces/msg/debug_processor.hpp"
#include "tide_msgs/msg/target.hpp"

class AutoAimBridge : public rclcpp::Node
{
public:
  AutoAimBridge() : Node("autoaim_bridge"), has_detection_(false)
  {
    detector_sub_ = create_subscription<auto_aim_interfaces::msg::DebugDetector>(
      "/debug_detector_topic",    /* QoS depth */ 10,
      std::bind(&AutoAimBridge::detector_callback, this, std::placeholders::_1));

    processor_sub_ = create_subscription<auto_aim_interfaces::msg::DebugProcessor>(
      "/debug_processor_topic",   10,
      std::bind(&AutoAimBridge::processor_callback, this, std::placeholders::_1));

    tracker_pub_ = create_publisher<tide_msgs::msg::Target>(
      "/gimbal/tracker_target",   10);

    RCLCPP_INFO(get_logger(),
                "AutoAim Bridge - publishing Target (m, z>0) to /gimbal/tracker_target");
  }

private:
  /* ---------  回調：更新裝甲板檢測是否存在  --------- */
  void detector_callback(const auto_aim_interfaces::msg::DebugDetector::SharedPtr msg)
  {
    has_detection_ = !msg->armors.empty();
  }

  /* ---------  回調：DebugProcessor → Target  --------- */
  void processor_callback(const auto_aim_interfaces::msg::DebugProcessor::SharedPtr msg)
  {
    tide_msgs::msg::Target tgt;

    if (!msg->empty && msg->canshoot && has_detection_) {

      /* 1 將毫米轉換為米  ------------------------------------------- */
      tgt.position.x = msg->true_car.car_middle.x / 1000.0;  // mm → m
      tgt.position.y = msg->true_car.car_middle.y / 1000.0;  // mm → m

      /* 2 補上目標高度差（按實機測量修改，暫設 0.52 m）------------- */
      tgt.position.z = 0.52;

      /* 3 其它欄位  --------------------------------------------------- */
      tgt.yaw       = std::atan2(tgt.position.y, tgt.position.x);
      tgt.tracking  = true;

    } else {
      tgt.tracking  = false;
    }

    tracker_pub_->publish(tgt);
  }

  /* ----------------------- 成員變量 ----------------------- */
  bool has_detection_;
  rclcpp::Subscription<auto_aim_interfaces::msg::DebugDetector>::SharedPtr  detector_sub_;
  rclcpp::Subscription<auto_aim_interfaces::msg::DebugProcessor>::SharedPtr processor_sub_;
  rclcpp::Publisher<tide_msgs::msg::Target>::SharedPtr                      tracker_pub_;
};

/* --------------------------- main --------------------------- */
int main(int argc, char **argv)
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<AutoAimBridge>());
  rclcpp::shutdown();
  return 0;
}

