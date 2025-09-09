// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tide_msgs:msg/ShooterState.idl
// generated code does not contain a copyright notice

#ifndef TIDE_MSGS__MSG__DETAIL__SHOOTER_STATE__BUILDER_HPP_
#define TIDE_MSGS__MSG__DETAIL__SHOOTER_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tide_msgs/msg/detail/shooter_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tide_msgs
{

namespace msg
{

namespace builder
{

class Init_ShooterState_shooting_freq
{
public:
  explicit Init_ShooterState_shooting_freq(::tide_msgs::msg::ShooterState & msg)
  : msg_(msg)
  {}
  ::tide_msgs::msg::ShooterState shooting_freq(::tide_msgs::msg::ShooterState::_shooting_freq_type arg)
  {
    msg_.shooting_freq = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tide_msgs::msg::ShooterState msg_;
};

class Init_ShooterState_bullet_velocity
{
public:
  explicit Init_ShooterState_bullet_velocity(::tide_msgs::msg::ShooterState & msg)
  : msg_(msg)
  {}
  Init_ShooterState_shooting_freq bullet_velocity(::tide_msgs::msg::ShooterState::_bullet_velocity_type arg)
  {
    msg_.bullet_velocity = std::move(arg);
    return Init_ShooterState_shooting_freq(msg_);
  }

private:
  ::tide_msgs::msg::ShooterState msg_;
};

class Init_ShooterState_mode
{
public:
  explicit Init_ShooterState_mode(::tide_msgs::msg::ShooterState & msg)
  : msg_(msg)
  {}
  Init_ShooterState_bullet_velocity mode(::tide_msgs::msg::ShooterState::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return Init_ShooterState_bullet_velocity(msg_);
  }

private:
  ::tide_msgs::msg::ShooterState msg_;
};

class Init_ShooterState_header
{
public:
  Init_ShooterState_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ShooterState_mode header(::tide_msgs::msg::ShooterState::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ShooterState_mode(msg_);
  }

private:
  ::tide_msgs::msg::ShooterState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tide_msgs::msg::ShooterState>()
{
  return tide_msgs::msg::builder::Init_ShooterState_header();
}

}  // namespace tide_msgs

#endif  // TIDE_MSGS__MSG__DETAIL__SHOOTER_STATE__BUILDER_HPP_
