// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tide_msgs:msg/GimbalState.idl
// generated code does not contain a copyright notice

#ifndef TIDE_MSGS__MSG__DETAIL__GIMBAL_STATE__STRUCT_HPP_
#define TIDE_MSGS__MSG__DETAIL__GIMBAL_STATE__STRUCT_HPP_

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
# define DEPRECATED__tide_msgs__msg__GimbalState __attribute__((deprecated))
#else
# define DEPRECATED__tide_msgs__msg__GimbalState __declspec(deprecated)
#endif

namespace tide_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GimbalState_
{
  using Type = GimbalState_<ContainerAllocator>;

  explicit GimbalState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mode = 0;
      this->is_tracking = false;
      this->pitch_ref = 0.0;
      this->yaw_ref = 0.0;
      this->pitch_cur = 0.0;
      this->yaw_cur = 0.0;
    }
  }

  explicit GimbalState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mode = 0;
      this->is_tracking = false;
      this->pitch_ref = 0.0;
      this->yaw_ref = 0.0;
      this->pitch_cur = 0.0;
      this->yaw_cur = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _mode_type =
    uint8_t;
  _mode_type mode;
  using _is_tracking_type =
    bool;
  _is_tracking_type is_tracking;
  using _pitch_ref_type =
    double;
  _pitch_ref_type pitch_ref;
  using _yaw_ref_type =
    double;
  _yaw_ref_type yaw_ref;
  using _pitch_cur_type =
    double;
  _pitch_cur_type pitch_cur;
  using _yaw_cur_type =
    double;
  _yaw_cur_type yaw_cur;

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
  Type & set__is_tracking(
    const bool & _arg)
  {
    this->is_tracking = _arg;
    return *this;
  }
  Type & set__pitch_ref(
    const double & _arg)
  {
    this->pitch_ref = _arg;
    return *this;
  }
  Type & set__yaw_ref(
    const double & _arg)
  {
    this->yaw_ref = _arg;
    return *this;
  }
  Type & set__pitch_cur(
    const double & _arg)
  {
    this->pitch_cur = _arg;
    return *this;
  }
  Type & set__yaw_cur(
    const double & _arg)
  {
    this->yaw_cur = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tide_msgs::msg::GimbalState_<ContainerAllocator> *;
  using ConstRawPtr =
    const tide_msgs::msg::GimbalState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tide_msgs::msg::GimbalState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tide_msgs::msg::GimbalState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tide_msgs::msg::GimbalState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tide_msgs::msg::GimbalState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tide_msgs::msg::GimbalState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tide_msgs::msg::GimbalState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tide_msgs::msg::GimbalState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tide_msgs::msg::GimbalState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tide_msgs__msg__GimbalState
    std::shared_ptr<tide_msgs::msg::GimbalState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tide_msgs__msg__GimbalState
    std::shared_ptr<tide_msgs::msg::GimbalState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GimbalState_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->mode != other.mode) {
      return false;
    }
    if (this->is_tracking != other.is_tracking) {
      return false;
    }
    if (this->pitch_ref != other.pitch_ref) {
      return false;
    }
    if (this->yaw_ref != other.yaw_ref) {
      return false;
    }
    if (this->pitch_cur != other.pitch_cur) {
      return false;
    }
    if (this->yaw_cur != other.yaw_cur) {
      return false;
    }
    return true;
  }
  bool operator!=(const GimbalState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GimbalState_

// alias to use template instance with default allocator
using GimbalState =
  tide_msgs::msg::GimbalState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tide_msgs

#endif  // TIDE_MSGS__MSG__DETAIL__GIMBAL_STATE__STRUCT_HPP_
