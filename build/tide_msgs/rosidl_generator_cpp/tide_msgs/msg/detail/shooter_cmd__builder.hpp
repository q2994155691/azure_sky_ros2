// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tide_msgs:msg/ShooterCmd.idl
// generated code does not contain a copyright notice

#ifndef TIDE_MSGS__MSG__DETAIL__SHOOTER_CMD__BUILDER_HPP_
#define TIDE_MSGS__MSG__DETAIL__SHOOTER_CMD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tide_msgs/msg/detail/shooter_cmd__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tide_msgs
{

namespace msg
{

namespace builder
{

class Init_ShooterCmd_shooting_freq
{
public:
  explicit Init_ShooterCmd_shooting_freq(::tide_msgs::msg::ShooterCmd & msg)
  : msg_(msg)
  {}
  ::tide_msgs::msg::ShooterCmd shooting_freq(::tide_msgs::msg::ShooterCmd::_shooting_freq_type arg)
  {
    msg_.shooting_freq = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tide_msgs::msg::ShooterCmd msg_;
};

class Init_ShooterCmd_bullet_velocity
{
public:
  explicit Init_ShooterCmd_bullet_velocity(::tide_msgs::msg::ShooterCmd & msg)
  : msg_(msg)
  {}
  Init_ShooterCmd_shooting_freq bullet_velocity(::tide_msgs::msg::ShooterCmd::_bullet_velocity_type arg)
  {
    msg_.bullet_velocity = std::move(arg);
    return Init_ShooterCmd_shooting_freq(msg_);
  }

private:
  ::tide_msgs::msg::ShooterCmd msg_;
};

class Init_ShooterCmd_mode
{
public:
  Init_ShooterCmd_mode()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ShooterCmd_bullet_velocity mode(::tide_msgs::msg::ShooterCmd::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return Init_ShooterCmd_bullet_velocity(msg_);
  }

private:
  ::tide_msgs::msg::ShooterCmd msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tide_msgs::msg::ShooterCmd>()
{
  return tide_msgs::msg::builder::Init_ShooterCmd_mode();
}

}  // namespace tide_msgs

#endif  // TIDE_MSGS__MSG__DETAIL__SHOOTER_CMD__BUILDER_HPP_
