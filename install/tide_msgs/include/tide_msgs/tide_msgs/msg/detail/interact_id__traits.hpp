// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tide_msgs:msg/InteractID.idl
// generated code does not contain a copyright notice

#ifndef TIDE_MSGS__MSG__DETAIL__INTERACT_ID__TRAITS_HPP_
#define TIDE_MSGS__MSG__DETAIL__INTERACT_ID__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tide_msgs/msg/detail/interact_id__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace tide_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const InteractID & msg,
  std::ostream & out)
{
  out << "{";
  // member: teammate_hero
  {
    out << "teammate_hero: ";
    rosidl_generator_traits::value_to_yaml(msg.teammate_hero, out);
    out << ", ";
  }

  // member: teammate_infantry3
  {
    out << "teammate_infantry3: ";
    rosidl_generator_traits::value_to_yaml(msg.teammate_infantry3, out);
    out << ", ";
  }

  // member: teammate_infantry4
  {
    out << "teammate_infantry4: ";
    rosidl_generator_traits::value_to_yaml(msg.teammate_infantry4, out);
    out << ", ";
  }

  // member: teammate_infantry5
  {
    out << "teammate_infantry5: ";
    rosidl_generator_traits::value_to_yaml(msg.teammate_infantry5, out);
    out << ", ";
  }

  // member: teammate_sentry
  {
    out << "teammate_sentry: ";
    rosidl_generator_traits::value_to_yaml(msg.teammate_sentry, out);
    out << ", ";
  }

  // member: client_hero
  {
    out << "client_hero: ";
    rosidl_generator_traits::value_to_yaml(msg.client_hero, out);
    out << ", ";
  }

  // member: client_infantry3
  {
    out << "client_infantry3: ";
    rosidl_generator_traits::value_to_yaml(msg.client_infantry3, out);
    out << ", ";
  }

  // member: client_infantry4
  {
    out << "client_infantry4: ";
    rosidl_generator_traits::value_to_yaml(msg.client_infantry4, out);
    out << ", ";
  }

  // member: client_infantry5
  {
    out << "client_infantry5: ";
    rosidl_generator_traits::value_to_yaml(msg.client_infantry5, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const InteractID & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: teammate_hero
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "teammate_hero: ";
    rosidl_generator_traits::value_to_yaml(msg.teammate_hero, out);
    out << "\n";
  }

  // member: teammate_infantry3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "teammate_infantry3: ";
    rosidl_generator_traits::value_to_yaml(msg.teammate_infantry3, out);
    out << "\n";
  }

  // member: teammate_infantry4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "teammate_infantry4: ";
    rosidl_generator_traits::value_to_yaml(msg.teammate_infantry4, out);
    out << "\n";
  }

  // member: teammate_infantry5
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "teammate_infantry5: ";
    rosidl_generator_traits::value_to_yaml(msg.teammate_infantry5, out);
    out << "\n";
  }

  // member: teammate_sentry
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "teammate_sentry: ";
    rosidl_generator_traits::value_to_yaml(msg.teammate_sentry, out);
    out << "\n";
  }

  // member: client_hero
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "client_hero: ";
    rosidl_generator_traits::value_to_yaml(msg.client_hero, out);
    out << "\n";
  }

  // member: client_infantry3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "client_infantry3: ";
    rosidl_generator_traits::value_to_yaml(msg.client_infantry3, out);
    out << "\n";
  }

  // member: client_infantry4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "client_infantry4: ";
    rosidl_generator_traits::value_to_yaml(msg.client_infantry4, out);
    out << "\n";
  }

  // member: client_infantry5
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "client_infantry5: ";
    rosidl_generator_traits::value_to_yaml(msg.client_infantry5, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const InteractID & msg, bool use_flow_style = false)
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
  const tide_msgs::msg::InteractID & msg,
  std::ostream & out, size_t indentation = 0)
{
  tide_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tide_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const tide_msgs::msg::InteractID & msg)
{
  return tide_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<tide_msgs::msg::InteractID>()
{
  return "tide_msgs::msg::InteractID";
}

template<>
inline const char * name<tide_msgs::msg::InteractID>()
{
  return "tide_msgs/msg/InteractID";
}

template<>
struct has_fixed_size<tide_msgs::msg::InteractID>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tide_msgs::msg::InteractID>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<tide_msgs::msg::InteractID>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TIDE_MSGS__MSG__DETAIL__INTERACT_ID__TRAITS_HPP_
