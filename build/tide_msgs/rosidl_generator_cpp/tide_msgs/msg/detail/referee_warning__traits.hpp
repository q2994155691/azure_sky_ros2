// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tide_msgs:msg/RefereeWarning.idl
// generated code does not contain a copyright notice

#ifndef TIDE_MSGS__MSG__DETAIL__REFEREE_WARNING__TRAITS_HPP_
#define TIDE_MSGS__MSG__DETAIL__REFEREE_WARNING__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tide_msgs/msg/detail/referee_warning__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace tide_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RefereeWarning & msg,
  std::ostream & out)
{
  out << "{";
  // member: level
  {
    out << "level: ";
    rosidl_generator_traits::value_to_yaml(msg.level, out);
    out << ", ";
  }

  // member: offending_robot_id
  {
    out << "offending_robot_id: ";
    rosidl_generator_traits::value_to_yaml(msg.offending_robot_id, out);
    out << ", ";
  }

  // member: count
  {
    out << "count: ";
    rosidl_generator_traits::value_to_yaml(msg.count, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RefereeWarning & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: level
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "level: ";
    rosidl_generator_traits::value_to_yaml(msg.level, out);
    out << "\n";
  }

  // member: offending_robot_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "offending_robot_id: ";
    rosidl_generator_traits::value_to_yaml(msg.offending_robot_id, out);
    out << "\n";
  }

  // member: count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "count: ";
    rosidl_generator_traits::value_to_yaml(msg.count, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RefereeWarning & msg, bool use_flow_style = false)
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
  const tide_msgs::msg::RefereeWarning & msg,
  std::ostream & out, size_t indentation = 0)
{
  tide_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tide_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const tide_msgs::msg::RefereeWarning & msg)
{
  return tide_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<tide_msgs::msg::RefereeWarning>()
{
  return "tide_msgs::msg::RefereeWarning";
}

template<>
inline const char * name<tide_msgs::msg::RefereeWarning>()
{
  return "tide_msgs/msg/RefereeWarning";
}

template<>
struct has_fixed_size<tide_msgs::msg::RefereeWarning>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tide_msgs::msg::RefereeWarning>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<tide_msgs::msg::RefereeWarning>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TIDE_MSGS__MSG__DETAIL__REFEREE_WARNING__TRAITS_HPP_
