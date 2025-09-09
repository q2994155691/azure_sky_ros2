// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tide_msgs:msg/BigyawCmd.idl
// generated code does not contain a copyright notice

#ifndef TIDE_MSGS__MSG__DETAIL__BIGYAW_CMD__STRUCT_HPP_
#define TIDE_MSGS__MSG__DETAIL__BIGYAW_CMD__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__tide_msgs__msg__BigyawCmd __attribute__((deprecated))
#else
# define DEPRECATED__tide_msgs__msg__BigyawCmd __declspec(deprecated)
#endif

namespace tide_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BigyawCmd_
{
  using Type = BigyawCmd_<ContainerAllocator>;

  explicit BigyawCmd_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mode = 0;
      this->ref = 0.0;
    }
  }

  explicit BigyawCmd_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mode = 0;
      this->ref = 0.0;
    }
  }

  // field types and members
  using _mode_type =
    uint8_t;
  _mode_type mode;
  using _ref_type =
    double;
  _ref_type ref;

  // setters for named parameter idiom
  Type & set__mode(
    const uint8_t & _arg)
  {
    this->mode = _arg;
    return *this;
  }
  Type & set__ref(
    const double & _arg)
  {
    this->ref = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tide_msgs::msg::BigyawCmd_<ContainerAllocator> *;
  using ConstRawPtr =
    const tide_msgs::msg::BigyawCmd_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tide_msgs::msg::BigyawCmd_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tide_msgs::msg::BigyawCmd_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tide_msgs::msg::BigyawCmd_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tide_msgs::msg::BigyawCmd_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tide_msgs::msg::BigyawCmd_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tide_msgs::msg::BigyawCmd_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tide_msgs::msg::BigyawCmd_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tide_msgs::msg::BigyawCmd_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tide_msgs__msg__BigyawCmd
    std::shared_ptr<tide_msgs::msg::BigyawCmd_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tide_msgs__msg__BigyawCmd
    std::shared_ptr<tide_msgs::msg::BigyawCmd_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BigyawCmd_ & other) const
  {
    if (this->mode != other.mode) {
      return false;
    }
    if (this->ref != other.ref) {
      return false;
    }
    return true;
  }
  bool operator!=(const BigyawCmd_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BigyawCmd_

// alias to use template instance with default allocator
using BigyawCmd =
  tide_msgs::msg::BigyawCmd_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tide_msgs

#endif  // TIDE_MSGS__MSG__DETAIL__BIGYAW_CMD__STRUCT_HPP_
