// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tide_msgs:msg/BulletRemaining.idl
// generated code does not contain a copyright notice

#ifndef TIDE_MSGS__MSG__DETAIL__BULLET_REMAINING__TRAITS_HPP_
#define TIDE_MSGS__MSG__DETAIL__BULLET_REMAINING__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tide_msgs/msg/detail/bullet_remaining__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace tide_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const BulletRemaining & msg,
  std::ostream & out)
{
  out << "{";
  // member: bullet_remaining_num_17mm
  {
    out << "bullet_remaining_num_17mm: ";
    rosidl_generator_traits::value_to_yaml(msg.bullet_remaining_num_17mm, out);
    out << ", ";
  }

  // member: bullet_remaining_num_42mm
  {
    out << "bullet_remaining_num_42mm: ";
    rosidl_generator_traits::value_to_yaml(msg.bullet_remaining_num_42mm, out);
    out << ", ";
  }

  // member: coin_remaining_num
  {
    out << "coin_remaining_num: ";
    rosidl_generator_traits::value_to_yaml(msg.coin_remaining_num, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BulletRemaining & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: bullet_remaining_num_17mm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bullet_remaining_num_17mm: ";
    rosidl_generator_traits::value_to_yaml(msg.bullet_remaining_num_17mm, out);
    out << "\n";
  }

  // member: bullet_remaining_num_42mm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bullet_remaining_num_42mm: ";
    rosidl_generator_traits::value_to_yaml(msg.bullet_remaining_num_42mm, out);
    out << "\n";
  }

  // member: coin_remaining_num
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "coin_remaining_num: ";
    rosidl_generator_traits::value_to_yaml(msg.coin_remaining_num, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BulletRemaining & msg, bool use_flow_style = false)
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
  const tide_msgs::msg::BulletRemaining & msg,
  std::ostream & out, size_t indentation = 0)
{
  tide_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tide_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const tide_msgs::msg::BulletRemaining & msg)
{
  return tide_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<tide_msgs::msg::BulletRemaining>()
{
  return "tide_msgs::msg::BulletRemaining";
}

template<>
inline const char * name<tide_msgs::msg::BulletRemaining>()
{
  return "tide_msgs/msg/BulletRemaining";
}

template<>
struct has_fixed_size<tide_msgs::msg::BulletRemaining>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tide_msgs::msg::BulletRemaining>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<tide_msgs::msg::BulletRemaining>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TIDE_MSGS__MSG__DETAIL__BULLET_REMAINING__TRAITS_HPP_
