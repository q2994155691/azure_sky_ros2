// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tide_msgs:msg/InteractID.idl
// generated code does not contain a copyright notice

#ifndef TIDE_MSGS__MSG__DETAIL__INTERACT_ID__BUILDER_HPP_
#define TIDE_MSGS__MSG__DETAIL__INTERACT_ID__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tide_msgs/msg/detail/interact_id__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tide_msgs
{

namespace msg
{

namespace builder
{

class Init_InteractID_client_infantry5
{
public:
  explicit Init_InteractID_client_infantry5(::tide_msgs::msg::InteractID & msg)
  : msg_(msg)
  {}
  ::tide_msgs::msg::InteractID client_infantry5(::tide_msgs::msg::InteractID::_client_infantry5_type arg)
  {
    msg_.client_infantry5 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tide_msgs::msg::InteractID msg_;
};

class Init_InteractID_client_infantry4
{
public:
  explicit Init_InteractID_client_infantry4(::tide_msgs::msg::InteractID & msg)
  : msg_(msg)
  {}
  Init_InteractID_client_infantry5 client_infantry4(::tide_msgs::msg::InteractID::_client_infantry4_type arg)
  {
    msg_.client_infantry4 = std::move(arg);
    return Init_InteractID_client_infantry5(msg_);
  }

private:
  ::tide_msgs::msg::InteractID msg_;
};

class Init_InteractID_client_infantry3
{
public:
  explicit Init_InteractID_client_infantry3(::tide_msgs::msg::InteractID & msg)
  : msg_(msg)
  {}
  Init_InteractID_client_infantry4 client_infantry3(::tide_msgs::msg::InteractID::_client_infantry3_type arg)
  {
    msg_.client_infantry3 = std::move(arg);
    return Init_InteractID_client_infantry4(msg_);
  }

private:
  ::tide_msgs::msg::InteractID msg_;
};

class Init_InteractID_client_hero
{
public:
  explicit Init_InteractID_client_hero(::tide_msgs::msg::InteractID & msg)
  : msg_(msg)
  {}
  Init_InteractID_client_infantry3 client_hero(::tide_msgs::msg::InteractID::_client_hero_type arg)
  {
    msg_.client_hero = std::move(arg);
    return Init_InteractID_client_infantry3(msg_);
  }

private:
  ::tide_msgs::msg::InteractID msg_;
};

class Init_InteractID_teammate_sentry
{
public:
  explicit Init_InteractID_teammate_sentry(::tide_msgs::msg::InteractID & msg)
  : msg_(msg)
  {}
  Init_InteractID_client_hero teammate_sentry(::tide_msgs::msg::InteractID::_teammate_sentry_type arg)
  {
    msg_.teammate_sentry = std::move(arg);
    return Init_InteractID_client_hero(msg_);
  }

private:
  ::tide_msgs::msg::InteractID msg_;
};

class Init_InteractID_teammate_infantry5
{
public:
  explicit Init_InteractID_teammate_infantry5(::tide_msgs::msg::InteractID & msg)
  : msg_(msg)
  {}
  Init_InteractID_teammate_sentry teammate_infantry5(::tide_msgs::msg::InteractID::_teammate_infantry5_type arg)
  {
    msg_.teammate_infantry5 = std::move(arg);
    return Init_InteractID_teammate_sentry(msg_);
  }

private:
  ::tide_msgs::msg::InteractID msg_;
};

class Init_InteractID_teammate_infantry4
{
public:
  explicit Init_InteractID_teammate_infantry4(::tide_msgs::msg::InteractID & msg)
  : msg_(msg)
  {}
  Init_InteractID_teammate_infantry5 teammate_infantry4(::tide_msgs::msg::InteractID::_teammate_infantry4_type arg)
  {
    msg_.teammate_infantry4 = std::move(arg);
    return Init_InteractID_teammate_infantry5(msg_);
  }

private:
  ::tide_msgs::msg::InteractID msg_;
};

class Init_InteractID_teammate_infantry3
{
public:
  explicit Init_InteractID_teammate_infantry3(::tide_msgs::msg::InteractID & msg)
  : msg_(msg)
  {}
  Init_InteractID_teammate_infantry4 teammate_infantry3(::tide_msgs::msg::InteractID::_teammate_infantry3_type arg)
  {
    msg_.teammate_infantry3 = std::move(arg);
    return Init_InteractID_teammate_infantry4(msg_);
  }

private:
  ::tide_msgs::msg::InteractID msg_;
};

class Init_InteractID_teammate_hero
{
public:
  Init_InteractID_teammate_hero()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_InteractID_teammate_infantry3 teammate_hero(::tide_msgs::msg::InteractID::_teammate_hero_type arg)
  {
    msg_.teammate_hero = std::move(arg);
    return Init_InteractID_teammate_infantry3(msg_);
  }

private:
  ::tide_msgs::msg::InteractID msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tide_msgs::msg::InteractID>()
{
  return tide_msgs::msg::builder::Init_InteractID_teammate_hero();
}

}  // namespace tide_msgs

#endif  // TIDE_MSGS__MSG__DETAIL__INTERACT_ID__BUILDER_HPP_
