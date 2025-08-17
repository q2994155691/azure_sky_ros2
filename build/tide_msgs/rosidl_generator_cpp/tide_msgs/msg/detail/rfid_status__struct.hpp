// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tide_msgs:msg/RFIDStatus.idl
// generated code does not contain a copyright notice

#ifndef TIDE_MSGS__MSG__DETAIL__RFID_STATUS__STRUCT_HPP_
#define TIDE_MSGS__MSG__DETAIL__RFID_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__tide_msgs__msg__RFIDStatus __attribute__((deprecated))
#else
# define DEPRECATED__tide_msgs__msg__RFIDStatus __declspec(deprecated)
#endif

namespace tide_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RFIDStatus_
{
  using Type = RFIDStatus_<ContainerAllocator>;

  explicit RFIDStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->rfid_status = 0ul;
    }
  }

  explicit RFIDStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->rfid_status = 0ul;
    }
  }

  // field types and members
  using _rfid_status_type =
    uint32_t;
  _rfid_status_type rfid_status;

  // setters for named parameter idiom
  Type & set__rfid_status(
    const uint32_t & _arg)
  {
    this->rfid_status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tide_msgs::msg::RFIDStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const tide_msgs::msg::RFIDStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tide_msgs::msg::RFIDStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tide_msgs::msg::RFIDStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tide_msgs::msg::RFIDStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tide_msgs::msg::RFIDStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tide_msgs::msg::RFIDStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tide_msgs::msg::RFIDStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tide_msgs::msg::RFIDStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tide_msgs::msg::RFIDStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tide_msgs__msg__RFIDStatus
    std::shared_ptr<tide_msgs::msg::RFIDStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tide_msgs__msg__RFIDStatus
    std::shared_ptr<tide_msgs::msg::RFIDStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RFIDStatus_ & other) const
  {
    if (this->rfid_status != other.rfid_status) {
      return false;
    }
    return true;
  }
  bool operator!=(const RFIDStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RFIDStatus_

// alias to use template instance with default allocator
using RFIDStatus =
  tide_msgs::msg::RFIDStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tide_msgs

#endif  // TIDE_MSGS__MSG__DETAIL__RFID_STATUS__STRUCT_HPP_
