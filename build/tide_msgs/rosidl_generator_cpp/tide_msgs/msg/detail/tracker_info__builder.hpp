// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tide_msgs:msg/TrackerInfo.idl
// generated code does not contain a copyright notice

#ifndef TIDE_MSGS__MSG__DETAIL__TRACKER_INFO__BUILDER_HPP_
#define TIDE_MSGS__MSG__DETAIL__TRACKER_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tide_msgs/msg/detail/tracker_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tide_msgs
{

namespace msg
{

namespace builder
{

class Init_TrackerInfo_tracking
{
public:
  explicit Init_TrackerInfo_tracking(::tide_msgs::msg::TrackerInfo & msg)
  : msg_(msg)
  {}
  ::tide_msgs::msg::TrackerInfo tracking(::tide_msgs::msg::TrackerInfo::_tracking_type arg)
  {
    msg_.tracking = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tide_msgs::msg::TrackerInfo msg_;
};

class Init_TrackerInfo_yaw
{
public:
  explicit Init_TrackerInfo_yaw(::tide_msgs::msg::TrackerInfo & msg)
  : msg_(msg)
  {}
  Init_TrackerInfo_tracking yaw(::tide_msgs::msg::TrackerInfo::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return Init_TrackerInfo_tracking(msg_);
  }

private:
  ::tide_msgs::msg::TrackerInfo msg_;
};

class Init_TrackerInfo_position
{
public:
  explicit Init_TrackerInfo_position(::tide_msgs::msg::TrackerInfo & msg)
  : msg_(msg)
  {}
  Init_TrackerInfo_yaw position(::tide_msgs::msg::TrackerInfo::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_TrackerInfo_yaw(msg_);
  }

private:
  ::tide_msgs::msg::TrackerInfo msg_;
};

class Init_TrackerInfo_yaw_diff
{
public:
  explicit Init_TrackerInfo_yaw_diff(::tide_msgs::msg::TrackerInfo & msg)
  : msg_(msg)
  {}
  Init_TrackerInfo_position yaw_diff(::tide_msgs::msg::TrackerInfo::_yaw_diff_type arg)
  {
    msg_.yaw_diff = std::move(arg);
    return Init_TrackerInfo_position(msg_);
  }

private:
  ::tide_msgs::msg::TrackerInfo msg_;
};

class Init_TrackerInfo_position_diff
{
public:
  Init_TrackerInfo_position_diff()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrackerInfo_yaw_diff position_diff(::tide_msgs::msg::TrackerInfo::_position_diff_type arg)
  {
    msg_.position_diff = std::move(arg);
    return Init_TrackerInfo_yaw_diff(msg_);
  }

private:
  ::tide_msgs::msg::TrackerInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tide_msgs::msg::TrackerInfo>()
{
  return tide_msgs::msg::builder::Init_TrackerInfo_position_diff();
}

}  // namespace tide_msgs

#endif  // TIDE_MSGS__MSG__DETAIL__TRACKER_INFO__BUILDER_HPP_
