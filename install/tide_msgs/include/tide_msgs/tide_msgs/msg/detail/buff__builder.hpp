// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tide_msgs:msg/Buff.idl
// generated code does not contain a copyright notice

#ifndef TIDE_MSGS__MSG__DETAIL__BUFF__BUILDER_HPP_
#define TIDE_MSGS__MSG__DETAIL__BUFF__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tide_msgs/msg/detail/buff__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tide_msgs
{

namespace msg
{

namespace builder
{

class Init_Buff_remaining_energy
{
public:
  explicit Init_Buff_remaining_energy(::tide_msgs::msg::Buff & msg)
  : msg_(msg)
  {}
  ::tide_msgs::msg::Buff remaining_energy(::tide_msgs::msg::Buff::_remaining_energy_type arg)
  {
    msg_.remaining_energy = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tide_msgs::msg::Buff msg_;
};

class Init_Buff_attack_buff
{
public:
  explicit Init_Buff_attack_buff(::tide_msgs::msg::Buff & msg)
  : msg_(msg)
  {}
  Init_Buff_remaining_energy attack_buff(::tide_msgs::msg::Buff::_attack_buff_type arg)
  {
    msg_.attack_buff = std::move(arg);
    return Init_Buff_remaining_energy(msg_);
  }

private:
  ::tide_msgs::msg::Buff msg_;
};

class Init_Buff_vulnerability_buff
{
public:
  explicit Init_Buff_vulnerability_buff(::tide_msgs::msg::Buff & msg)
  : msg_(msg)
  {}
  Init_Buff_attack_buff vulnerability_buff(::tide_msgs::msg::Buff::_vulnerability_buff_type arg)
  {
    msg_.vulnerability_buff = std::move(arg);
    return Init_Buff_attack_buff(msg_);
  }

private:
  ::tide_msgs::msg::Buff msg_;
};

class Init_Buff_defence_buff
{
public:
  explicit Init_Buff_defence_buff(::tide_msgs::msg::Buff & msg)
  : msg_(msg)
  {}
  Init_Buff_vulnerability_buff defence_buff(::tide_msgs::msg::Buff::_defence_buff_type arg)
  {
    msg_.defence_buff = std::move(arg);
    return Init_Buff_vulnerability_buff(msg_);
  }

private:
  ::tide_msgs::msg::Buff msg_;
};

class Init_Buff_cooling_buff
{
public:
  explicit Init_Buff_cooling_buff(::tide_msgs::msg::Buff & msg)
  : msg_(msg)
  {}
  Init_Buff_defence_buff cooling_buff(::tide_msgs::msg::Buff::_cooling_buff_type arg)
  {
    msg_.cooling_buff = std::move(arg);
    return Init_Buff_defence_buff(msg_);
  }

private:
  ::tide_msgs::msg::Buff msg_;
};

class Init_Buff_recovery_buff
{
public:
  Init_Buff_recovery_buff()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Buff_cooling_buff recovery_buff(::tide_msgs::msg::Buff::_recovery_buff_type arg)
  {
    msg_.recovery_buff = std::move(arg);
    return Init_Buff_cooling_buff(msg_);
  }

private:
  ::tide_msgs::msg::Buff msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tide_msgs::msg::Buff>()
{
  return tide_msgs::msg::builder::Init_Buff_recovery_buff();
}

}  // namespace tide_msgs

#endif  // TIDE_MSGS__MSG__DETAIL__BUFF__BUILDER_HPP_
