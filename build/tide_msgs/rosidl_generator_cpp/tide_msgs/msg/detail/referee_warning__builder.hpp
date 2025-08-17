// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tide_msgs:msg/RefereeWarning.idl
// generated code does not contain a copyright notice

#ifndef TIDE_MSGS__MSG__DETAIL__REFEREE_WARNING__BUILDER_HPP_
#define TIDE_MSGS__MSG__DETAIL__REFEREE_WARNING__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tide_msgs/msg/detail/referee_warning__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tide_msgs
{

namespace msg
{

namespace builder
{

class Init_RefereeWarning_count
{
public:
  explicit Init_RefereeWarning_count(::tide_msgs::msg::RefereeWarning & msg)
  : msg_(msg)
  {}
  ::tide_msgs::msg::RefereeWarning count(::tide_msgs::msg::RefereeWarning::_count_type arg)
  {
    msg_.count = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tide_msgs::msg::RefereeWarning msg_;
};

class Init_RefereeWarning_offending_robot_id
{
public:
  explicit Init_RefereeWarning_offending_robot_id(::tide_msgs::msg::RefereeWarning & msg)
  : msg_(msg)
  {}
  Init_RefereeWarning_count offending_robot_id(::tide_msgs::msg::RefereeWarning::_offending_robot_id_type arg)
  {
    msg_.offending_robot_id = std::move(arg);
    return Init_RefereeWarning_count(msg_);
  }

private:
  ::tide_msgs::msg::RefereeWarning msg_;
};

class Init_RefereeWarning_level
{
public:
  Init_RefereeWarning_level()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RefereeWarning_offending_robot_id level(::tide_msgs::msg::RefereeWarning::_level_type arg)
  {
    msg_.level = std::move(arg);
    return Init_RefereeWarning_offending_robot_id(msg_);
  }

private:
  ::tide_msgs::msg::RefereeWarning msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tide_msgs::msg::RefereeWarning>()
{
  return tide_msgs::msg::builder::Init_RefereeWarning_level();
}

}  // namespace tide_msgs

#endif  // TIDE_MSGS__MSG__DETAIL__REFEREE_WARNING__BUILDER_HPP_
