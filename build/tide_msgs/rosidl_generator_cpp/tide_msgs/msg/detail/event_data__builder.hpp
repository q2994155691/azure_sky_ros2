// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tide_msgs:msg/EventData.idl
// generated code does not contain a copyright notice

#ifndef TIDE_MSGS__MSG__DETAIL__EVENT_DATA__BUILDER_HPP_
#define TIDE_MSGS__MSG__DETAIL__EVENT_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tide_msgs/msg/detail/event_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tide_msgs
{

namespace msg
{

namespace builder
{

class Init_EventData_event_data
{
public:
  Init_EventData_event_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tide_msgs::msg::EventData event_data(::tide_msgs::msg::EventData::_event_data_type arg)
  {
    msg_.event_data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tide_msgs::msg::EventData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tide_msgs::msg::EventData>()
{
  return tide_msgs::msg::builder::Init_EventData_event_data();
}

}  // namespace tide_msgs

#endif  // TIDE_MSGS__MSG__DETAIL__EVENT_DATA__BUILDER_HPP_
