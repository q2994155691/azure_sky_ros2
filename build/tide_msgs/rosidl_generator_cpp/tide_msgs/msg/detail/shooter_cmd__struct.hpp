// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tide_msgs:msg/ShooterCmd.idl
// generated code does not contain a copyright notice

#ifndef TIDE_MSGS__MSG__DETAIL__SHOOTER_CMD__STRUCT_HPP_
#define TIDE_MSGS__MSG__DETAIL__SHOOTER_CMD__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__tide_msgs__msg__ShooterCmd __attribute__((deprecated))
#else
# define DEPRECATED__tide_msgs__msg__ShooterCmd __declspec(deprecated)
#endif

namespace tide_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ShooterCmd_
{
  using Type = ShooterCmd_<ContainerAllocator>;

  explicit ShooterCmd_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mode = 0;
      this->bullet_velocity = 0.0;
      this->shooting_freq = 0.0;
    }
  }

  explicit ShooterCmd_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mode = 0;
      this->bullet_velocity = 0.0;
      this->shooting_freq = 0.0;
    }
  }

  // field types and members
  using _mode_type =
    uint8_t;
  _mode_type mode;
  using _bullet_velocity_type =
    double;
  _bullet_velocity_type bullet_velocity;
  using _shooting_freq_type =
    double;
  _shooting_freq_type shooting_freq;

  // setters for named parameter idiom
  Type & set__mode(
    const uint8_t & _arg)
  {
    this->mode = _arg;
    return *this;
  }
  Type & set__bullet_velocity(
    const double & _arg)
  {
    this->bullet_velocity = _arg;
    return *this;
  }
  Type & set__shooting_freq(
    const double & _arg)
  {
    this->shooting_freq = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tide_msgs::msg::ShooterCmd_<ContainerAllocator> *;
  using ConstRawPtr =
    const tide_msgs::msg::ShooterCmd_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tide_msgs::msg::ShooterCmd_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tide_msgs::msg::ShooterCmd_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tide_msgs::msg::ShooterCmd_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tide_msgs::msg::ShooterCmd_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tide_msgs::msg::ShooterCmd_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tide_msgs::msg::ShooterCmd_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tide_msgs::msg::ShooterCmd_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tide_msgs::msg::ShooterCmd_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tide_msgs__msg__ShooterCmd
    std::shared_ptr<tide_msgs::msg::ShooterCmd_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tide_msgs__msg__ShooterCmd
    std::shared_ptr<tide_msgs::msg::ShooterCmd_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ShooterCmd_ & other) const
  {
    if (this->mode != other.mode) {
      return false;
    }
    if (this->bullet_velocity != other.bullet_velocity) {
      return false;
    }
    if (this->shooting_freq != other.shooting_freq) {
      return false;
    }
    return true;
  }
  bool operator!=(const ShooterCmd_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ShooterCmd_

// alias to use template instance with default allocator
using ShooterCmd =
  tide_msgs::msg::ShooterCmd_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tide_msgs

#endif  // TIDE_MSGS__MSG__DETAIL__SHOOTER_CMD__STRUCT_HPP_
