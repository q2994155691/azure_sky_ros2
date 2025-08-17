// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tide_msgs:msg/BigyawState.idl
// generated code does not contain a copyright notice

#ifndef TIDE_MSGS__MSG__DETAIL__BIGYAW_STATE__BUILDER_HPP_
#define TIDE_MSGS__MSG__DETAIL__BIGYAW_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tide_msgs/msg/detail/bigyaw_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tide_msgs
{

namespace msg
{

namespace builder
{

class Init_BigyawState_cur
{
public:
  explicit Init_BigyawState_cur(::tide_msgs::msg::BigyawState & msg)
  : msg_(msg)
  {}
  ::tide_msgs::msg::BigyawState cur(::tide_msgs::msg::BigyawState::_cur_type arg)
  {
    msg_.cur = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tide_msgs::msg::BigyawState msg_;
};

class Init_BigyawState_ref
{
public:
  explicit Init_BigyawState_ref(::tide_msgs::msg::BigyawState & msg)
  : msg_(msg)
  {}
  Init_BigyawState_cur ref(::tide_msgs::msg::BigyawState::_ref_type arg)
  {
    msg_.ref = std::move(arg);
    return Init_BigyawState_cur(msg_);
  }

private:
  ::tide_msgs::msg::BigyawState msg_;
};

class Init_BigyawState_mode
{
public:
  explicit Init_BigyawState_mode(::tide_msgs::msg::BigyawState & msg)
  : msg_(msg)
  {}
  Init_BigyawState_ref mode(::tide_msgs::msg::BigyawState::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return Init_BigyawState_ref(msg_);
  }

private:
  ::tide_msgs::msg::BigyawState msg_;
};

class Init_BigyawState_header
{
public:
  Init_BigyawState_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BigyawState_mode header(::tide_msgs::msg::BigyawState::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_BigyawState_mode(msg_);
  }

private:
  ::tide_msgs::msg::BigyawState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tide_msgs::msg::BigyawState>()
{
  return tide_msgs::msg::builder::Init_BigyawState_header();
}

}  // namespace tide_msgs

#endif  // TIDE_MSGS__MSG__DETAIL__BIGYAW_STATE__BUILDER_HPP_
