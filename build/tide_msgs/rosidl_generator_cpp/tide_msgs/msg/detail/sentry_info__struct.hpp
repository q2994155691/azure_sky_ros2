// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tide_msgs:msg/SentryInfo.idl
// generated code does not contain a copyright notice

#ifndef TIDE_MSGS__MSG__DETAIL__SENTRY_INFO__STRUCT_HPP_
#define TIDE_MSGS__MSG__DETAIL__SENTRY_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__tide_msgs__msg__SentryInfo __attribute__((deprecated))
#else
# define DEPRECATED__tide_msgs__msg__SentryInfo __declspec(deprecated)
#endif

namespace tide_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SentryInfo_
{
  using Type = SentryInfo_<ContainerAllocator>;

  explicit SentryInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sentry_info = 0ul;
      this->sentry_info_2 = 0;
    }
  }

  explicit SentryInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sentry_info = 0ul;
      this->sentry_info_2 = 0;
    }
  }

  // field types and members
  using _sentry_info_type =
    uint32_t;
  _sentry_info_type sentry_info;
  using _sentry_info_2_type =
    uint16_t;
  _sentry_info_2_type sentry_info_2;

  // setters for named parameter idiom
  Type & set__sentry_info(
    const uint32_t & _arg)
  {
    this->sentry_info = _arg;
    return *this;
  }
  Type & set__sentry_info_2(
    const uint16_t & _arg)
  {
    this->sentry_info_2 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tide_msgs::msg::SentryInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const tide_msgs::msg::SentryInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tide_msgs::msg::SentryInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tide_msgs::msg::SentryInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tide_msgs::msg::SentryInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tide_msgs::msg::SentryInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tide_msgs::msg::SentryInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tide_msgs::msg::SentryInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tide_msgs::msg::SentryInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tide_msgs::msg::SentryInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tide_msgs__msg__SentryInfo
    std::shared_ptr<tide_msgs::msg::SentryInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tide_msgs__msg__SentryInfo
    std::shared_ptr<tide_msgs::msg::SentryInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SentryInfo_ & other) const
  {
    if (this->sentry_info != other.sentry_info) {
      return false;
    }
    if (this->sentry_info_2 != other.sentry_info_2) {
      return false;
    }
    return true;
  }
  bool operator!=(const SentryInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SentryInfo_

// alias to use template instance with default allocator
using SentryInfo =
  tide_msgs::msg::SentryInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tide_msgs

#endif  // TIDE_MSGS__MSG__DETAIL__SENTRY_INFO__STRUCT_HPP_
