// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from auto_aim_interfaces:msg/RobotStatus.idl
// generated code does not contain a copyright notice

#ifndef AUTO_AIM_INTERFACES__MSG__DETAIL__ROBOT_STATUS__BUILDER_HPP_
#define AUTO_AIM_INTERFACES__MSG__DETAIL__ROBOT_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "auto_aim_interfaces/msg/detail/robot_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace auto_aim_interfaces
{

namespace msg
{

namespace builder
{

class Init_RobotStatus_pitch_temperature
{
public:
  explicit Init_RobotStatus_pitch_temperature(::auto_aim_interfaces::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  ::auto_aim_interfaces::msg::RobotStatus pitch_temperature(::auto_aim_interfaces::msg::RobotStatus::_pitch_temperature_type arg)
  {
    msg_.pitch_temperature = std::move(arg);
    return std::move(msg_);
  }

private:
  ::auto_aim_interfaces::msg::RobotStatus msg_;
};

class Init_RobotStatus_yaw_temperature
{
public:
  explicit Init_RobotStatus_yaw_temperature(::auto_aim_interfaces::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_pitch_temperature yaw_temperature(::auto_aim_interfaces::msg::RobotStatus::_yaw_temperature_type arg)
  {
    msg_.yaw_temperature = std::move(arg);
    return Init_RobotStatus_pitch_temperature(msg_);
  }

private:
  ::auto_aim_interfaces::msg::RobotStatus msg_;
};

class Init_RobotStatus_pitch_current
{
public:
  explicit Init_RobotStatus_pitch_current(::auto_aim_interfaces::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_yaw_temperature pitch_current(::auto_aim_interfaces::msg::RobotStatus::_pitch_current_type arg)
  {
    msg_.pitch_current = std::move(arg);
    return Init_RobotStatus_yaw_temperature(msg_);
  }

private:
  ::auto_aim_interfaces::msg::RobotStatus msg_;
};

class Init_RobotStatus_yaw_current
{
public:
  explicit Init_RobotStatus_yaw_current(::auto_aim_interfaces::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_pitch_current yaw_current(::auto_aim_interfaces::msg::RobotStatus::_yaw_current_type arg)
  {
    msg_.yaw_current = std::move(arg);
    return Init_RobotStatus_pitch_current(msg_);
  }

private:
  ::auto_aim_interfaces::msg::RobotStatus msg_;
};

class Init_RobotStatus_pitch_velocity
{
public:
  explicit Init_RobotStatus_pitch_velocity(::auto_aim_interfaces::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_yaw_current pitch_velocity(::auto_aim_interfaces::msg::RobotStatus::_pitch_velocity_type arg)
  {
    msg_.pitch_velocity = std::move(arg);
    return Init_RobotStatus_yaw_current(msg_);
  }

private:
  ::auto_aim_interfaces::msg::RobotStatus msg_;
};

class Init_RobotStatus_yaw_velocity
{
public:
  explicit Init_RobotStatus_yaw_velocity(::auto_aim_interfaces::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_pitch_velocity yaw_velocity(::auto_aim_interfaces::msg::RobotStatus::_yaw_velocity_type arg)
  {
    msg_.yaw_velocity = std::move(arg);
    return Init_RobotStatus_pitch_velocity(msg_);
  }

private:
  ::auto_aim_interfaces::msg::RobotStatus msg_;
};

class Init_RobotStatus_pitch
{
public:
  explicit Init_RobotStatus_pitch(::auto_aim_interfaces::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_yaw_velocity pitch(::auto_aim_interfaces::msg::RobotStatus::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return Init_RobotStatus_yaw_velocity(msg_);
  }

private:
  ::auto_aim_interfaces::msg::RobotStatus msg_;
};

class Init_RobotStatus_yaw
{
public:
  explicit Init_RobotStatus_yaw(::auto_aim_interfaces::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_pitch yaw(::auto_aim_interfaces::msg::RobotStatus::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return Init_RobotStatus_pitch(msg_);
  }

private:
  ::auto_aim_interfaces::msg::RobotStatus msg_;
};

class Init_RobotStatus_header
{
public:
  Init_RobotStatus_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotStatus_yaw header(::auto_aim_interfaces::msg::RobotStatus::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RobotStatus_yaw(msg_);
  }

private:
  ::auto_aim_interfaces::msg::RobotStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::auto_aim_interfaces::msg::RobotStatus>()
{
  return auto_aim_interfaces::msg::builder::Init_RobotStatus_header();
}

}  // namespace auto_aim_interfaces

#endif  // AUTO_AIM_INTERFACES__MSG__DETAIL__ROBOT_STATUS__BUILDER_HPP_
