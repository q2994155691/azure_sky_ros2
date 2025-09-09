// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tide_msgs:msg/GameRobotStatus.idl
// generated code does not contain a copyright notice

#ifndef TIDE_MSGS__MSG__DETAIL__GAME_ROBOT_STATUS__TRAITS_HPP_
#define TIDE_MSGS__MSG__DETAIL__GAME_ROBOT_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tide_msgs/msg/detail/game_robot_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace tide_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const GameRobotStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: robot_id
  {
    out << "robot_id: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_id, out);
    out << ", ";
  }

  // member: robot_level
  {
    out << "robot_level: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_level, out);
    out << ", ";
  }

  // member: current_hp
  {
    out << "current_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.current_hp, out);
    out << ", ";
  }

  // member: maximum_hp
  {
    out << "maximum_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.maximum_hp, out);
    out << ", ";
  }

  // member: shooter_barrel_cooling_value
  {
    out << "shooter_barrel_cooling_value: ";
    rosidl_generator_traits::value_to_yaml(msg.shooter_barrel_cooling_value, out);
    out << ", ";
  }

  // member: shooter_barrel_heat_limit
  {
    out << "shooter_barrel_heat_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.shooter_barrel_heat_limit, out);
    out << ", ";
  }

  // member: chassis_power_limit
  {
    out << "chassis_power_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.chassis_power_limit, out);
    out << ", ";
  }

  // member: power_management_gimbal_output
  {
    out << "power_management_gimbal_output: ";
    rosidl_generator_traits::value_to_yaml(msg.power_management_gimbal_output, out);
    out << ", ";
  }

  // member: power_management_chassis_output
  {
    out << "power_management_chassis_output: ";
    rosidl_generator_traits::value_to_yaml(msg.power_management_chassis_output, out);
    out << ", ";
  }

  // member: power_management_shooter_output
  {
    out << "power_management_shooter_output: ";
    rosidl_generator_traits::value_to_yaml(msg.power_management_shooter_output, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GameRobotStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: robot_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "robot_id: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_id, out);
    out << "\n";
  }

  // member: robot_level
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "robot_level: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_level, out);
    out << "\n";
  }

  // member: current_hp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.current_hp, out);
    out << "\n";
  }

  // member: maximum_hp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "maximum_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.maximum_hp, out);
    out << "\n";
  }

  // member: shooter_barrel_cooling_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "shooter_barrel_cooling_value: ";
    rosidl_generator_traits::value_to_yaml(msg.shooter_barrel_cooling_value, out);
    out << "\n";
  }

  // member: shooter_barrel_heat_limit
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "shooter_barrel_heat_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.shooter_barrel_heat_limit, out);
    out << "\n";
  }

  // member: chassis_power_limit
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "chassis_power_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.chassis_power_limit, out);
    out << "\n";
  }

  // member: power_management_gimbal_output
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "power_management_gimbal_output: ";
    rosidl_generator_traits::value_to_yaml(msg.power_management_gimbal_output, out);
    out << "\n";
  }

  // member: power_management_chassis_output
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "power_management_chassis_output: ";
    rosidl_generator_traits::value_to_yaml(msg.power_management_chassis_output, out);
    out << "\n";
  }

  // member: power_management_shooter_output
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "power_management_shooter_output: ";
    rosidl_generator_traits::value_to_yaml(msg.power_management_shooter_output, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GameRobotStatus & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace tide_msgs

namespace rosidl_generator_traits
{

[[deprecated("use tide_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tide_msgs::msg::GameRobotStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  tide_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tide_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const tide_msgs::msg::GameRobotStatus & msg)
{
  return tide_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<tide_msgs::msg::GameRobotStatus>()
{
  return "tide_msgs::msg::GameRobotStatus";
}

template<>
inline const char * name<tide_msgs::msg::GameRobotStatus>()
{
  return "tide_msgs/msg/GameRobotStatus";
}

template<>
struct has_fixed_size<tide_msgs::msg::GameRobotStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tide_msgs::msg::GameRobotStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<tide_msgs::msg::GameRobotStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TIDE_MSGS__MSG__DETAIL__GAME_ROBOT_STATUS__TRAITS_HPP_
