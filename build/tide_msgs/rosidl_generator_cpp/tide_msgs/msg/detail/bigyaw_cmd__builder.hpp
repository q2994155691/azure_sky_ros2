// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tide_msgs:msg/BigyawCmd.idl
// generated code does not contain a copyright notice

#ifndef TIDE_MSGS__MSG__DETAIL__BIGYAW_CMD__BUILDER_HPP_
#define TIDE_MSGS__MSG__DETAIL__BIGYAW_CMD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tide_msgs/msg/detail/bigyaw_cmd__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tide_msgs
{

namespace msg
{

namespace builder
{

class Init_BigyawCmd_ref
{
public:
  explicit Init_BigyawCmd_ref(::tide_msgs::msg::BigyawCmd & msg)
  : msg_(msg)
  {}
  ::tide_msgs::msg::BigyawCmd ref(::tide_msgs::msg::BigyawCmd::_ref_type arg)
  {
    msg_.ref = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tide_msgs::msg::BigyawCmd msg_;
};

class Init_BigyawCmd_mode
{
public:
  Init_BigyawCmd_mode()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BigyawCmd_ref mode(::tide_msgs::msg::BigyawCmd::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return Init_BigyawCmd_ref(msg_);
  }

private:
  ::tide_msgs::msg::BigyawCmd msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tide_msgs::msg::BigyawCmd>()
{
  return tide_msgs::msg::builder::Init_BigyawCmd_mode();
}

}  // namespace tide_msgs

#endif  // TIDE_MSGS__MSG__DETAIL__BIGYAW_CMD__BUILDER_HPP_
