// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tide_msgs:msg/Armors.idl
// generated code does not contain a copyright notice

#ifndef TIDE_MSGS__MSG__DETAIL__ARMORS__BUILDER_HPP_
#define TIDE_MSGS__MSG__DETAIL__ARMORS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tide_msgs/msg/detail/armors__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tide_msgs
{

namespace msg
{

namespace builder
{

class Init_Armors_armors
{
public:
  explicit Init_Armors_armors(::tide_msgs::msg::Armors & msg)
  : msg_(msg)
  {}
  ::tide_msgs::msg::Armors armors(::tide_msgs::msg::Armors::_armors_type arg)
  {
    msg_.armors = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tide_msgs::msg::Armors msg_;
};

class Init_Armors_header
{
public:
  Init_Armors_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Armors_armors header(::tide_msgs::msg::Armors::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Armors_armors(msg_);
  }

private:
  ::tide_msgs::msg::Armors msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tide_msgs::msg::Armors>()
{
  return tide_msgs::msg::builder::Init_Armors_header();
}

}  // namespace tide_msgs

#endif  // TIDE_MSGS__MSG__DETAIL__ARMORS__BUILDER_HPP_
