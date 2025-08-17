// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tide_msgs:msg/GroundRobot.idl
// generated code does not contain a copyright notice

#ifndef TIDE_MSGS__MSG__DETAIL__GROUND_ROBOT__BUILDER_HPP_
#define TIDE_MSGS__MSG__DETAIL__GROUND_ROBOT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tide_msgs/msg/detail/ground_robot__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tide_msgs
{

namespace msg
{

namespace builder
{

class Init_GroundRobot_reserved2
{
public:
  explicit Init_GroundRobot_reserved2(::tide_msgs::msg::GroundRobot & msg)
  : msg_(msg)
  {}
  ::tide_msgs::msg::GroundRobot reserved2(::tide_msgs::msg::GroundRobot::_reserved2_type arg)
  {
    msg_.reserved2 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tide_msgs::msg::GroundRobot msg_;
};

class Init_GroundRobot_reserved1
{
public:
  explicit Init_GroundRobot_reserved1(::tide_msgs::msg::GroundRobot & msg)
  : msg_(msg)
  {}
  Init_GroundRobot_reserved2 reserved1(::tide_msgs::msg::GroundRobot::_reserved1_type arg)
  {
    msg_.reserved1 = std::move(arg);
    return Init_GroundRobot_reserved2(msg_);
  }

private:
  ::tide_msgs::msg::GroundRobot msg_;
};

class Init_GroundRobot_standard_4_y
{
public:
  explicit Init_GroundRobot_standard_4_y(::tide_msgs::msg::GroundRobot & msg)
  : msg_(msg)
  {}
  Init_GroundRobot_reserved1 standard_4_y(::tide_msgs::msg::GroundRobot::_standard_4_y_type arg)
  {
    msg_.standard_4_y = std::move(arg);
    return Init_GroundRobot_reserved1(msg_);
  }

private:
  ::tide_msgs::msg::GroundRobot msg_;
};

class Init_GroundRobot_standard_4_x
{
public:
  explicit Init_GroundRobot_standard_4_x(::tide_msgs::msg::GroundRobot & msg)
  : msg_(msg)
  {}
  Init_GroundRobot_standard_4_y standard_4_x(::tide_msgs::msg::GroundRobot::_standard_4_x_type arg)
  {
    msg_.standard_4_x = std::move(arg);
    return Init_GroundRobot_standard_4_y(msg_);
  }

private:
  ::tide_msgs::msg::GroundRobot msg_;
};

class Init_GroundRobot_standard_3_y
{
public:
  explicit Init_GroundRobot_standard_3_y(::tide_msgs::msg::GroundRobot & msg)
  : msg_(msg)
  {}
  Init_GroundRobot_standard_4_x standard_3_y(::tide_msgs::msg::GroundRobot::_standard_3_y_type arg)
  {
    msg_.standard_3_y = std::move(arg);
    return Init_GroundRobot_standard_4_x(msg_);
  }

private:
  ::tide_msgs::msg::GroundRobot msg_;
};

class Init_GroundRobot_standard_3_x
{
public:
  explicit Init_GroundRobot_standard_3_x(::tide_msgs::msg::GroundRobot & msg)
  : msg_(msg)
  {}
  Init_GroundRobot_standard_3_y standard_3_x(::tide_msgs::msg::GroundRobot::_standard_3_x_type arg)
  {
    msg_.standard_3_x = std::move(arg);
    return Init_GroundRobot_standard_3_y(msg_);
  }

private:
  ::tide_msgs::msg::GroundRobot msg_;
};

class Init_GroundRobot_engineer_y
{
public:
  explicit Init_GroundRobot_engineer_y(::tide_msgs::msg::GroundRobot & msg)
  : msg_(msg)
  {}
  Init_GroundRobot_standard_3_x engineer_y(::tide_msgs::msg::GroundRobot::_engineer_y_type arg)
  {
    msg_.engineer_y = std::move(arg);
    return Init_GroundRobot_standard_3_x(msg_);
  }

private:
  ::tide_msgs::msg::GroundRobot msg_;
};

class Init_GroundRobot_engineer_x
{
public:
  explicit Init_GroundRobot_engineer_x(::tide_msgs::msg::GroundRobot & msg)
  : msg_(msg)
  {}
  Init_GroundRobot_engineer_y engineer_x(::tide_msgs::msg::GroundRobot::_engineer_x_type arg)
  {
    msg_.engineer_x = std::move(arg);
    return Init_GroundRobot_engineer_y(msg_);
  }

private:
  ::tide_msgs::msg::GroundRobot msg_;
};

class Init_GroundRobot_hero_y
{
public:
  explicit Init_GroundRobot_hero_y(::tide_msgs::msg::GroundRobot & msg)
  : msg_(msg)
  {}
  Init_GroundRobot_engineer_x hero_y(::tide_msgs::msg::GroundRobot::_hero_y_type arg)
  {
    msg_.hero_y = std::move(arg);
    return Init_GroundRobot_engineer_x(msg_);
  }

private:
  ::tide_msgs::msg::GroundRobot msg_;
};

class Init_GroundRobot_hero_x
{
public:
  Init_GroundRobot_hero_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GroundRobot_hero_y hero_x(::tide_msgs::msg::GroundRobot::_hero_x_type arg)
  {
    msg_.hero_x = std::move(arg);
    return Init_GroundRobot_hero_y(msg_);
  }

private:
  ::tide_msgs::msg::GroundRobot msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tide_msgs::msg::GroundRobot>()
{
  return tide_msgs::msg::builder::Init_GroundRobot_hero_x();
}

}  // namespace tide_msgs

#endif  // TIDE_MSGS__MSG__DETAIL__GROUND_ROBOT__BUILDER_HPP_
