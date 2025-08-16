#ifndef MY_HARDWARE_INTERFACE__CUSTOM_MECANUM_CONTROLLER_HPP_
#define MY_HARDWARE_INTERFACE__CUSTOM_MECANUM_CONTROLLER_HPP_

#include "controller_interface/controller_interface.hpp"
#include "geometry_msgs/msg/twist_stamped.hpp"
#include "realtime_tools/realtime_buffer.h"
#include "rclcpp_lifecycle/node_interfaces/lifecycle_node_interface.hpp"
#include <vector>
#include <string>

namespace my_hardware_interface
{
class CustomMecanumController : public controller_interface::ControllerInterface
{
public:
  CustomMecanumController() = default;

  controller_interface::InterfaceConfiguration command_interface_configuration() const override;
  controller_interface::InterfaceConfiguration state_interface_configuration() const override;
  controller_interface::return_type update(const rclcpp::Time & time, const rclcpp::Duration & period) override;
  controller_interface::CallbackReturn on_init() override;
  controller_interface::CallbackReturn on_configure(const rclcpp_lifecycle::State & previous_state) override;
  controller_interface::CallbackReturn on_activate(const rclcpp_lifecycle::State & previous_state) override;
  controller_interface::CallbackReturn on_deactivate(const rclcpp_lifecycle::State & previous_state) override;

private:
  // 簡化參數：只保留必要的
  double velocity_conversion_factor_ = 4.0;  // 類似你代碼中的*4係數
  
  // 關節名稱
  std::vector<std::string> wheel_names_;
  
  // ROS訂閱者
  rclcpp::Subscription<geometry_msgs::msg::TwistStamped>::SharedPtr velocity_subscriber_;
  realtime_tools::RealtimeBuffer<std::shared_ptr<geometry_msgs::msg::TwistStamped>> received_velocity_msg_ptr_;
  
  // 簡化的運動學計算
  void computeWheelCommands(
    const geometry_msgs::msg::Twist & twist_msg,
    std::vector<double> & wheel_commands);
};

} // namespace my_hardware_interface

#endif
