// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tide_msgs:msg/PowerHeatData.idl
// generated code does not contain a copyright notice

#ifndef TIDE_MSGS__MSG__DETAIL__POWER_HEAT_DATA__TRAITS_HPP_
#define TIDE_MSGS__MSG__DETAIL__POWER_HEAT_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tide_msgs/msg/detail/power_heat_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace tide_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PowerHeatData & msg,
  std::ostream & out)
{
  out << "{";
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
    out << ", ";
  }

  // member: reserved3
  {
    out << "reserved3: ";
    rosidl_generator_traits::value_to_yaml(msg.reserved3, out);
    out << ", ";
  }

  // member: buffer_energy
  {
    out << "buffer_energy: ";
    rosidl_generator_traits::value_to_yaml(msg.buffer_energy, out);
    out << ", ";
  }

  // member: shooter_id1_17mm_cooling_heat
  {
    out << "shooter_id1_17mm_cooling_heat: ";
    rosidl_generator_traits::value_to_yaml(msg.shooter_id1_17mm_cooling_heat, out);
    out << ", ";
  }

  // member: shooter_id2_17mm_cooling_heat
  {
    out << "shooter_id2_17mm_cooling_heat: ";
    rosidl_generator_traits::value_to_yaml(msg.shooter_id2_17mm_cooling_heat, out);
    out << ", ";
  }

  // member: shooter_id1_42mm_cooling_heat
  {
    out << "shooter_id1_42mm_cooling_heat: ";
    rosidl_generator_traits::value_to_yaml(msg.shooter_id1_42mm_cooling_heat, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PowerHeatData & msg,
  std::ostream & out, size_t indentation = 0)
{
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

  // member: reserved3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reserved3: ";
    rosidl_generator_traits::value_to_yaml(msg.reserved3, out);
    out << "\n";
  }

  // member: buffer_energy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "buffer_energy: ";
    rosidl_generator_traits::value_to_yaml(msg.buffer_energy, out);
    out << "\n";
  }

  // member: shooter_id1_17mm_cooling_heat
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "shooter_id1_17mm_cooling_heat: ";
    rosidl_generator_traits::value_to_yaml(msg.shooter_id1_17mm_cooling_heat, out);
    out << "\n";
  }

  // member: shooter_id2_17mm_cooling_heat
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "shooter_id2_17mm_cooling_heat: ";
    rosidl_generator_traits::value_to_yaml(msg.shooter_id2_17mm_cooling_heat, out);
    out << "\n";
  }

  // member: shooter_id1_42mm_cooling_heat
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "shooter_id1_42mm_cooling_heat: ";
    rosidl_generator_traits::value_to_yaml(msg.shooter_id1_42mm_cooling_heat, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PowerHeatData & msg, bool use_flow_style = false)
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
  const tide_msgs::msg::PowerHeatData & msg,
  std::ostream & out, size_t indentation = 0)
{
  tide_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tide_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const tide_msgs::msg::PowerHeatData & msg)
{
  return tide_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<tide_msgs::msg::PowerHeatData>()
{
  return "tide_msgs::msg::PowerHeatData";
}

template<>
inline const char * name<tide_msgs::msg::PowerHeatData>()
{
  return "tide_msgs/msg/PowerHeatData";
}

template<>
struct has_fixed_size<tide_msgs::msg::PowerHeatData>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tide_msgs::msg::PowerHeatData>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<tide_msgs::msg::PowerHeatData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TIDE_MSGS__MSG__DETAIL__POWER_HEAT_DATA__TRAITS_HPP_
