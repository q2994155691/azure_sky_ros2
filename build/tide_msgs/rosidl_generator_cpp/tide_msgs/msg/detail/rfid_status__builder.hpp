// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tide_msgs:msg/RFIDStatus.idl
// generated code does not contain a copyright notice

#ifndef TIDE_MSGS__MSG__DETAIL__RFID_STATUS__BUILDER_HPP_
#define TIDE_MSGS__MSG__DETAIL__RFID_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tide_msgs/msg/detail/rfid_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tide_msgs
{

namespace msg
{

namespace builder
{

class Init_RFIDStatus_rfid_status
{
public:
  Init_RFIDStatus_rfid_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tide_msgs::msg::RFIDStatus rfid_status(::tide_msgs::msg::RFIDStatus::_rfid_status_type arg)
  {
    msg_.rfid_status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tide_msgs::msg::RFIDStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tide_msgs::msg::RFIDStatus>()
{
  return tide_msgs::msg::builder::Init_RFIDStatus_rfid_status();
}

}  // namespace tide_msgs

#endif  // TIDE_MSGS__MSG__DETAIL__RFID_STATUS__BUILDER_HPP_
