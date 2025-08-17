// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tide_msgs:msg/RobotHurt.idl
// generated code does not contain a copyright notice

#ifndef TIDE_MSGS__MSG__DETAIL__ROBOT_HURT__BUILDER_HPP_
#define TIDE_MSGS__MSG__DETAIL__ROBOT_HURT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tide_msgs/msg/detail/robot_hurt__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tide_msgs
{

namespace msg
{

namespace builder
{

class Init_RobotHurt_hurt_type
{
public:
  explicit Init_RobotHurt_hurt_type(::tide_msgs::msg::RobotHurt & msg)
  : msg_(msg)
  {}
  ::tide_msgs::msg::RobotHurt hurt_type(::tide_msgs::msg::RobotHurt::_hurt_type_type arg)
  {
    msg_.hurt_type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tide_msgs::msg::RobotHurt msg_;
};

class Init_RobotHurt_armor_id
{
public:
  Init_RobotHurt_armor_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotHurt_hurt_type armor_id(::tide_msgs::msg::RobotHurt::_armor_id_type arg)
  {
    msg_.armor_id = std::move(arg);
    return Init_RobotHurt_hurt_type(msg_);
  }

private:
  ::tide_msgs::msg::RobotHurt msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tide_msgs::msg::RobotHurt>()
{
  return tide_msgs::msg::builder::Init_RobotHurt_armor_id();
}

}  // namespace tide_msgs

#endif  // TIDE_MSGS__MSG__DETAIL__ROBOT_HURT__BUILDER_HPP_
