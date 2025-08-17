// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tide_msgs:msg/GameRobotHP.idl
// generated code does not contain a copyright notice

#ifndef TIDE_MSGS__MSG__DETAIL__GAME_ROBOT_HP__BUILDER_HPP_
#define TIDE_MSGS__MSG__DETAIL__GAME_ROBOT_HP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tide_msgs/msg/detail/game_robot_hp__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tide_msgs
{

namespace msg
{

namespace builder
{

class Init_GameRobotHP_bluebase_hp
{
public:
  explicit Init_GameRobotHP_bluebase_hp(::tide_msgs::msg::GameRobotHP & msg)
  : msg_(msg)
  {}
  ::tide_msgs::msg::GameRobotHP bluebase_hp(::tide_msgs::msg::GameRobotHP::_bluebase_hp_type arg)
  {
    msg_.bluebase_hp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tide_msgs::msg::GameRobotHP msg_;
};

class Init_GameRobotHP_blueoutpost_hp
{
public:
  explicit Init_GameRobotHP_blueoutpost_hp(::tide_msgs::msg::GameRobotHP & msg)
  : msg_(msg)
  {}
  Init_GameRobotHP_bluebase_hp blueoutpost_hp(::tide_msgs::msg::GameRobotHP::_blueoutpost_hp_type arg)
  {
    msg_.blueoutpost_hp = std::move(arg);
    return Init_GameRobotHP_bluebase_hp(msg_);
  }

private:
  ::tide_msgs::msg::GameRobotHP msg_;
};

class Init_GameRobotHP_blue7robot_hp
{
public:
  explicit Init_GameRobotHP_blue7robot_hp(::tide_msgs::msg::GameRobotHP & msg)
  : msg_(msg)
  {}
  Init_GameRobotHP_blueoutpost_hp blue7robot_hp(::tide_msgs::msg::GameRobotHP::_blue7robot_hp_type arg)
  {
    msg_.blue7robot_hp = std::move(arg);
    return Init_GameRobotHP_blueoutpost_hp(msg_);
  }

private:
  ::tide_msgs::msg::GameRobotHP msg_;
};

class Init_GameRobotHP_reserved2
{
public:
  explicit Init_GameRobotHP_reserved2(::tide_msgs::msg::GameRobotHP & msg)
  : msg_(msg)
  {}
  Init_GameRobotHP_blue7robot_hp reserved2(::tide_msgs::msg::GameRobotHP::_reserved2_type arg)
  {
    msg_.reserved2 = std::move(arg);
    return Init_GameRobotHP_blue7robot_hp(msg_);
  }

private:
  ::tide_msgs::msg::GameRobotHP msg_;
};

class Init_GameRobotHP_blue4robot_hp
{
public:
  explicit Init_GameRobotHP_blue4robot_hp(::tide_msgs::msg::GameRobotHP & msg)
  : msg_(msg)
  {}
  Init_GameRobotHP_reserved2 blue4robot_hp(::tide_msgs::msg::GameRobotHP::_blue4robot_hp_type arg)
  {
    msg_.blue4robot_hp = std::move(arg);
    return Init_GameRobotHP_reserved2(msg_);
  }

private:
  ::tide_msgs::msg::GameRobotHP msg_;
};

class Init_GameRobotHP_blue3robot_hp
{
public:
  explicit Init_GameRobotHP_blue3robot_hp(::tide_msgs::msg::GameRobotHP & msg)
  : msg_(msg)
  {}
  Init_GameRobotHP_blue4robot_hp blue3robot_hp(::tide_msgs::msg::GameRobotHP::_blue3robot_hp_type arg)
  {
    msg_.blue3robot_hp = std::move(arg);
    return Init_GameRobotHP_blue4robot_hp(msg_);
  }

private:
  ::tide_msgs::msg::GameRobotHP msg_;
};

class Init_GameRobotHP_blue2robot_hp
{
public:
  explicit Init_GameRobotHP_blue2robot_hp(::tide_msgs::msg::GameRobotHP & msg)
  : msg_(msg)
  {}
  Init_GameRobotHP_blue3robot_hp blue2robot_hp(::tide_msgs::msg::GameRobotHP::_blue2robot_hp_type arg)
  {
    msg_.blue2robot_hp = std::move(arg);
    return Init_GameRobotHP_blue3robot_hp(msg_);
  }

private:
  ::tide_msgs::msg::GameRobotHP msg_;
};

class Init_GameRobotHP_blue1robot_hp
{
public:
  explicit Init_GameRobotHP_blue1robot_hp(::tide_msgs::msg::GameRobotHP & msg)
  : msg_(msg)
  {}
  Init_GameRobotHP_blue2robot_hp blue1robot_hp(::tide_msgs::msg::GameRobotHP::_blue1robot_hp_type arg)
  {
    msg_.blue1robot_hp = std::move(arg);
    return Init_GameRobotHP_blue2robot_hp(msg_);
  }

private:
  ::tide_msgs::msg::GameRobotHP msg_;
};

class Init_GameRobotHP_redbase_hp
{
public:
  explicit Init_GameRobotHP_redbase_hp(::tide_msgs::msg::GameRobotHP & msg)
  : msg_(msg)
  {}
  Init_GameRobotHP_blue1robot_hp redbase_hp(::tide_msgs::msg::GameRobotHP::_redbase_hp_type arg)
  {
    msg_.redbase_hp = std::move(arg);
    return Init_GameRobotHP_blue1robot_hp(msg_);
  }

private:
  ::tide_msgs::msg::GameRobotHP msg_;
};

class Init_GameRobotHP_redoutpost_hp
{
public:
  explicit Init_GameRobotHP_redoutpost_hp(::tide_msgs::msg::GameRobotHP & msg)
  : msg_(msg)
  {}
  Init_GameRobotHP_redbase_hp redoutpost_hp(::tide_msgs::msg::GameRobotHP::_redoutpost_hp_type arg)
  {
    msg_.redoutpost_hp = std::move(arg);
    return Init_GameRobotHP_redbase_hp(msg_);
  }

private:
  ::tide_msgs::msg::GameRobotHP msg_;
};

class Init_GameRobotHP_red7robot_hp
{
public:
  explicit Init_GameRobotHP_red7robot_hp(::tide_msgs::msg::GameRobotHP & msg)
  : msg_(msg)
  {}
  Init_GameRobotHP_redoutpost_hp red7robot_hp(::tide_msgs::msg::GameRobotHP::_red7robot_hp_type arg)
  {
    msg_.red7robot_hp = std::move(arg);
    return Init_GameRobotHP_redoutpost_hp(msg_);
  }

private:
  ::tide_msgs::msg::GameRobotHP msg_;
};

class Init_GameRobotHP_reserved1
{
public:
  explicit Init_GameRobotHP_reserved1(::tide_msgs::msg::GameRobotHP & msg)
  : msg_(msg)
  {}
  Init_GameRobotHP_red7robot_hp reserved1(::tide_msgs::msg::GameRobotHP::_reserved1_type arg)
  {
    msg_.reserved1 = std::move(arg);
    return Init_GameRobotHP_red7robot_hp(msg_);
  }

private:
  ::tide_msgs::msg::GameRobotHP msg_;
};

class Init_GameRobotHP_red4robot_hp
{
public:
  explicit Init_GameRobotHP_red4robot_hp(::tide_msgs::msg::GameRobotHP & msg)
  : msg_(msg)
  {}
  Init_GameRobotHP_reserved1 red4robot_hp(::tide_msgs::msg::GameRobotHP::_red4robot_hp_type arg)
  {
    msg_.red4robot_hp = std::move(arg);
    return Init_GameRobotHP_reserved1(msg_);
  }

private:
  ::tide_msgs::msg::GameRobotHP msg_;
};

class Init_GameRobotHP_red3robot_hp
{
public:
  explicit Init_GameRobotHP_red3robot_hp(::tide_msgs::msg::GameRobotHP & msg)
  : msg_(msg)
  {}
  Init_GameRobotHP_red4robot_hp red3robot_hp(::tide_msgs::msg::GameRobotHP::_red3robot_hp_type arg)
  {
    msg_.red3robot_hp = std::move(arg);
    return Init_GameRobotHP_red4robot_hp(msg_);
  }

private:
  ::tide_msgs::msg::GameRobotHP msg_;
};

class Init_GameRobotHP_red2robot_hp
{
public:
  explicit Init_GameRobotHP_red2robot_hp(::tide_msgs::msg::GameRobotHP & msg)
  : msg_(msg)
  {}
  Init_GameRobotHP_red3robot_hp red2robot_hp(::tide_msgs::msg::GameRobotHP::_red2robot_hp_type arg)
  {
    msg_.red2robot_hp = std::move(arg);
    return Init_GameRobotHP_red3robot_hp(msg_);
  }

private:
  ::tide_msgs::msg::GameRobotHP msg_;
};

class Init_GameRobotHP_red1robot_hp
{
public:
  Init_GameRobotHP_red1robot_hp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GameRobotHP_red2robot_hp red1robot_hp(::tide_msgs::msg::GameRobotHP::_red1robot_hp_type arg)
  {
    msg_.red1robot_hp = std::move(arg);
    return Init_GameRobotHP_red2robot_hp(msg_);
  }

private:
  ::tide_msgs::msg::GameRobotHP msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tide_msgs::msg::GameRobotHP>()
{
  return tide_msgs::msg::builder::Init_GameRobotHP_red1robot_hp();
}

}  // namespace tide_msgs

#endif  // TIDE_MSGS__MSG__DETAIL__GAME_ROBOT_HP__BUILDER_HPP_
