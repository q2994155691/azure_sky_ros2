// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tide_msgs:msg/TrackerInfo.idl
// generated code does not contain a copyright notice

#ifndef TIDE_MSGS__MSG__DETAIL__TRACKER_INFO__TRAITS_HPP_
#define TIDE_MSGS__MSG__DETAIL__TRACKER_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tide_msgs/msg/detail/tracker_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'position'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace tide_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const TrackerInfo & msg,
  std::ostream & out)
{
  out << "{";
  // member: position_diff
  {
    out << "position_diff: ";
    rosidl_generator_traits::value_to_yaml(msg.position_diff, out);
    out << ", ";
  }

  // member: yaw_diff
  {
    out << "yaw_diff: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_diff, out);
    out << ", ";
  }

  // member: position
  {
    out << "position: ";
    to_flow_style_yaml(msg.position, out);
    out << ", ";
  }

  // member: yaw
  {
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TrackerInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: position_diff
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position_diff: ";
    rosidl_generator_traits::value_to_yaml(msg.position_diff, out);
    out << "\n";
  }

  // member: yaw_diff
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw_diff: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_diff, out);
    out << "\n";
  }

  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position:\n";
    to_block_style_yaml(msg.position, out, indentation + 2);
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TrackerInfo & msg, bool use_flow_style = false)
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
  const tide_msgs::msg::TrackerInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  tide_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tide_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const tide_msgs::msg::TrackerInfo & msg)
{
  return tide_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<tide_msgs::msg::TrackerInfo>()
{
  return "tide_msgs::msg::TrackerInfo";
}

template<>
inline const char * name<tide_msgs::msg::TrackerInfo>()
{
  return "tide_msgs/msg/TrackerInfo";
}

template<>
struct has_fixed_size<tide_msgs::msg::TrackerInfo>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Point>::value> {};

template<>
struct has_bounded_size<tide_msgs::msg::TrackerInfo>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Point>::value> {};

template<>
struct is_message<tide_msgs::msg::TrackerInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TIDE_MSGS__MSG__DETAIL__TRACKER_INFO__TRAITS_HPP_
