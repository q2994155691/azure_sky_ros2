// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tide_msgs:msg/DebugArmors.idl
// generated code does not contain a copyright notice

#ifndef TIDE_MSGS__MSG__DETAIL__DEBUG_ARMORS__BUILDER_HPP_
#define TIDE_MSGS__MSG__DETAIL__DEBUG_ARMORS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tide_msgs/msg/detail/debug_armors__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tide_msgs
{

namespace msg
{

namespace builder
{

class Init_DebugArmors_data
{
public:
  Init_DebugArmors_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tide_msgs::msg::DebugArmors data(::tide_msgs::msg::DebugArmors::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tide_msgs::msg::DebugArmors msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tide_msgs::msg::DebugArmors>()
{
  return tide_msgs::msg::builder::Init_DebugArmors_data();
}

}  // namespace tide_msgs

#endif  // TIDE_MSGS__MSG__DETAIL__DEBUG_ARMORS__BUILDER_HPP_
