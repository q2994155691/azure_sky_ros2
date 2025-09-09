// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tide_msgs:msg/ShooterCmd.idl
// generated code does not contain a copyright notice

#ifndef TIDE_MSGS__MSG__DETAIL__SHOOTER_CMD__TRAITS_HPP_
#define TIDE_MSGS__MSG__DETAIL__SHOOTER_CMD__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tide_msgs/msg/detail/shooter_cmd__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace tide_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ShooterCmd & msg,
  std::ostream & out)
{
  out << "{";
  // member: mode
  {
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
    out << ", ";
  }

  // member: bullet_velocity
  {
    out << "bullet_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.bullet_velocity, out);
    out << ", ";
  }

  // member: shooting_freq
  {
    out << "shooting_freq: ";
    rosidl_generator_traits::value_to_yaml(msg.shooting_freq, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ShooterCmd & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
    out << "\n";
  }

  // member: bullet_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bullet_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.bullet_velocity, out);
    out << "\n";
  }

  // member: shooting_freq
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "shooting_freq: ";
    rosidl_generator_traits::value_to_yaml(msg.shooting_freq, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ShooterCmd & msg, bool use_flow_style = false)
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
  const tide_msgs::msg::ShooterCmd & msg,
  std::ostream & out, size_t indentation = 0)
{
  tide_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tide_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const tide_msgs::msg::ShooterCmd & msg)
{
  return tide_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<tide_msgs::msg::ShooterCmd>()
{
  return "tide_msgs::msg::ShooterCmd";
}

template<>
inline const char * name<tide_msgs::msg::ShooterCmd>()
{
  return "tide_msgs/msg/ShooterCmd";
}

template<>
struct has_fixed_size<tide_msgs::msg::ShooterCmd>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tide_msgs::msg::ShooterCmd>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<tide_msgs::msg::ShooterCmd>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TIDE_MSGS__MSG__DETAIL__SHOOTER_CMD__TRAITS_HPP_
