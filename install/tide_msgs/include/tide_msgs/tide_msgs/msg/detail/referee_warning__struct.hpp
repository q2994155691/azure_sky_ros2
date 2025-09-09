// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tide_msgs:msg/RefereeWarning.idl
// generated code does not contain a copyright notice

#ifndef TIDE_MSGS__MSG__DETAIL__REFEREE_WARNING__STRUCT_HPP_
#define TIDE_MSGS__MSG__DETAIL__REFEREE_WARNING__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__tide_msgs__msg__RefereeWarning __attribute__((deprecated))
#else
# define DEPRECATED__tide_msgs__msg__RefereeWarning __declspec(deprecated)
#endif

namespace tide_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RefereeWarning_
{
  using Type = RefereeWarning_<ContainerAllocator>;

  explicit RefereeWarning_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->level = 0;
      this->offending_robot_id = 0;
      this->count = 0;
    }
  }

  explicit RefereeWarning_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->level = 0;
      this->offending_robot_id = 0;
      this->count = 0;
    }
  }

  // field types and members
  using _level_type =
    uint8_t;
  _level_type level;
  using _offending_robot_id_type =
    uint8_t;
  _offending_robot_id_type offending_robot_id;
  using _count_type =
    uint8_t;
  _count_type count;

  // setters for named parameter idiom
  Type & set__level(
    const uint8_t & _arg)
  {
    this->level = _arg;
    return *this;
  }
  Type & set__offending_robot_id(
    const uint8_t & _arg)
  {
    this->offending_robot_id = _arg;
    return *this;
  }
  Type & set__count(
    const uint8_t & _arg)
  {
    this->count = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tide_msgs::msg::RefereeWarning_<ContainerAllocator> *;
  using ConstRawPtr =
    const tide_msgs::msg::RefereeWarning_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tide_msgs::msg::RefereeWarning_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tide_msgs::msg::RefereeWarning_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tide_msgs::msg::RefereeWarning_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tide_msgs::msg::RefereeWarning_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tide_msgs::msg::RefereeWarning_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tide_msgs::msg::RefereeWarning_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tide_msgs::msg::RefereeWarning_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tide_msgs::msg::RefereeWarning_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tide_msgs__msg__RefereeWarning
    std::shared_ptr<tide_msgs::msg::RefereeWarning_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tide_msgs__msg__RefereeWarning
    std::shared_ptr<tide_msgs::msg::RefereeWarning_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RefereeWarning_ & other) const
  {
    if (this->level != other.level) {
      return false;
    }
    if (this->offending_robot_id != other.offending_robot_id) {
      return false;
    }
    if (this->count != other.count) {
      return false;
    }
    return true;
  }
  bool operator!=(const RefereeWarning_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RefereeWarning_

// alias to use template instance with default allocator
using RefereeWarning =
  tide_msgs::msg::RefereeWarning_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tide_msgs

#endif  // TIDE_MSGS__MSG__DETAIL__REFEREE_WARNING__STRUCT_HPP_
