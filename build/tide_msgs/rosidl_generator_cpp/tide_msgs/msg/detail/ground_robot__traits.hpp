// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tide_msgs:msg/GroundRobot.idl
// generated code does not contain a copyright notice

#ifndef TIDE_MSGS__MSG__DETAIL__GROUND_ROBOT__TRAITS_HPP_
#define TIDE_MSGS__MSG__DETAIL__GROUND_ROBOT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tide_msgs/msg/detail/ground_robot__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace tide_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const GroundRobot & msg,
  std::ostream & out)
{
  out << "{";
  // member: hero_x
  {
    out << "hero_x: ";
    rosidl_generator_traits::value_to_yaml(msg.hero_x, out);
    out << ", ";
  }

  // member: hero_y
  {
    out << "hero_y: ";
    rosidl_generator_traits::value_to_yaml(msg.hero_y, out);
    out << ", ";
  }

  // member: engineer_x
  {
    out << "engineer_x: ";
    rosidl_generator_traits::value_to_yaml(msg.engineer_x, out);
    out << ", ";
  }

  // member: engineer_y
  {
    out << "engineer_y: ";
    rosidl_generator_traits::value_to_yaml(msg.engineer_y, out);
    out << ", ";
  }

  // member: standard_3_x
  {
    out << "standard_3_x: ";
    rosidl_generator_traits::value_to_yaml(msg.standard_3_x, out);
    out << ", ";
  }

  // member: standard_3_y
  {
    out << "standard_3_y: ";
    rosidl_generator_traits::value_to_yaml(msg.standard_3_y, out);
    out << ", ";
  }

  // member: standard_4_x
  {
    out << "standard_4_x: ";
    rosidl_generator_traits::value_to_yaml(msg.standard_4_x, out);
    out << ", ";
  }

  // member: standard_4_y
  {
    out << "standard_4_y: ";
    rosidl_generator_traits::value_to_yaml(msg.standard_4_y, out);
    out << ", ";
  }

  // member: reserved1
  {
    out << "reserved1: ";
    rosidl_generator_traits::value_to_yaml(msg.reserved1, out);
    out << ", ";
  }

  // member: reserved2
  {
    out << "reserved2: ";
    rosidl_generator_traits::value_to_yaml(msg.reserved2, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GroundRobot & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: hero_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hero_x: ";
    rosidl_generator_traits::value_to_yaml(msg.hero_x, out);
    out << "\n";
  }

  // member: hero_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hero_y: ";
    rosidl_generator_traits::value_to_yaml(msg.hero_y, out);
    out << "\n";
  }

  // member: engineer_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "engineer_x: ";
    rosidl_generator_traits::value_to_yaml(msg.engineer_x, out);
    out << "\n";
  }

  // member: engineer_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "engineer_y: ";
    rosidl_generator_traits::value_to_yaml(msg.engineer_y, out);
    out << "\n";
  }

  // member: standard_3_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "standard_3_x: ";
    rosidl_generator_traits::value_to_yaml(msg.standard_3_x, out);
    out << "\n";
  }

  // member: standard_3_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "standard_3_y: ";
    rosidl_generator_traits::value_to_yaml(msg.standard_3_y, out);
    out << "\n";
  }

  // member: standard_4_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "standard_4_x: ";
    rosidl_generator_traits::value_to_yaml(msg.standard_4_x, out);
    out << "\n";
  }

  // member: standard_4_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "standard_4_y: ";
    rosidl_generator_traits::value_to_yaml(msg.standard_4_y, out);
    out << "\n";
  }

  // member: reserved1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reserved1: ";
    rosidl_generator_traits::value_to_yaml(msg.reserved1, out);
    out << "\n";
  }

  // member: reserved2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reserved2: ";
    rosidl_generator_traits::value_to_yaml(msg.reserved2, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GroundRobot & msg, bool use_flow_style = false)
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
  const tide_msgs::msg::GroundRobot & msg,
  std::ostream & out, size_t indentation = 0)
{
  tide_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tide_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const tide_msgs::msg::GroundRobot & msg)
{
  return tide_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<tide_msgs::msg::GroundRobot>()
{
  return "tide_msgs::msg::GroundRobot";
}

template<>
inline const char * name<tide_msgs::msg::GroundRobot>()
{
  return "tide_msgs/msg/GroundRobot";
}

template<>
struct has_fixed_size<tide_msgs::msg::GroundRobot>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tide_msgs::msg::GroundRobot>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<tide_msgs::msg::GroundRobot>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TIDE_MSGS__MSG__DETAIL__GROUND_ROBOT__TRAITS_HPP_
