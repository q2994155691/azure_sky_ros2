// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tide_msgs:msg/ShootData.idl
// generated code does not contain a copyright notice

#ifndef TIDE_MSGS__MSG__DETAIL__SHOOT_DATA__TRAITS_HPP_
#define TIDE_MSGS__MSG__DETAIL__SHOOT_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tide_msgs/msg/detail/shoot_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace tide_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ShootData & msg,
  std::ostream & out)
{
  out << "{";
  // member: bullet_type
  {
    out << "bullet_type: ";
    rosidl_generator_traits::value_to_yaml(msg.bullet_type, out);
    out << ", ";
  }

  // member: shooter_id
  {
    out << "shooter_id: ";
    rosidl_generator_traits::value_to_yaml(msg.shooter_id, out);
    out << ", ";
  }

  // member: bullet_freq
  {
    out << "bullet_freq: ";
    rosidl_generator_traits::value_to_yaml(msg.bullet_freq, out);
    out << ", ";
  }

  // member: bullet_speed
  {
    out << "bullet_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.bullet_speed, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ShootData & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: bullet_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bullet_type: ";
    rosidl_generator_traits::value_to_yaml(msg.bullet_type, out);
    out << "\n";
  }

  // member: shooter_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "shooter_id: ";
    rosidl_generator_traits::value_to_yaml(msg.shooter_id, out);
    out << "\n";
  }

  // member: bullet_freq
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bullet_freq: ";
    rosidl_generator_traits::value_to_yaml(msg.bullet_freq, out);
    out << "\n";
  }

  // member: bullet_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bullet_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.bullet_speed, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ShootData & msg, bool use_flow_style = false)
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
  const tide_msgs::msg::ShootData & msg,
  std::ostream & out, size_t indentation = 0)
{
  tide_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tide_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const tide_msgs::msg::ShootData & msg)
{
  return tide_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<tide_msgs::msg::ShootData>()
{
  return "tide_msgs::msg::ShootData";
}

template<>
inline const char * name<tide_msgs::msg::ShootData>()
{
  return "tide_msgs/msg/ShootData";
}

template<>
struct has_fixed_size<tide_msgs::msg::ShootData>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tide_msgs::msg::ShootData>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<tide_msgs::msg::ShootData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TIDE_MSGS__MSG__DETAIL__SHOOT_DATA__TRAITS_HPP_
