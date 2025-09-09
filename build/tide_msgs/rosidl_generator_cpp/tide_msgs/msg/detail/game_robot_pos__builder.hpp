// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tide_msgs:msg/GameRobotPos.idl
// generated code does not contain a copyright notice

#ifndef TIDE_MSGS__MSG__DETAIL__GAME_ROBOT_POS__BUILDER_HPP_
#define TIDE_MSGS__MSG__DETAIL__GAME_ROBOT_POS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tide_msgs/msg/detail/game_robot_pos__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tide_msgs
{

namespace msg
{

namespace builder
{

class Init_GameRobotPos_angle
{
public:
  explicit Init_GameRobotPos_angle(::tide_msgs::msg::GameRobotPos & msg)
  : msg_(msg)
  {}
  ::tide_msgs::msg::GameRobotPos angle(::tide_msgs::msg::GameRobotPos::_angle_type arg)
  {
    msg_.angle = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tide_msgs::msg::GameRobotPos msg_;
};

class Init_GameRobotPos_y
{
public:
  explicit Init_GameRobotPos_y(::tide_msgs::msg::GameRobotPos & msg)
  : msg_(msg)
  {}
  Init_GameRobotPos_angle y(::tide_msgs::msg::GameRobotPos::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_GameRobotPos_angle(msg_);
  }

private:
  ::tide_msgs::msg::GameRobotPos msg_;
};

class Init_GameRobotPos_x
{
public:
  Init_GameRobotPos_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GameRobotPos_y x(::tide_msgs::msg::GameRobotPos::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_GameRobotPos_y(msg_);
  }

private:
  ::tide_msgs::msg::GameRobotPos msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tide_msgs::msg::GameRobotPos>()
{
  return tide_msgs::msg::builder::Init_GameRobotPos_x();
}

}  // namespace tide_msgs

#endif  // TIDE_MSGS__MSG__DETAIL__GAME_ROBOT_POS__BUILDER_HPP_
