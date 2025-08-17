// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tide_msgs:msg/ShootData.idl
// generated code does not contain a copyright notice

#ifndef TIDE_MSGS__MSG__DETAIL__SHOOT_DATA__BUILDER_HPP_
#define TIDE_MSGS__MSG__DETAIL__SHOOT_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tide_msgs/msg/detail/shoot_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tide_msgs
{

namespace msg
{

namespace builder
{

class Init_ShootData_bullet_speed
{
public:
  explicit Init_ShootData_bullet_speed(::tide_msgs::msg::ShootData & msg)
  : msg_(msg)
  {}
  ::tide_msgs::msg::ShootData bullet_speed(::tide_msgs::msg::ShootData::_bullet_speed_type arg)
  {
    msg_.bullet_speed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tide_msgs::msg::ShootData msg_;
};

class Init_ShootData_bullet_freq
{
public:
  explicit Init_ShootData_bullet_freq(::tide_msgs::msg::ShootData & msg)
  : msg_(msg)
  {}
  Init_ShootData_bullet_speed bullet_freq(::tide_msgs::msg::ShootData::_bullet_freq_type arg)
  {
    msg_.bullet_freq = std::move(arg);
    return Init_ShootData_bullet_speed(msg_);
  }

private:
  ::tide_msgs::msg::ShootData msg_;
};

class Init_ShootData_shooter_id
{
public:
  explicit Init_ShootData_shooter_id(::tide_msgs::msg::ShootData & msg)
  : msg_(msg)
  {}
  Init_ShootData_bullet_freq shooter_id(::tide_msgs::msg::ShootData::_shooter_id_type arg)
  {
    msg_.shooter_id = std::move(arg);
    return Init_ShootData_bullet_freq(msg_);
  }

private:
  ::tide_msgs::msg::ShootData msg_;
};

class Init_ShootData_bullet_type
{
public:
  Init_ShootData_bullet_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ShootData_shooter_id bullet_type(::tide_msgs::msg::ShootData::_bullet_type_type arg)
  {
    msg_.bullet_type = std::move(arg);
    return Init_ShootData_shooter_id(msg_);
  }

private:
  ::tide_msgs::msg::ShootData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tide_msgs::msg::ShootData>()
{
  return tide_msgs::msg::builder::Init_ShootData_bullet_type();
}

}  // namespace tide_msgs

#endif  // TIDE_MSGS__MSG__DETAIL__SHOOT_DATA__BUILDER_HPP_
