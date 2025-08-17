// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tide_msgs:msg/GroundRobot.idl
// generated code does not contain a copyright notice

#ifndef TIDE_MSGS__MSG__DETAIL__GROUND_ROBOT__STRUCT_HPP_
#define TIDE_MSGS__MSG__DETAIL__GROUND_ROBOT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__tide_msgs__msg__GroundRobot __attribute__((deprecated))
#else
# define DEPRECATED__tide_msgs__msg__GroundRobot __declspec(deprecated)
#endif

namespace tide_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GroundRobot_
{
  using Type = GroundRobot_<ContainerAllocator>;

  explicit GroundRobot_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->hero_x = 0.0f;
      this->hero_y = 0.0f;
      this->engineer_x = 0.0f;
      this->engineer_y = 0.0f;
      this->standard_3_x = 0.0f;
      this->standard_3_y = 0.0f;
      this->standard_4_x = 0.0f;
      this->standard_4_y = 0.0f;
      this->reserved1 = 0.0f;
      this->reserved2 = 0.0f;
    }
  }

  explicit GroundRobot_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->hero_x = 0.0f;
      this->hero_y = 0.0f;
      this->engineer_x = 0.0f;
      this->engineer_y = 0.0f;
      this->standard_3_x = 0.0f;
      this->standard_3_y = 0.0f;
      this->standard_4_x = 0.0f;
      this->standard_4_y = 0.0f;
      this->reserved1 = 0.0f;
      this->reserved2 = 0.0f;
    }
  }

  // field types and members
  using _hero_x_type =
    float;
  _hero_x_type hero_x;
  using _hero_y_type =
    float;
  _hero_y_type hero_y;
  using _engineer_x_type =
    float;
  _engineer_x_type engineer_x;
  using _engineer_y_type =
    float;
  _engineer_y_type engineer_y;
  using _standard_3_x_type =
    float;
  _standard_3_x_type standard_3_x;
  using _standard_3_y_type =
    float;
  _standard_3_y_type standard_3_y;
  using _standard_4_x_type =
    float;
  _standard_4_x_type standard_4_x;
  using _standard_4_y_type =
    float;
  _standard_4_y_type standard_4_y;
  using _reserved1_type =
    float;
  _reserved1_type reserved1;
  using _reserved2_type =
    float;
  _reserved2_type reserved2;

  // setters for named parameter idiom
  Type & set__hero_x(
    const float & _arg)
  {
    this->hero_x = _arg;
    return *this;
  }
  Type & set__hero_y(
    const float & _arg)
  {
    this->hero_y = _arg;
    return *this;
  }
  Type & set__engineer_x(
    const float & _arg)
  {
    this->engineer_x = _arg;
    return *this;
  }
  Type & set__engineer_y(
    const float & _arg)
  {
    this->engineer_y = _arg;
    return *this;
  }
  Type & set__standard_3_x(
    const float & _arg)
  {
    this->standard_3_x = _arg;
    return *this;
  }
  Type & set__standard_3_y(
    const float & _arg)
  {
    this->standard_3_y = _arg;
    return *this;
  }
  Type & set__standard_4_x(
    const float & _arg)
  {
    this->standard_4_x = _arg;
    return *this;
  }
  Type & set__standard_4_y(
    const float & _arg)
  {
    this->standard_4_y = _arg;
    return *this;
  }
  Type & set__reserved1(
    const float & _arg)
  {
    this->reserved1 = _arg;
    return *this;
  }
  Type & set__reserved2(
    const float & _arg)
  {
    this->reserved2 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tide_msgs::msg::GroundRobot_<ContainerAllocator> *;
  using ConstRawPtr =
    const tide_msgs::msg::GroundRobot_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tide_msgs::msg::GroundRobot_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tide_msgs::msg::GroundRobot_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tide_msgs::msg::GroundRobot_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tide_msgs::msg::GroundRobot_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tide_msgs::msg::GroundRobot_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tide_msgs::msg::GroundRobot_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tide_msgs::msg::GroundRobot_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tide_msgs::msg::GroundRobot_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tide_msgs__msg__GroundRobot
    std::shared_ptr<tide_msgs::msg::GroundRobot_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tide_msgs__msg__GroundRobot
    std::shared_ptr<tide_msgs::msg::GroundRobot_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GroundRobot_ & other) const
  {
    if (this->hero_x != other.hero_x) {
      return false;
    }
    if (this->hero_y != other.hero_y) {
      return false;
    }
    if (this->engineer_x != other.engineer_x) {
      return false;
    }
    if (this->engineer_y != other.engineer_y) {
      return false;
    }
    if (this->standard_3_x != other.standard_3_x) {
      return false;
    }
    if (this->standard_3_y != other.standard_3_y) {
      return false;
    }
    if (this->standard_4_x != other.standard_4_x) {
      return false;
    }
    if (this->standard_4_y != other.standard_4_y) {
      return false;
    }
    if (this->reserved1 != other.reserved1) {
      return false;
    }
    if (this->reserved2 != other.reserved2) {
      return false;
    }
    return true;
  }
  bool operator!=(const GroundRobot_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GroundRobot_

// alias to use template instance with default allocator
using GroundRobot =
  tide_msgs::msg::GroundRobot_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tide_msgs

#endif  // TIDE_MSGS__MSG__DETAIL__GROUND_ROBOT__STRUCT_HPP_
