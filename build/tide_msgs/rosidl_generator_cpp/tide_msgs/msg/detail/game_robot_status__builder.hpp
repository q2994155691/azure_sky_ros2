// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tide_msgs:msg/GameRobotStatus.idl
// generated code does not contain a copyright notice

#ifndef TIDE_MSGS__MSG__DETAIL__GAME_ROBOT_STATUS__BUILDER_HPP_
#define TIDE_MSGS__MSG__DETAIL__GAME_ROBOT_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tide_msgs/msg/detail/game_robot_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tide_msgs
{

namespace msg
{

namespace builder
{

class Init_GameRobotStatus_power_management_shooter_output
{
public:
  explicit Init_GameRobotStatus_power_management_shooter_output(::tide_msgs::msg::GameRobotStatus & msg)
  : msg_(msg)
  {}
  ::tide_msgs::msg::GameRobotStatus power_management_shooter_output(::tide_msgs::msg::GameRobotStatus::_power_management_shooter_output_type arg)
  {
    msg_.power_management_shooter_output = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tide_msgs::msg::GameRobotStatus msg_;
};

class Init_GameRobotStatus_power_management_chassis_output
{
public:
  explicit Init_GameRobotStatus_power_management_chassis_output(::tide_msgs::msg::GameRobotStatus & msg)
  : msg_(msg)
  {}
  Init_GameRobotStatus_power_management_shooter_output power_management_chassis_output(::tide_msgs::msg::GameRobotStatus::_power_management_chassis_output_type arg)
  {
    msg_.power_management_chassis_output = std::move(arg);
    return Init_GameRobotStatus_power_management_shooter_output(msg_);
  }

private:
  ::tide_msgs::msg::GameRobotStatus msg_;
};

class Init_GameRobotStatus_power_management_gimbal_output
{
public:
  explicit Init_GameRobotStatus_power_management_gimbal_output(::tide_msgs::msg::GameRobotStatus & msg)
  : msg_(msg)
  {}
  Init_GameRobotStatus_power_management_chassis_output power_management_gimbal_output(::tide_msgs::msg::GameRobotStatus::_power_management_gimbal_output_type arg)
  {
    msg_.power_management_gimbal_output = std::move(arg);
    return Init_GameRobotStatus_power_management_chassis_output(msg_);
  }

private:
  ::tide_msgs::msg::GameRobotStatus msg_;
};

class Init_GameRobotStatus_chassis_power_limit
{
public:
  explicit Init_GameRobotStatus_chassis_power_limit(::tide_msgs::msg::GameRobotStatus & msg)
  : msg_(msg)
  {}
  Init_GameRobotStatus_power_management_gimbal_output chassis_power_limit(::tide_msgs::msg::GameRobotStatus::_chassis_power_limit_type arg)
  {
    msg_.chassis_power_limit = std::move(arg);
    return Init_GameRobotStatus_power_management_gimbal_output(msg_);
  }

private:
  ::tide_msgs::msg::GameRobotStatus msg_;
};

class Init_GameRobotStatus_shooter_barrel_heat_limit
{
public:
  explicit Init_GameRobotStatus_shooter_barrel_heat_limit(::tide_msgs::msg::GameRobotStatus & msg)
  : msg_(msg)
  {}
  Init_GameRobotStatus_chassis_power_limit shooter_barrel_heat_limit(::tide_msgs::msg::GameRobotStatus::_shooter_barrel_heat_limit_type arg)
  {
    msg_.shooter_barrel_heat_limit = std::move(arg);
    return Init_GameRobotStatus_chassis_power_limit(msg_);
  }

private:
  ::tide_msgs::msg::GameRobotStatus msg_;
};

class Init_GameRobotStatus_shooter_barrel_cooling_value
{
public:
  explicit Init_GameRobotStatus_shooter_barrel_cooling_value(::tide_msgs::msg::GameRobotStatus & msg)
  : msg_(msg)
  {}
  Init_GameRobotStatus_shooter_barrel_heat_limit shooter_barrel_cooling_value(::tide_msgs::msg::GameRobotStatus::_shooter_barrel_cooling_value_type arg)
  {
    msg_.shooter_barrel_cooling_value = std::move(arg);
    return Init_GameRobotStatus_shooter_barrel_heat_limit(msg_);
  }

private:
  ::tide_msgs::msg::GameRobotStatus msg_;
};

class Init_GameRobotStatus_maximum_hp
{
public:
  explicit Init_GameRobotStatus_maximum_hp(::tide_msgs::msg::GameRobotStatus & msg)
  : msg_(msg)
  {}
  Init_GameRobotStatus_shooter_barrel_cooling_value maximum_hp(::tide_msgs::msg::GameRobotStatus::_maximum_hp_type arg)
  {
    msg_.maximum_hp = std::move(arg);
    return Init_GameRobotStatus_shooter_barrel_cooling_value(msg_);
  }

private:
  ::tide_msgs::msg::GameRobotStatus msg_;
};

class Init_GameRobotStatus_current_hp
{
public:
  explicit Init_GameRobotStatus_current_hp(::tide_msgs::msg::GameRobotStatus & msg)
  : msg_(msg)
  {}
  Init_GameRobotStatus_maximum_hp current_hp(::tide_msgs::msg::GameRobotStatus::_current_hp_type arg)
  {
    msg_.current_hp = std::move(arg);
    return Init_GameRobotStatus_maximum_hp(msg_);
  }

private:
  ::tide_msgs::msg::GameRobotStatus msg_;
};

class Init_GameRobotStatus_robot_level
{
public:
  explicit Init_GameRobotStatus_robot_level(::tide_msgs::msg::GameRobotStatus & msg)
  : msg_(msg)
  {}
  Init_GameRobotStatus_current_hp robot_level(::tide_msgs::msg::GameRobotStatus::_robot_level_type arg)
  {
    msg_.robot_level = std::move(arg);
    return Init_GameRobotStatus_current_hp(msg_);
  }

private:
  ::tide_msgs::msg::GameRobotStatus msg_;
};

class Init_GameRobotStatus_robot_id
{
public:
  Init_GameRobotStatus_robot_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GameRobotStatus_robot_level robot_id(::tide_msgs::msg::GameRobotStatus::_robot_id_type arg)
  {
    msg_.robot_id = std::move(arg);
    return Init_GameRobotStatus_robot_level(msg_);
  }

private:
  ::tide_msgs::msg::GameRobotStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tide_msgs::msg::GameRobotStatus>()
{
  return tide_msgs::msg::builder::Init_GameRobotStatus_robot_id();
}

}  // namespace tide_msgs

#endif  // TIDE_MSGS__MSG__DETAIL__GAME_ROBOT_STATUS__BUILDER_HPP_
