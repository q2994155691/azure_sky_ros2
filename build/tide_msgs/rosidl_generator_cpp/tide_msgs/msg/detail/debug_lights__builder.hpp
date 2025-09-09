// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tide_msgs:msg/DebugLights.idl
// generated code does not contain a copyright notice

#ifndef TIDE_MSGS__MSG__DETAIL__DEBUG_LIGHTS__BUILDER_HPP_
#define TIDE_MSGS__MSG__DETAIL__DEBUG_LIGHTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tide_msgs/msg/detail/debug_lights__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tide_msgs
{

namespace msg
{

namespace builder
{

class Init_DebugLights_data
{
public:
  Init_DebugLights_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tide_msgs::msg::DebugLights data(::tide_msgs::msg::DebugLights::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tide_msgs::msg::DebugLights msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tide_msgs::msg::DebugLights>()
{
  return tide_msgs::msg::builder::Init_DebugLights_data();
}

}  // namespace tide_msgs

#endif  // TIDE_MSGS__MSG__DETAIL__DEBUG_LIGHTS__BUILDER_HPP_
