// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tide_msgs:msg/GameResult.idl
// generated code does not contain a copyright notice

#ifndef TIDE_MSGS__MSG__DETAIL__GAME_RESULT__BUILDER_HPP_
#define TIDE_MSGS__MSG__DETAIL__GAME_RESULT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tide_msgs/msg/detail/game_result__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tide_msgs
{

namespace msg
{

namespace builder
{

class Init_GameResult_winner
{
public:
  Init_GameResult_winner()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tide_msgs::msg::GameResult winner(::tide_msgs::msg::GameResult::_winner_type arg)
  {
    msg_.winner = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tide_msgs::msg::GameResult msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tide_msgs::msg::GameResult>()
{
  return tide_msgs::msg::builder::Init_GameResult_winner();
}

}  // namespace tide_msgs

#endif  // TIDE_MSGS__MSG__DETAIL__GAME_RESULT__BUILDER_HPP_
