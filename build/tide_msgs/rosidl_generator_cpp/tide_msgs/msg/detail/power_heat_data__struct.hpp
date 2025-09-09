// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tide_msgs:msg/PowerHeatData.idl
// generated code does not contain a copyright notice

#ifndef TIDE_MSGS__MSG__DETAIL__POWER_HEAT_DATA__STRUCT_HPP_
#define TIDE_MSGS__MSG__DETAIL__POWER_HEAT_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__tide_msgs__msg__PowerHeatData __attribute__((deprecated))
#else
# define DEPRECATED__tide_msgs__msg__PowerHeatData __declspec(deprecated)
#endif

namespace tide_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PowerHeatData_
{
  using Type = PowerHeatData_<ContainerAllocator>;

  explicit PowerHeatData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->reserved1 = 0;
      this->reserved2 = 0;
      this->reserved3 = 0.0f;
      this->buffer_energy = 0;
      this->shooter_id1_17mm_cooling_heat = 0;
      this->shooter_id2_17mm_cooling_heat = 0;
      this->shooter_id1_42mm_cooling_heat = 0;
    }
  }

  explicit PowerHeatData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->reserved1 = 0;
      this->reserved2 = 0;
      this->reserved3 = 0.0f;
      this->buffer_energy = 0;
      this->shooter_id1_17mm_cooling_heat = 0;
      this->shooter_id2_17mm_cooling_heat = 0;
      this->shooter_id1_42mm_cooling_heat = 0;
    }
  }

  // field types and members
  using _reserved1_type =
    uint16_t;
  _reserved1_type reserved1;
  using _reserved2_type =
    uint16_t;
  _reserved2_type reserved2;
  using _reserved3_type =
    float;
  _reserved3_type reserved3;
  using _buffer_energy_type =
    uint16_t;
  _buffer_energy_type buffer_energy;
  using _shooter_id1_17mm_cooling_heat_type =
    uint16_t;
  _shooter_id1_17mm_cooling_heat_type shooter_id1_17mm_cooling_heat;
  using _shooter_id2_17mm_cooling_heat_type =
    uint16_t;
  _shooter_id2_17mm_cooling_heat_type shooter_id2_17mm_cooling_heat;
  using _shooter_id1_42mm_cooling_heat_type =
    uint16_t;
  _shooter_id1_42mm_cooling_heat_type shooter_id1_42mm_cooling_heat;

  // setters for named parameter idiom
  Type & set__reserved1(
    const uint16_t & _arg)
  {
    this->reserved1 = _arg;
    return *this;
  }
  Type & set__reserved2(
    const uint16_t & _arg)
  {
    this->reserved2 = _arg;
    return *this;
  }
  Type & set__reserved3(
    const float & _arg)
  {
    this->reserved3 = _arg;
    return *this;
  }
  Type & set__buffer_energy(
    const uint16_t & _arg)
  {
    this->buffer_energy = _arg;
    return *this;
  }
  Type & set__shooter_id1_17mm_cooling_heat(
    const uint16_t & _arg)
  {
    this->shooter_id1_17mm_cooling_heat = _arg;
    return *this;
  }
  Type & set__shooter_id2_17mm_cooling_heat(
    const uint16_t & _arg)
  {
    this->shooter_id2_17mm_cooling_heat = _arg;
    return *this;
  }
  Type & set__shooter_id1_42mm_cooling_heat(
    const uint16_t & _arg)
  {
    this->shooter_id1_42mm_cooling_heat = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tide_msgs::msg::PowerHeatData_<ContainerAllocator> *;
  using ConstRawPtr =
    const tide_msgs::msg::PowerHeatData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tide_msgs::msg::PowerHeatData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tide_msgs::msg::PowerHeatData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tide_msgs::msg::PowerHeatData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tide_msgs::msg::PowerHeatData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tide_msgs::msg::PowerHeatData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tide_msgs::msg::PowerHeatData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tide_msgs::msg::PowerHeatData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tide_msgs::msg::PowerHeatData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tide_msgs__msg__PowerHeatData
    std::shared_ptr<tide_msgs::msg::PowerHeatData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tide_msgs__msg__PowerHeatData
    std::shared_ptr<tide_msgs::msg::PowerHeatData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PowerHeatData_ & other) const
  {
    if (this->reserved1 != other.reserved1) {
      return false;
    }
    if (this->reserved2 != other.reserved2) {
      return false;
    }
    if (this->reserved3 != other.reserved3) {
      return false;
    }
    if (this->buffer_energy != other.buffer_energy) {
      return false;
    }
    if (this->shooter_id1_17mm_cooling_heat != other.shooter_id1_17mm_cooling_heat) {
      return false;
    }
    if (this->shooter_id2_17mm_cooling_heat != other.shooter_id2_17mm_cooling_heat) {
      return false;
    }
    if (this->shooter_id1_42mm_cooling_heat != other.shooter_id1_42mm_cooling_heat) {
      return false;
    }
    return true;
  }
  bool operator!=(const PowerHeatData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PowerHeatData_

// alias to use template instance with default allocator
using PowerHeatData =
  tide_msgs::msg::PowerHeatData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tide_msgs

#endif  // TIDE_MSGS__MSG__DETAIL__POWER_HEAT_DATA__STRUCT_HPP_
