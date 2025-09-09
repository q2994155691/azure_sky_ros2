// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tide_msgs:msg/SentryInfo.idl
// generated code does not contain a copyright notice

#ifndef TIDE_MSGS__MSG__DETAIL__SENTRY_INFO__BUILDER_HPP_
#define TIDE_MSGS__MSG__DETAIL__SENTRY_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tide_msgs/msg/detail/sentry_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tide_msgs
{

namespace msg
{

namespace builder
{

class Init_SentryInfo_sentry_info_2
{
public:
  explicit Init_SentryInfo_sentry_info_2(::tide_msgs::msg::SentryInfo & msg)
  : msg_(msg)
  {}
  ::tide_msgs::msg::SentryInfo sentry_info_2(::tide_msgs::msg::SentryInfo::_sentry_info_2_type arg)
  {
    msg_.sentry_info_2 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tide_msgs::msg::SentryInfo msg_;
};

class Init_SentryInfo_sentry_info
{
public:
  Init_SentryInfo_sentry_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SentryInfo_sentry_info_2 sentry_info(::tide_msgs::msg::SentryInfo::_sentry_info_type arg)
  {
    msg_.sentry_info = std::move(arg);
    return Init_SentryInfo_sentry_info_2(msg_);
  }

private:
  ::tide_msgs::msg::SentryInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tide_msgs::msg::SentryInfo>()
{
  return tide_msgs::msg::builder::Init_SentryInfo_sentry_info();
}

}  // namespace tide_msgs

#endif  // TIDE_MSGS__MSG__DETAIL__SENTRY_INFO__BUILDER_HPP_
