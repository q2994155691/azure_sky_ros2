#include "my_hardware_interface/custom_mecanum_controller.hpp"
#include "controller_interface/controller_interface.hpp"
#include "geometry_msgs/msg/twist_stamped.hpp"
#include "rclcpp/rclcpp.hpp"
#include "pluginlib/class_list_macros.hpp"
#include "my_hardware_interface/custom_mecanum_controller.hpp"
#include "pluginlib/class_list_macros.hpp"
#include <cmath>

namespace my_hardware_interface
{

controller_interface::CallbackReturn CustomMecanumController::on_init()
{
  // 不調用基類方法，直接進行初始化
  try {
    auto_declare<std::vector<std::string>>("wheel_names", std::vector<std::string>());
    auto_declare<double>("velocity_conversion_factor", 4.0);
  } catch (const std::exception & e) {
    RCLCPP_ERROR(get_node()->get_logger(), "Exception: %s", e.what());
    return controller_interface::CallbackReturn::ERROR;
  }

  return controller_interface::CallbackReturn::SUCCESS;
}


controller_interface::CallbackReturn CustomMecanumController::on_configure(
  const rclcpp_lifecycle::State & /*previous_state*/)
{
  // 簡化參數讀取
  wheel_names_ = get_node()->get_parameter("wheel_names").as_string_array();
  velocity_conversion_factor_ = get_node()->get_parameter("velocity_conversion_factor").as_double();

  if (wheel_names_.size() != 4) {
    RCLCPP_ERROR(get_node()->get_logger(), "Expected 4 wheel names, got %zu", wheel_names_.size());
    return controller_interface::CallbackReturn::ERROR;
  }

  // 創建cmd_vel訂閱者
  velocity_subscriber_ = get_node()->create_subscription<geometry_msgs::msg::TwistStamped>(
    "~/cmd_vel", rclcpp::SystemDefaultsQoS(),
    [this](const std::shared_ptr<geometry_msgs::msg::TwistStamped> msg) {
      received_velocity_msg_ptr_.writeFromNonRT(msg);
    });

  RCLCPP_INFO(get_node()->get_logger(), "Simple mecanum controller configured with factor: %.2f", 
              velocity_conversion_factor_);
  return controller_interface::CallbackReturn::SUCCESS;
}

controller_interface::InterfaceConfiguration CustomMecanumController::command_interface_configuration() const
{
  controller_interface::InterfaceConfiguration command_interfaces_config;
  command_interfaces_config.type = controller_interface::interface_configuration_type::INDIVIDUAL;

  for (const auto & wheel_name : wheel_names_) {
    command_interfaces_config.names.push_back(wheel_name + "/velocity");
  }

  return command_interfaces_config;
}

controller_interface::InterfaceConfiguration CustomMecanumController::state_interface_configuration() const
{
  controller_interface::InterfaceConfiguration state_interfaces_config;
  state_interfaces_config.type = controller_interface::interface_configuration_type::INDIVIDUAL;

  for (const auto & wheel_name : wheel_names_) {
    state_interfaces_config.names.push_back(wheel_name + "/position");
    state_interfaces_config.names.push_back(wheel_name + "/velocity");
  }

  return state_interfaces_config;
}

controller_interface::return_type CustomMecanumController::update(
  const rclcpp::Time & /*time*/, const rclcpp::Duration & /*period*/)
{
  auto current_cmd = received_velocity_msg_ptr_.readFromRT();
  if (!current_cmd || !(*current_cmd)) {
    // 沒有命令時停輪
    for (size_t i = 0; i < command_interfaces_.size(); ++i) {
      command_interfaces_[i].set_value(0.0);
    }
    return controller_interface::return_type::OK;
  }

  const auto & twist_msg = (*current_cmd)->twist;
  
  std::vector<double> wheel_commands(4);
  computeWheelCommands(twist_msg, wheel_commands);

  // 發送命令到硬件接口
  for (size_t i = 0; i < wheel_commands.size() && i < command_interfaces_.size(); ++i) {
    command_interfaces_[i].set_value(wheel_commands[i]);
  }

  return controller_interface::return_type::OK;
}

void CustomMecanumController::computeWheelCommands(
  const geometry_msgs::msg::Twist & twist_msg,
  std::vector<double> & wheel_commands)
{
  // 直接使用cmd_vel的線性、角速度，可調縮放係數
  double speed_x = twist_msg.linear.x * velocity_conversion_factor_;   
  double speed_y = twist_msg.linear.y * velocity_conversion_factor_;   
  double speed_turn = twist_msg.angular.z * velocity_conversion_factor_; 

  // 麥輪基本運動學，無物理參數
  wheel_commands[0] = -speed_x + speed_y + speed_turn;
  wheel_commands[1] =  speed_x + speed_y + speed_turn;
  wheel_commands[2] =  speed_x - speed_y + speed_turn;
  wheel_commands[3] = -speed_x - speed_y + speed_turn;
}

controller_interface::CallbackReturn CustomMecanumController::on_activate(
  const rclcpp_lifecycle::State & /*previous_state*/)
{
  RCLCPP_INFO(get_node()->get_logger(), "Simple mecanum controller activated");
  return controller_interface::CallbackReturn::SUCCESS;
}

controller_interface::CallbackReturn CustomMecanumController::on_deactivate(
  const rclcpp_lifecycle::State & /*previous_state*/)
{
  RCLCPP_INFO(get_node()->get_logger(), "Simple mecanum controller deactivated");
  return controller_interface::CallbackReturn::SUCCESS;
}

} // namespace my_hardware_interface

// ROS2 Pluginlib 導出
PLUGINLIB_EXPORT_CLASS(my_hardware_interface::CustomMecanumController, 
                       controller_interface::ControllerInterface)
