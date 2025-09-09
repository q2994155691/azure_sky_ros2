// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tide_msgs:msg/GimbalCmd.idl
// generated code does not contain a copyright notice

#ifndef TIDE_MSGS__MSG__DETAIL__GIMBAL_CMD__BUILDER_HPP_
#define TIDE_MSGS__MSG__DETAIL__GIMBAL_CMD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tide_msgs/msg/detail/gimbal_cmd__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tide_msgs
{

namespace msg
{

namespace builder
{

class Init_GimbalCmd_yaw_ref
{
public:
  explicit Init_GimbalCmd_yaw_ref(::tide_msgs::msg::GimbalCmd & msg)
  : msg_(msg)
  {}
  ::tide_msgs::msg::GimbalCmd yaw_ref(::tide_msgs::msg::GimbalCmd::_yaw_ref_type arg)
  {
    msg_.yaw_ref = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tide_msgs::msg::GimbalCmd msg_;
};

class Init_GimbalCmd_pitch_ref
{
public:
  explicit Init_GimbalCmd_pitch_ref(::tide_msgs::msg::GimbalCmd & msg)
  : msg_(msg)
  {}
  Init_GimbalCmd_yaw_ref pitch_ref(::tide_msgs::msg::GimbalCmd::_pitch_ref_type arg)
  {
    msg_.pitch_ref = std::move(arg);
    return Init_GimbalCmd_yaw_ref(msg_);
  }

private:
  ::tide_msgs::msg::GimbalCmd msg_;
};

class Init_GimbalCmd_mode
{
public:
  Init_GimbalCmd_mode()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GimbalCmd_pitch_ref mode(::tide_msgs::msg::GimbalCmd::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return Init_GimbalCmd_pitch_ref(msg_);
  }

private:
  ::tide_msgs::msg::GimbalCmd msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tide_msgs::msg::GimbalCmd>()
{
  return tide_msgs::msg::builder::Init_GimbalCmd_mode();
}

}  // namespace tide_msgs

#endif  // TIDE_MSGS__MSG__DETAIL__GIMBAL_CMD__BUILDER_HPP_
