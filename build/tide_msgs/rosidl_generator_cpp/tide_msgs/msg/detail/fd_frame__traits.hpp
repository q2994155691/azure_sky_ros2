// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tide_msgs:msg/FdFrame.idl
// generated code does not contain a copyright notice

#ifndef TIDE_MSGS__MSG__DETAIL__FD_FRAME__TRAITS_HPP_
#define TIDE_MSGS__MSG__DETAIL__FD_FRAME__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tide_msgs/msg/detail/fd_frame__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace tide_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const FdFrame & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: is_extended
  {
    out << "is_extended: ";
    rosidl_generator_traits::value_to_yaml(msg.is_extended, out);
    out << ", ";
  }

  // member: is_error
  {
    out << "is_error: ";
    rosidl_generator_traits::value_to_yaml(msg.is_error, out);
    out << ", ";
  }

  // member: len
  {
    out << "len: ";
    rosidl_generator_traits::value_to_yaml(msg.len, out);
    out << ", ";
  }

  // member: data
  {
    if (msg.data.size() == 0) {
      out << "data: []";
    } else {
      out << "data: [";
      size_t pending_items = msg.data.size();
      for (auto item : msg.data) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FdFrame & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: is_extended
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_extended: ";
    rosidl_generator_traits::value_to_yaml(msg.is_extended, out);
    out << "\n";
  }

  // member: is_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_error: ";
    rosidl_generator_traits::value_to_yaml(msg.is_error, out);
    out << "\n";
  }

  // member: len
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "len: ";
    rosidl_generator_traits::value_to_yaml(msg.len, out);
    out << "\n";
  }

  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.data.size() == 0) {
      out << "data: []\n";
    } else {
      out << "data:\n";
      for (auto item : msg.data) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FdFrame & msg, bool use_flow_style = false)
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
  const tide_msgs::msg::FdFrame & msg,
  std::ostream & out, size_t indentation = 0)
{
  tide_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tide_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const tide_msgs::msg::FdFrame & msg)
{
  return tide_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<tide_msgs::msg::FdFrame>()
{
  return "tide_msgs::msg::FdFrame";
}

template<>
inline const char * name<tide_msgs::msg::FdFrame>()
{
  return "tide_msgs/msg/FdFrame";
}

template<>
struct has_fixed_size<tide_msgs::msg::FdFrame>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tide_msgs::msg::FdFrame>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<tide_msgs::msg::FdFrame>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TIDE_MSGS__MSG__DETAIL__FD_FRAME__TRAITS_HPP_
