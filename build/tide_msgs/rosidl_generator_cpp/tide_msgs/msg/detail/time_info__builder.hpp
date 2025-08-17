// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tide_msgs:msg/TimeInfo.idl
// generated code does not contain a copyright notice

#ifndef TIDE_MSGS__MSG__DETAIL__TIME_INFO__BUILDER_HPP_
#define TIDE_MSGS__MSG__DETAIL__TIME_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tide_msgs/msg/detail/time_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tide_msgs
{

namespace msg
{

namespace builder
{

class Init_TimeInfo_time
{
public:
  explicit Init_TimeInfo_time(::tide_msgs::msg::TimeInfo & msg)
  : msg_(msg)
  {}
  ::tide_msgs::msg::TimeInfo time(::tide_msgs::msg::TimeInfo::_time_type arg)
  {
    msg_.time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tide_msgs::msg::TimeInfo msg_;
};

class Init_TimeInfo_header
{
public:
  Init_TimeInfo_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TimeInfo_time header(::tide_msgs::msg::TimeInfo::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_TimeInfo_time(msg_);
  }

private:
  ::tide_msgs::msg::TimeInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tide_msgs::msg::TimeInfo>()
{
  return tide_msgs::msg::builder::Init_TimeInfo_header();
}

}  // namespace tide_msgs

#endif  // TIDE_MSGS__MSG__DETAIL__TIME_INFO__BUILDER_HPP_
