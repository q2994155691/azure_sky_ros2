// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tide_msgs:msg/PowerHeatData.idl
// generated code does not contain a copyright notice

#ifndef TIDE_MSGS__MSG__DETAIL__POWER_HEAT_DATA__BUILDER_HPP_
#define TIDE_MSGS__MSG__DETAIL__POWER_HEAT_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tide_msgs/msg/detail/power_heat_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tide_msgs
{

namespace msg
{

namespace builder
{

class Init_PowerHeatData_shooter_id1_42mm_cooling_heat
{
public:
  explicit Init_PowerHeatData_shooter_id1_42mm_cooling_heat(::tide_msgs::msg::PowerHeatData & msg)
  : msg_(msg)
  {}
  ::tide_msgs::msg::PowerHeatData shooter_id1_42mm_cooling_heat(::tide_msgs::msg::PowerHeatData::_shooter_id1_42mm_cooling_heat_type arg)
  {
    msg_.shooter_id1_42mm_cooling_heat = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tide_msgs::msg::PowerHeatData msg_;
};

class Init_PowerHeatData_shooter_id2_17mm_cooling_heat
{
public:
  explicit Init_PowerHeatData_shooter_id2_17mm_cooling_heat(::tide_msgs::msg::PowerHeatData & msg)
  : msg_(msg)
  {}
  Init_PowerHeatData_shooter_id1_42mm_cooling_heat shooter_id2_17mm_cooling_heat(::tide_msgs::msg::PowerHeatData::_shooter_id2_17mm_cooling_heat_type arg)
  {
    msg_.shooter_id2_17mm_cooling_heat = std::move(arg);
    return Init_PowerHeatData_shooter_id1_42mm_cooling_heat(msg_);
  }

private:
  ::tide_msgs::msg::PowerHeatData msg_;
};

class Init_PowerHeatData_shooter_id1_17mm_cooling_heat
{
public:
  explicit Init_PowerHeatData_shooter_id1_17mm_cooling_heat(::tide_msgs::msg::PowerHeatData & msg)
  : msg_(msg)
  {}
  Init_PowerHeatData_shooter_id2_17mm_cooling_heat shooter_id1_17mm_cooling_heat(::tide_msgs::msg::PowerHeatData::_shooter_id1_17mm_cooling_heat_type arg)
  {
    msg_.shooter_id1_17mm_cooling_heat = std::move(arg);
    return Init_PowerHeatData_shooter_id2_17mm_cooling_heat(msg_);
  }

private:
  ::tide_msgs::msg::PowerHeatData msg_;
};

class Init_PowerHeatData_buffer_energy
{
public:
  explicit Init_PowerHeatData_buffer_energy(::tide_msgs::msg::PowerHeatData & msg)
  : msg_(msg)
  {}
  Init_PowerHeatData_shooter_id1_17mm_cooling_heat buffer_energy(::tide_msgs::msg::PowerHeatData::_buffer_energy_type arg)
  {
    msg_.buffer_energy = std::move(arg);
    return Init_PowerHeatData_shooter_id1_17mm_cooling_heat(msg_);
  }

private:
  ::tide_msgs::msg::PowerHeatData msg_;
};

class Init_PowerHeatData_reserved3
{
public:
  explicit Init_PowerHeatData_reserved3(::tide_msgs::msg::PowerHeatData & msg)
  : msg_(msg)
  {}
  Init_PowerHeatData_buffer_energy reserved3(::tide_msgs::msg::PowerHeatData::_reserved3_type arg)
  {
    msg_.reserved3 = std::move(arg);
    return Init_PowerHeatData_buffer_energy(msg_);
  }

private:
  ::tide_msgs::msg::PowerHeatData msg_;
};

class Init_PowerHeatData_reserved2
{
public:
  explicit Init_PowerHeatData_reserved2(::tide_msgs::msg::PowerHeatData & msg)
  : msg_(msg)
  {}
  Init_PowerHeatData_reserved3 reserved2(::tide_msgs::msg::PowerHeatData::_reserved2_type arg)
  {
    msg_.reserved2 = std::move(arg);
    return Init_PowerHeatData_reserved3(msg_);
  }

private:
  ::tide_msgs::msg::PowerHeatData msg_;
};

class Init_PowerHeatData_reserved1
{
public:
  Init_PowerHeatData_reserved1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PowerHeatData_reserved2 reserved1(::tide_msgs::msg::PowerHeatData::_reserved1_type arg)
  {
    msg_.reserved1 = std::move(arg);
    return Init_PowerHeatData_reserved2(msg_);
  }

private:
  ::tide_msgs::msg::PowerHeatData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tide_msgs::msg::PowerHeatData>()
{
  return tide_msgs::msg::builder::Init_PowerHeatData_reserved1();
}

}  // namespace tide_msgs

#endif  // TIDE_MSGS__MSG__DETAIL__POWER_HEAT_DATA__BUILDER_HPP_
