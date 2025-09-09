// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tide_msgs:msg/Target.idl
// generated code does not contain a copyright notice

#ifndef TIDE_MSGS__MSG__DETAIL__TARGET__BUILDER_HPP_
#define TIDE_MSGS__MSG__DETAIL__TARGET__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tide_msgs/msg/detail/target__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tide_msgs
{

namespace msg
{

namespace builder
{

class Init_Target_dz
{
public:
  explicit Init_Target_dz(::tide_msgs::msg::Target & msg)
  : msg_(msg)
  {}
  ::tide_msgs::msg::Target dz(::tide_msgs::msg::Target::_dz_type arg)
  {
    msg_.dz = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tide_msgs::msg::Target msg_;
};

class Init_Target_radius_2
{
public:
  explicit Init_Target_radius_2(::tide_msgs::msg::Target & msg)
  : msg_(msg)
  {}
  Init_Target_dz radius_2(::tide_msgs::msg::Target::_radius_2_type arg)
  {
    msg_.radius_2 = std::move(arg);
    return Init_Target_dz(msg_);
  }

private:
  ::tide_msgs::msg::Target msg_;
};

class Init_Target_radius_1
{
public:
  explicit Init_Target_radius_1(::tide_msgs::msg::Target & msg)
  : msg_(msg)
  {}
  Init_Target_radius_2 radius_1(::tide_msgs::msg::Target::_radius_1_type arg)
  {
    msg_.radius_1 = std::move(arg);
    return Init_Target_radius_2(msg_);
  }

private:
  ::tide_msgs::msg::Target msg_;
};

class Init_Target_v_yaw
{
public:
  explicit Init_Target_v_yaw(::tide_msgs::msg::Target & msg)
  : msg_(msg)
  {}
  Init_Target_radius_1 v_yaw(::tide_msgs::msg::Target::_v_yaw_type arg)
  {
    msg_.v_yaw = std::move(arg);
    return Init_Target_radius_1(msg_);
  }

private:
  ::tide_msgs::msg::Target msg_;
};

class Init_Target_yaw
{
public:
  explicit Init_Target_yaw(::tide_msgs::msg::Target & msg)
  : msg_(msg)
  {}
  Init_Target_v_yaw yaw(::tide_msgs::msg::Target::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return Init_Target_v_yaw(msg_);
  }

private:
  ::tide_msgs::msg::Target msg_;
};

class Init_Target_velocity
{
public:
  explicit Init_Target_velocity(::tide_msgs::msg::Target & msg)
  : msg_(msg)
  {}
  Init_Target_yaw velocity(::tide_msgs::msg::Target::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_Target_yaw(msg_);
  }

private:
  ::tide_msgs::msg::Target msg_;
};

class Init_Target_position
{
public:
  explicit Init_Target_position(::tide_msgs::msg::Target & msg)
  : msg_(msg)
  {}
  Init_Target_velocity position(::tide_msgs::msg::Target::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_Target_velocity(msg_);
  }

private:
  ::tide_msgs::msg::Target msg_;
};

class Init_Target_armors_num
{
public:
  explicit Init_Target_armors_num(::tide_msgs::msg::Target & msg)
  : msg_(msg)
  {}
  Init_Target_position armors_num(::tide_msgs::msg::Target::_armors_num_type arg)
  {
    msg_.armors_num = std::move(arg);
    return Init_Target_position(msg_);
  }

private:
  ::tide_msgs::msg::Target msg_;
};

class Init_Target_id
{
public:
  explicit Init_Target_id(::tide_msgs::msg::Target & msg)
  : msg_(msg)
  {}
  Init_Target_armors_num id(::tide_msgs::msg::Target::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_Target_armors_num(msg_);
  }

private:
  ::tide_msgs::msg::Target msg_;
};

class Init_Target_tracking
{
public:
  explicit Init_Target_tracking(::tide_msgs::msg::Target & msg)
  : msg_(msg)
  {}
  Init_Target_id tracking(::tide_msgs::msg::Target::_tracking_type arg)
  {
    msg_.tracking = std::move(arg);
    return Init_Target_id(msg_);
  }

private:
  ::tide_msgs::msg::Target msg_;
};

class Init_Target_header
{
public:
  Init_Target_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Target_tracking header(::tide_msgs::msg::Target::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Target_tracking(msg_);
  }

private:
  ::tide_msgs::msg::Target msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tide_msgs::msg::Target>()
{
  return tide_msgs::msg::builder::Init_Target_header();
}

}  // namespace tide_msgs

#endif  // TIDE_MSGS__MSG__DETAIL__TARGET__BUILDER_HPP_
