// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tide_msgs:msg/BulletRemaining.idl
// generated code does not contain a copyright notice

#ifndef TIDE_MSGS__MSG__DETAIL__BULLET_REMAINING__BUILDER_HPP_
#define TIDE_MSGS__MSG__DETAIL__BULLET_REMAINING__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tide_msgs/msg/detail/bullet_remaining__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tide_msgs
{

namespace msg
{

namespace builder
{

class Init_BulletRemaining_coin_remaining_num
{
public:
  explicit Init_BulletRemaining_coin_remaining_num(::tide_msgs::msg::BulletRemaining & msg)
  : msg_(msg)
  {}
  ::tide_msgs::msg::BulletRemaining coin_remaining_num(::tide_msgs::msg::BulletRemaining::_coin_remaining_num_type arg)
  {
    msg_.coin_remaining_num = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tide_msgs::msg::BulletRemaining msg_;
};

class Init_BulletRemaining_bullet_remaining_num_42mm
{
public:
  explicit Init_BulletRemaining_bullet_remaining_num_42mm(::tide_msgs::msg::BulletRemaining & msg)
  : msg_(msg)
  {}
  Init_BulletRemaining_coin_remaining_num bullet_remaining_num_42mm(::tide_msgs::msg::BulletRemaining::_bullet_remaining_num_42mm_type arg)
  {
    msg_.bullet_remaining_num_42mm = std::move(arg);
    return Init_BulletRemaining_coin_remaining_num(msg_);
  }

private:
  ::tide_msgs::msg::BulletRemaining msg_;
};

class Init_BulletRemaining_bullet_remaining_num_17mm
{
public:
  Init_BulletRemaining_bullet_remaining_num_17mm()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BulletRemaining_bullet_remaining_num_42mm bullet_remaining_num_17mm(::tide_msgs::msg::BulletRemaining::_bullet_remaining_num_17mm_type arg)
  {
    msg_.bullet_remaining_num_17mm = std::move(arg);
    return Init_BulletRemaining_bullet_remaining_num_42mm(msg_);
  }

private:
  ::tide_msgs::msg::BulletRemaining msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tide_msgs::msg::BulletRemaining>()
{
  return tide_msgs::msg::builder::Init_BulletRemaining_bullet_remaining_num_17mm();
}

}  // namespace tide_msgs

#endif  // TIDE_MSGS__MSG__DETAIL__BULLET_REMAINING__BUILDER_HPP_
