// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from auto_aim_interfaces:msg/RobotStatus.idl
// generated code does not contain a copyright notice

#ifndef AUTO_AIM_INTERFACES__MSG__DETAIL__ROBOT_STATUS__TRAITS_HPP_
#define AUTO_AIM_INTERFACES__MSG__DETAIL__ROBOT_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "auto_aim_interfaces/msg/detail/robot_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace auto_aim_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const RobotStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: yaw
  {
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
    out << ", ";
  }

  // member: pitch
  {
    out << "pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch, out);
    out << ", ";
  }

  // member: yaw_velocity
  {
    out << "yaw_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_velocity, out);
    out << ", ";
  }

  // member: pitch_velocity
  {
    out << "pitch_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch_velocity, out);
    out << ", ";
  }

  // member: yaw_current
  {
    out << "yaw_current: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_current, out);
    out << ", ";
  }

  // member: pitch_current
  {
    out << "pitch_current: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch_current, out);
    out << ", ";
  }

  // member: yaw_temperature
  {
    out << "yaw_temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_temperature, out);
    out << ", ";
  }

  // member: pitch_temperature
  {
    out << "pitch_temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch_temperature, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RobotStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: yaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
    out << "\n";
  }

  // member: pitch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch, out);
    out << "\n";
  }

  // member: yaw_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_velocity, out);
    out << "\n";
  }

  // member: pitch_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pitch_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch_velocity, out);
    out << "\n";
  }

  // member: yaw_current
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw_current: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_current, out);
    out << "\n";
  }

  // member: pitch_current
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pitch_current: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch_current, out);
    out << "\n";
  }

  // member: yaw_temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw_temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_temperature, out);
    out << "\n";
  }

  // member: pitch_temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pitch_temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch_temperature, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RobotStatus & msg, bool use_flow_style = false)
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

}  // namespace auto_aim_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use auto_aim_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const auto_aim_interfaces::msg::RobotStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  auto_aim_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use auto_aim_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const auto_aim_interfaces::msg::RobotStatus & msg)
{
  return auto_aim_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<auto_aim_interfaces::msg::RobotStatus>()
{
  return "auto_aim_interfaces::msg::RobotStatus";
}

template<>
inline const char * name<auto_aim_interfaces::msg::RobotStatus>()
{
  return "auto_aim_interfaces/msg/RobotStatus";
}

template<>
struct has_fixed_size<auto_aim_interfaces::msg::RobotStatus>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<auto_aim_interfaces::msg::RobotStatus>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<auto_aim_interfaces::msg::RobotStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTO_AIM_INTERFACES__MSG__DETAIL__ROBOT_STATUS__TRAITS_HPP_
