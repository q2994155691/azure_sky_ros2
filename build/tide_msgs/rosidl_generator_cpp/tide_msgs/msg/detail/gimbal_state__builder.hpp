// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tide_msgs:msg/GimbalState.idl
// generated code does not contain a copyright notice

#ifndef TIDE_MSGS__MSG__DETAIL__GIMBAL_STATE__BUILDER_HPP_
#define TIDE_MSGS__MSG__DETAIL__GIMBAL_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tide_msgs/msg/detail/gimbal_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tide_msgs
{

namespace msg
{

namespace builder
{

class Init_GimbalState_yaw_cur
{
public:
  explicit Init_GimbalState_yaw_cur(::tide_msgs::msg::GimbalState & msg)
  : msg_(msg)
  {}
  ::tide_msgs::msg::GimbalState yaw_cur(::tide_msgs::msg::GimbalState::_yaw_cur_type arg)
  {
    msg_.yaw_cur = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tide_msgs::msg::GimbalState msg_;
};

class Init_GimbalState_pitch_cur
{
public:
  explicit Init_GimbalState_pitch_cur(::tide_msgs::msg::GimbalState & msg)
  : msg_(msg)
  {}
  Init_GimbalState_yaw_cur pitch_cur(::tide_msgs::msg::GimbalState::_pitch_cur_type arg)
  {
    msg_.pitch_cur = std::move(arg);
    return Init_GimbalState_yaw_cur(msg_);
  }

private:
  ::tide_msgs::msg::GimbalState msg_;
};

class Init_GimbalState_yaw_ref
{
public:
  explicit Init_GimbalState_yaw_ref(::tide_msgs::msg::GimbalState & msg)
  : msg_(msg)
  {}
  Init_GimbalState_pitch_cur yaw_ref(::tide_msgs::msg::GimbalState::_yaw_ref_type arg)
  {
    msg_.yaw_ref = std::move(arg);
    return Init_GimbalState_pitch_cur(msg_);
  }

private:
  ::tide_msgs::msg::GimbalState msg_;
};

class Init_GimbalState_pitch_ref
{
public:
  explicit Init_GimbalState_pitch_ref(::tide_msgs::msg::GimbalState & msg)
  : msg_(msg)
  {}
  Init_GimbalState_yaw_ref pitch_ref(::tide_msgs::msg::GimbalState::_pitch_ref_type arg)
  {
    msg_.pitch_ref = std::move(arg);
    return Init_GimbalState_yaw_ref(msg_);
  }

private:
  ::tide_msgs::msg::GimbalState msg_;
};

class Init_GimbalState_is_tracking
{
public:
  explicit Init_GimbalState_is_tracking(::tide_msgs::msg::GimbalState & msg)
  : msg_(msg)
  {}
  Init_GimbalState_pitch_ref is_tracking(::tide_msgs::msg::GimbalState::_is_tracking_type arg)
  {
    msg_.is_tracking = std::move(arg);
    return Init_GimbalState_pitch_ref(msg_);
  }

private:
  ::tide_msgs::msg::GimbalState msg_;
};

class Init_GimbalState_mode
{
public:
  explicit Init_GimbalState_mode(::tide_msgs::msg::GimbalState & msg)
  : msg_(msg)
  {}
  Init_GimbalState_is_tracking mode(::tide_msgs::msg::GimbalState::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return Init_GimbalState_is_tracking(msg_);
  }

private:
  ::tide_msgs::msg::GimbalState msg_;
};

class Init_GimbalState_header
{
public:
  Init_GimbalState_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GimbalState_mode header(::tide_msgs::msg::GimbalState::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GimbalState_mode(msg_);
  }

private:
  ::tide_msgs::msg::GimbalState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tide_msgs::msg::GimbalState>()
{
  return tide_msgs::msg::builder::Init_GimbalState_header();
}

}  // namespace tide_msgs

#endif  // TIDE_MSGS__MSG__DETAIL__GIMBAL_STATE__BUILDER_HPP_
