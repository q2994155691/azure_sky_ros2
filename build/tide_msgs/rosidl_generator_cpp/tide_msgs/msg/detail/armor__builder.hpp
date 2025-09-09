// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tide_msgs:msg/Armor.idl
// generated code does not contain a copyright notice

#ifndef TIDE_MSGS__MSG__DETAIL__ARMOR__BUILDER_HPP_
#define TIDE_MSGS__MSG__DETAIL__ARMOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tide_msgs/msg/detail/armor__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tide_msgs
{

namespace msg
{

namespace builder
{

class Init_Armor_kpts
{
public:
  explicit Init_Armor_kpts(::tide_msgs::msg::Armor & msg)
  : msg_(msg)
  {}
  ::tide_msgs::msg::Armor kpts(::tide_msgs::msg::Armor::_kpts_type arg)
  {
    msg_.kpts = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tide_msgs::msg::Armor msg_;
};

class Init_Armor_pose
{
public:
  explicit Init_Armor_pose(::tide_msgs::msg::Armor & msg)
  : msg_(msg)
  {}
  Init_Armor_kpts pose(::tide_msgs::msg::Armor::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_Armor_kpts(msg_);
  }

private:
  ::tide_msgs::msg::Armor msg_;
};

class Init_Armor_distance_to_image_center
{
public:
  explicit Init_Armor_distance_to_image_center(::tide_msgs::msg::Armor & msg)
  : msg_(msg)
  {}
  Init_Armor_pose distance_to_image_center(::tide_msgs::msg::Armor::_distance_to_image_center_type arg)
  {
    msg_.distance_to_image_center = std::move(arg);
    return Init_Armor_pose(msg_);
  }

private:
  ::tide_msgs::msg::Armor msg_;
};

class Init_Armor_type
{
public:
  explicit Init_Armor_type(::tide_msgs::msg::Armor & msg)
  : msg_(msg)
  {}
  Init_Armor_distance_to_image_center type(::tide_msgs::msg::Armor::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_Armor_distance_to_image_center(msg_);
  }

private:
  ::tide_msgs::msg::Armor msg_;
};

class Init_Armor_number
{
public:
  Init_Armor_number()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Armor_type number(::tide_msgs::msg::Armor::_number_type arg)
  {
    msg_.number = std::move(arg);
    return Init_Armor_type(msg_);
  }

private:
  ::tide_msgs::msg::Armor msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tide_msgs::msg::Armor>()
{
  return tide_msgs::msg::builder::Init_Armor_number();
}

}  // namespace tide_msgs

#endif  // TIDE_MSGS__MSG__DETAIL__ARMOR__BUILDER_HPP_
