// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tide_msgs:msg/DebugLight.idl
// generated code does not contain a copyright notice

#ifndef TIDE_MSGS__MSG__DETAIL__DEBUG_LIGHT__BUILDER_HPP_
#define TIDE_MSGS__MSG__DETAIL__DEBUG_LIGHT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tide_msgs/msg/detail/debug_light__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tide_msgs
{

namespace msg
{

namespace builder
{

class Init_DebugLight_angle
{
public:
  explicit Init_DebugLight_angle(::tide_msgs::msg::DebugLight & msg)
  : msg_(msg)
  {}
  ::tide_msgs::msg::DebugLight angle(::tide_msgs::msg::DebugLight::_angle_type arg)
  {
    msg_.angle = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tide_msgs::msg::DebugLight msg_;
};

class Init_DebugLight_ratio
{
public:
  explicit Init_DebugLight_ratio(::tide_msgs::msg::DebugLight & msg)
  : msg_(msg)
  {}
  Init_DebugLight_angle ratio(::tide_msgs::msg::DebugLight::_ratio_type arg)
  {
    msg_.ratio = std::move(arg);
    return Init_DebugLight_angle(msg_);
  }

private:
  ::tide_msgs::msg::DebugLight msg_;
};

class Init_DebugLight_is_light
{
public:
  explicit Init_DebugLight_is_light(::tide_msgs::msg::DebugLight & msg)
  : msg_(msg)
  {}
  Init_DebugLight_ratio is_light(::tide_msgs::msg::DebugLight::_is_light_type arg)
  {
    msg_.is_light = std::move(arg);
    return Init_DebugLight_ratio(msg_);
  }

private:
  ::tide_msgs::msg::DebugLight msg_;
};

class Init_DebugLight_center_x
{
public:
  Init_DebugLight_center_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DebugLight_is_light center_x(::tide_msgs::msg::DebugLight::_center_x_type arg)
  {
    msg_.center_x = std::move(arg);
    return Init_DebugLight_is_light(msg_);
  }

private:
  ::tide_msgs::msg::DebugLight msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tide_msgs::msg::DebugLight>()
{
  return tide_msgs::msg::builder::Init_DebugLight_center_x();
}

}  // namespace tide_msgs

#endif  // TIDE_MSGS__MSG__DETAIL__DEBUG_LIGHT__BUILDER_HPP_
