// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tide_msgs:msg/GameStatus.idl
// generated code does not contain a copyright notice

#ifndef TIDE_MSGS__MSG__DETAIL__GAME_STATUS__BUILDER_HPP_
#define TIDE_MSGS__MSG__DETAIL__GAME_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tide_msgs/msg/detail/game_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tide_msgs
{

namespace msg
{

namespace builder
{

class Init_GameStatus_sync_timestamp
{
public:
  explicit Init_GameStatus_sync_timestamp(::tide_msgs::msg::GameStatus & msg)
  : msg_(msg)
  {}
  ::tide_msgs::msg::GameStatus sync_timestamp(::tide_msgs::msg::GameStatus::_sync_timestamp_type arg)
  {
    msg_.sync_timestamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tide_msgs::msg::GameStatus msg_;
};

class Init_GameStatus_stage_remain_time
{
public:
  explicit Init_GameStatus_stage_remain_time(::tide_msgs::msg::GameStatus & msg)
  : msg_(msg)
  {}
  Init_GameStatus_sync_timestamp stage_remain_time(::tide_msgs::msg::GameStatus::_stage_remain_time_type arg)
  {
    msg_.stage_remain_time = std::move(arg);
    return Init_GameStatus_sync_timestamp(msg_);
  }

private:
  ::tide_msgs::msg::GameStatus msg_;
};

class Init_GameStatus_game_progress
{
public:
  explicit Init_GameStatus_game_progress(::tide_msgs::msg::GameStatus & msg)
  : msg_(msg)
  {}
  Init_GameStatus_stage_remain_time game_progress(::tide_msgs::msg::GameStatus::_game_progress_type arg)
  {
    msg_.game_progress = std::move(arg);
    return Init_GameStatus_stage_remain_time(msg_);
  }

private:
  ::tide_msgs::msg::GameStatus msg_;
};

class Init_GameStatus_game_type
{
public:
  Init_GameStatus_game_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GameStatus_game_progress game_type(::tide_msgs::msg::GameStatus::_game_type_type arg)
  {
    msg_.game_type = std::move(arg);
    return Init_GameStatus_game_progress(msg_);
  }

private:
  ::tide_msgs::msg::GameStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tide_msgs::msg::GameStatus>()
{
  return tide_msgs::msg::builder::Init_GameStatus_game_type();
}

}  // namespace tide_msgs

#endif  // TIDE_MSGS__MSG__DETAIL__GAME_STATUS__BUILDER_HPP_
