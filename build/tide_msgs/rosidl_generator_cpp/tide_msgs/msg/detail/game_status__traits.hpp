// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tide_msgs:msg/GameStatus.idl
// generated code does not contain a copyright notice

#ifndef TIDE_MSGS__MSG__DETAIL__GAME_STATUS__TRAITS_HPP_
#define TIDE_MSGS__MSG__DETAIL__GAME_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tide_msgs/msg/detail/game_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace tide_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const GameStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: game_type
  {
    out << "game_type: ";
    rosidl_generator_traits::value_to_yaml(msg.game_type, out);
    out << ", ";
  }

  // member: game_progress
  {
    out << "game_progress: ";
    rosidl_generator_traits::value_to_yaml(msg.game_progress, out);
    out << ", ";
  }

  // member: stage_remain_time
  {
    out << "stage_remain_time: ";
    rosidl_generator_traits::value_to_yaml(msg.stage_remain_time, out);
    out << ", ";
  }

  // member: sync_timestamp
  {
    out << "sync_timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.sync_timestamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GameStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: game_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "game_type: ";
    rosidl_generator_traits::value_to_yaml(msg.game_type, out);
    out << "\n";
  }

  // member: game_progress
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "game_progress: ";
    rosidl_generator_traits::value_to_yaml(msg.game_progress, out);
    out << "\n";
  }

  // member: stage_remain_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stage_remain_time: ";
    rosidl_generator_traits::value_to_yaml(msg.stage_remain_time, out);
    out << "\n";
  }

  // member: sync_timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sync_timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.sync_timestamp, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GameStatus & msg, bool use_flow_style = false)
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
  const tide_msgs::msg::GameStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  tide_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tide_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const tide_msgs::msg::GameStatus & msg)
{
  return tide_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<tide_msgs::msg::GameStatus>()
{
  return "tide_msgs::msg::GameStatus";
}

template<>
inline const char * name<tide_msgs::msg::GameStatus>()
{
  return "tide_msgs/msg/GameStatus";
}

template<>
struct has_fixed_size<tide_msgs::msg::GameStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tide_msgs::msg::GameStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<tide_msgs::msg::GameStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TIDE_MSGS__MSG__DETAIL__GAME_STATUS__TRAITS_HPP_
