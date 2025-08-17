// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tide_msgs:msg/GameRobotHP.idl
// generated code does not contain a copyright notice

#ifndef TIDE_MSGS__MSG__DETAIL__GAME_ROBOT_HP__TRAITS_HPP_
#define TIDE_MSGS__MSG__DETAIL__GAME_ROBOT_HP__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tide_msgs/msg/detail/game_robot_hp__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace tide_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const GameRobotHP & msg,
  std::ostream & out)
{
  out << "{";
  // member: red1robot_hp
  {
    out << "red1robot_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.red1robot_hp, out);
    out << ", ";
  }

  // member: red2robot_hp
  {
    out << "red2robot_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.red2robot_hp, out);
    out << ", ";
  }

  // member: red3robot_hp
  {
    out << "red3robot_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.red3robot_hp, out);
    out << ", ";
  }

  // member: red4robot_hp
  {
    out << "red4robot_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.red4robot_hp, out);
    out << ", ";
  }

  // member: reserved1
  {
    out << "reserved1: ";
    rosidl_generator_traits::value_to_yaml(msg.reserved1, out);
    out << ", ";
  }

  // member: red7robot_hp
  {
    out << "red7robot_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.red7robot_hp, out);
    out << ", ";
  }

  // member: redoutpost_hp
  {
    out << "redoutpost_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.redoutpost_hp, out);
    out << ", ";
  }

  // member: redbase_hp
  {
    out << "redbase_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.redbase_hp, out);
    out << ", ";
  }

  // member: blue1robot_hp
  {
    out << "blue1robot_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.blue1robot_hp, out);
    out << ", ";
  }

  // member: blue2robot_hp
  {
    out << "blue2robot_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.blue2robot_hp, out);
    out << ", ";
  }

  // member: blue3robot_hp
  {
    out << "blue3robot_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.blue3robot_hp, out);
    out << ", ";
  }

  // member: blue4robot_hp
  {
    out << "blue4robot_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.blue4robot_hp, out);
    out << ", ";
  }

  // member: reserved2
  {
    out << "reserved2: ";
    rosidl_generator_traits::value_to_yaml(msg.reserved2, out);
    out << ", ";
  }

  // member: blue7robot_hp
  {
    out << "blue7robot_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.blue7robot_hp, out);
    out << ", ";
  }

  // member: blueoutpost_hp
  {
    out << "blueoutpost_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.blueoutpost_hp, out);
    out << ", ";
  }

  // member: bluebase_hp
  {
    out << "bluebase_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.bluebase_hp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GameRobotHP & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: red1robot_hp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "red1robot_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.red1robot_hp, out);
    out << "\n";
  }

  // member: red2robot_hp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "red2robot_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.red2robot_hp, out);
    out << "\n";
  }

  // member: red3robot_hp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "red3robot_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.red3robot_hp, out);
    out << "\n";
  }

  // member: red4robot_hp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "red4robot_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.red4robot_hp, out);
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

  // member: red7robot_hp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "red7robot_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.red7robot_hp, out);
    out << "\n";
  }

  // member: redoutpost_hp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "redoutpost_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.redoutpost_hp, out);
    out << "\n";
  }

  // member: redbase_hp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "redbase_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.redbase_hp, out);
    out << "\n";
  }

  // member: blue1robot_hp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "blue1robot_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.blue1robot_hp, out);
    out << "\n";
  }

  // member: blue2robot_hp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "blue2robot_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.blue2robot_hp, out);
    out << "\n";
  }

  // member: blue3robot_hp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "blue3robot_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.blue3robot_hp, out);
    out << "\n";
  }

  // member: blue4robot_hp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "blue4robot_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.blue4robot_hp, out);
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

  // member: blue7robot_hp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "blue7robot_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.blue7robot_hp, out);
    out << "\n";
  }

  // member: blueoutpost_hp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "blueoutpost_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.blueoutpost_hp, out);
    out << "\n";
  }

  // member: bluebase_hp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bluebase_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.bluebase_hp, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GameRobotHP & msg, bool use_flow_style = false)
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
  const tide_msgs::msg::GameRobotHP & msg,
  std::ostream & out, size_t indentation = 0)
{
  tide_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tide_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const tide_msgs::msg::GameRobotHP & msg)
{
  return tide_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<tide_msgs::msg::GameRobotHP>()
{
  return "tide_msgs::msg::GameRobotHP";
}

template<>
inline const char * name<tide_msgs::msg::GameRobotHP>()
{
  return "tide_msgs/msg/GameRobotHP";
}

template<>
struct has_fixed_size<tide_msgs::msg::GameRobotHP>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tide_msgs::msg::GameRobotHP>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<tide_msgs::msg::GameRobotHP>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TIDE_MSGS__MSG__DETAIL__GAME_ROBOT_HP__TRAITS_HPP_
