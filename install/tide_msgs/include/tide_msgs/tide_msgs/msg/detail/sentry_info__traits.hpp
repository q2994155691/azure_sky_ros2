// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tide_msgs:msg/SentryInfo.idl
// generated code does not contain a copyright notice

#ifndef TIDE_MSGS__MSG__DETAIL__SENTRY_INFO__TRAITS_HPP_
#define TIDE_MSGS__MSG__DETAIL__SENTRY_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tide_msgs/msg/detail/sentry_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace tide_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SentryInfo & msg,
  std::ostream & out)
{
  out << "{";
  // member: sentry_info
  {
    out << "sentry_info: ";
    rosidl_generator_traits::value_to_yaml(msg.sentry_info, out);
    out << ", ";
  }

  // member: sentry_info_2
  {
    out << "sentry_info_2: ";
    rosidl_generator_traits::value_to_yaml(msg.sentry_info_2, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SentryInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: sentry_info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sentry_info: ";
    rosidl_generator_traits::value_to_yaml(msg.sentry_info, out);
    out << "\n";
  }

  // member: sentry_info_2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sentry_info_2: ";
    rosidl_generator_traits::value_to_yaml(msg.sentry_info_2, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SentryInfo & msg, bool use_flow_style = false)
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
  const tide_msgs::msg::SentryInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  tide_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tide_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const tide_msgs::msg::SentryInfo & msg)
{
  return tide_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<tide_msgs::msg::SentryInfo>()
{
  return "tide_msgs::msg::SentryInfo";
}

template<>
inline const char * name<tide_msgs::msg::SentryInfo>()
{
  return "tide_msgs/msg/SentryInfo";
}

template<>
struct has_fixed_size<tide_msgs::msg::SentryInfo>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tide_msgs::msg::SentryInfo>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<tide_msgs::msg::SentryInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TIDE_MSGS__MSG__DETAIL__SENTRY_INFO__TRAITS_HPP_
