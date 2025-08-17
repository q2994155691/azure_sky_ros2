// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tide_msgs:msg/GimbalCmd.idl
// generated code does not contain a copyright notice

#ifndef TIDE_MSGS__MSG__DETAIL__GIMBAL_CMD__TRAITS_HPP_
#define TIDE_MSGS__MSG__DETAIL__GIMBAL_CMD__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tide_msgs/msg/detail/gimbal_cmd__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace tide_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const GimbalCmd & msg,
  std::ostream & out)
{
  out << "{";
  // member: mode
  {
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
    out << ", ";
  }

  // member: pitch_ref
  {
    out << "pitch_ref: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch_ref, out);
    out << ", ";
  }

  // member: yaw_ref
  {
    out << "yaw_ref: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_ref, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GimbalCmd & msg,
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

  // member: pitch_ref
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pitch_ref: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch_ref, out);
    out << "\n";
  }

  // member: yaw_ref
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw_ref: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_ref, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GimbalCmd & msg, bool use_flow_style = false)
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
  const tide_msgs::msg::GimbalCmd & msg,
  std::ostream & out, size_t indentation = 0)
{
  tide_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tide_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const tide_msgs::msg::GimbalCmd & msg)
{
  return tide_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<tide_msgs::msg::GimbalCmd>()
{
  return "tide_msgs::msg::GimbalCmd";
}

template<>
inline const char * name<tide_msgs::msg::GimbalCmd>()
{
  return "tide_msgs/msg/GimbalCmd";
}

template<>
struct has_fixed_size<tide_msgs::msg::GimbalCmd>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tide_msgs::msg::GimbalCmd>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<tide_msgs::msg::GimbalCmd>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TIDE_MSGS__MSG__DETAIL__GIMBAL_CMD__TRAITS_HPP_
