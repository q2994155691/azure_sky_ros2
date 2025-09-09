// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tide_msgs:msg/FdFrame.idl
// generated code does not contain a copyright notice

#ifndef TIDE_MSGS__MSG__DETAIL__FD_FRAME__BUILDER_HPP_
#define TIDE_MSGS__MSG__DETAIL__FD_FRAME__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tide_msgs/msg/detail/fd_frame__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tide_msgs
{

namespace msg
{

namespace builder
{

class Init_FdFrame_data
{
public:
  explicit Init_FdFrame_data(::tide_msgs::msg::FdFrame & msg)
  : msg_(msg)
  {}
  ::tide_msgs::msg::FdFrame data(::tide_msgs::msg::FdFrame::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tide_msgs::msg::FdFrame msg_;
};

class Init_FdFrame_len
{
public:
  explicit Init_FdFrame_len(::tide_msgs::msg::FdFrame & msg)
  : msg_(msg)
  {}
  Init_FdFrame_data len(::tide_msgs::msg::FdFrame::_len_type arg)
  {
    msg_.len = std::move(arg);
    return Init_FdFrame_data(msg_);
  }

private:
  ::tide_msgs::msg::FdFrame msg_;
};

class Init_FdFrame_is_error
{
public:
  explicit Init_FdFrame_is_error(::tide_msgs::msg::FdFrame & msg)
  : msg_(msg)
  {}
  Init_FdFrame_len is_error(::tide_msgs::msg::FdFrame::_is_error_type arg)
  {
    msg_.is_error = std::move(arg);
    return Init_FdFrame_len(msg_);
  }

private:
  ::tide_msgs::msg::FdFrame msg_;
};

class Init_FdFrame_is_extended
{
public:
  explicit Init_FdFrame_is_extended(::tide_msgs::msg::FdFrame & msg)
  : msg_(msg)
  {}
  Init_FdFrame_is_error is_extended(::tide_msgs::msg::FdFrame::_is_extended_type arg)
  {
    msg_.is_extended = std::move(arg);
    return Init_FdFrame_is_error(msg_);
  }

private:
  ::tide_msgs::msg::FdFrame msg_;
};

class Init_FdFrame_id
{
public:
  explicit Init_FdFrame_id(::tide_msgs::msg::FdFrame & msg)
  : msg_(msg)
  {}
  Init_FdFrame_is_extended id(::tide_msgs::msg::FdFrame::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_FdFrame_is_extended(msg_);
  }

private:
  ::tide_msgs::msg::FdFrame msg_;
};

class Init_FdFrame_header
{
public:
  Init_FdFrame_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FdFrame_id header(::tide_msgs::msg::FdFrame::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_FdFrame_id(msg_);
  }

private:
  ::tide_msgs::msg::FdFrame msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tide_msgs::msg::FdFrame>()
{
  return tide_msgs::msg::builder::Init_FdFrame_header();
}

}  // namespace tide_msgs

#endif  // TIDE_MSGS__MSG__DETAIL__FD_FRAME__BUILDER_HPP_
