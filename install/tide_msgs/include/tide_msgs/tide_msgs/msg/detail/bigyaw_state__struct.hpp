// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tide_msgs:msg/BigyawState.idl
// generated code does not contain a copyright notice

#ifndef TIDE_MSGS__MSG__DETAIL__BIGYAW_STATE__STRUCT_HPP_
#define TIDE_MSGS__MSG__DETAIL__BIGYAW_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tide_msgs__msg__BigyawState __attribute__((deprecated))
#else
# define DEPRECATED__tide_msgs__msg__BigyawState __declspec(deprecated)
#endif

namespace tide_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BigyawState_
{
  using Type = BigyawState_<ContainerAllocator>;

  explicit BigyawState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mode = 0;
      this->ref = 0.0;
      this->cur = 0.0;
    }
  }

  explicit BigyawState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mode = 0;
      this->ref = 0.0;
      this->cur = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _mode_type =
    uint8_t;
  _mode_type mode;
  using _ref_type =
    double;
  _ref_type ref;
  using _cur_type =
    double;
  _cur_type cur;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
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
  Type & set__cur(
    const double & _arg)
  {
    this->cur = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tide_msgs::msg::BigyawState_<ContainerAllocator> *;
  using ConstRawPtr =
    const tide_msgs::msg::BigyawState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tide_msgs::msg::BigyawState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tide_msgs::msg::BigyawState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tide_msgs::msg::BigyawState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tide_msgs::msg::BigyawState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tide_msgs::msg::BigyawState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tide_msgs::msg::BigyawState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tide_msgs::msg::BigyawState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tide_msgs::msg::BigyawState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tide_msgs__msg__BigyawState
    std::shared_ptr<tide_msgs::msg::BigyawState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tide_msgs__msg__BigyawState
    std::shared_ptr<tide_msgs::msg::BigyawState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BigyawState_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->mode != other.mode) {
      return false;
    }
    if (this->ref != other.ref) {
      return false;
    }
    if (this->cur != other.cur) {
      return false;
    }
    return true;
  }
  bool operator!=(const BigyawState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BigyawState_

// alias to use template instance with default allocator
using BigyawState =
  tide_msgs::msg::BigyawState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tide_msgs

#endif  // TIDE_MSGS__MSG__DETAIL__BIGYAW_STATE__STRUCT_HPP_
