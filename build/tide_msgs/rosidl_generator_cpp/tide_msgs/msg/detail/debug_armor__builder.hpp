// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tide_msgs:msg/DebugArmor.idl
// generated code does not contain a copyright notice

#ifndef TIDE_MSGS__MSG__DETAIL__DEBUG_ARMOR__BUILDER_HPP_
#define TIDE_MSGS__MSG__DETAIL__DEBUG_ARMOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tide_msgs/msg/detail/debug_armor__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tide_msgs
{

namespace msg
{

namespace builder
{

class Init_DebugArmor_angle
{
public:
  explicit Init_DebugArmor_angle(::tide_msgs::msg::DebugArmor & msg)
  : msg_(msg)
  {}
  ::tide_msgs::msg::DebugArmor angle(::tide_msgs::msg::DebugArmor::_angle_type arg)
  {
    msg_.angle = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tide_msgs::msg::DebugArmor msg_;
};

class Init_DebugArmor_center_distance
{
public:
  explicit Init_DebugArmor_center_distance(::tide_msgs::msg::DebugArmor & msg)
  : msg_(msg)
  {}
  Init_DebugArmor_angle center_distance(::tide_msgs::msg::DebugArmor::_center_distance_type arg)
  {
    msg_.center_distance = std::move(arg);
    return Init_DebugArmor_angle(msg_);
  }

private:
  ::tide_msgs::msg::DebugArmor msg_;
};

class Init_DebugArmor_light_ratio
{
public:
  explicit Init_DebugArmor_light_ratio(::tide_msgs::msg::DebugArmor & msg)
  : msg_(msg)
  {}
  Init_DebugArmor_center_distance light_ratio(::tide_msgs::msg::DebugArmor::_light_ratio_type arg)
  {
    msg_.light_ratio = std::move(arg);
    return Init_DebugArmor_center_distance(msg_);
  }

private:
  ::tide_msgs::msg::DebugArmor msg_;
};

class Init_DebugArmor_type
{
public:
  explicit Init_DebugArmor_type(::tide_msgs::msg::DebugArmor & msg)
  : msg_(msg)
  {}
  Init_DebugArmor_light_ratio type(::tide_msgs::msg::DebugArmor::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_DebugArmor_light_ratio(msg_);
  }

private:
  ::tide_msgs::msg::DebugArmor msg_;
};

class Init_DebugArmor_center_x
{
public:
  Init_DebugArmor_center_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DebugArmor_type center_x(::tide_msgs::msg::DebugArmor::_center_x_type arg)
  {
    msg_.center_x = std::move(arg);
    return Init_DebugArmor_type(msg_);
  }

private:
  ::tide_msgs::msg::DebugArmor msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tide_msgs::msg::DebugArmor>()
{
  return tide_msgs::msg::builder::Init_DebugArmor_center_x();
}

}  // namespace tide_msgs

#endif  // TIDE_MSGS__MSG__DETAIL__DEBUG_ARMOR__BUILDER_HPP_
