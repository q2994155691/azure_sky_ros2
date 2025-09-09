// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tide_msgs:msg/EventData.idl
// generated code does not contain a copyright notice

#ifndef TIDE_MSGS__MSG__DETAIL__EVENT_DATA__STRUCT_HPP_
#define TIDE_MSGS__MSG__DETAIL__EVENT_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__tide_msgs__msg__EventData __attribute__((deprecated))
#else
# define DEPRECATED__tide_msgs__msg__EventData __declspec(deprecated)
#endif

namespace tide_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EventData_
{
  using Type = EventData_<ContainerAllocator>;

  explicit EventData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->event_data = 0ul;
    }
  }

  explicit EventData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->event_data = 0ul;
    }
  }

  // field types and members
  using _event_data_type =
    uint32_t;
  _event_data_type event_data;

  // setters for named parameter idiom
  Type & set__event_data(
    const uint32_t & _arg)
  {
    this->event_data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tide_msgs::msg::EventData_<ContainerAllocator> *;
  using ConstRawPtr =
    const tide_msgs::msg::EventData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tide_msgs::msg::EventData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tide_msgs::msg::EventData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tide_msgs::msg::EventData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tide_msgs::msg::EventData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tide_msgs::msg::EventData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tide_msgs::msg::EventData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tide_msgs::msg::EventData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tide_msgs::msg::EventData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tide_msgs__msg__EventData
    std::shared_ptr<tide_msgs::msg::EventData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tide_msgs__msg__EventData
    std::shared_ptr<tide_msgs::msg::EventData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EventData_ & other) const
  {
    if (this->event_data != other.event_data) {
      return false;
    }
    return true;
  }
  bool operator!=(const EventData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EventData_

// alias to use template instance with default allocator
using EventData =
  tide_msgs::msg::EventData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tide_msgs

#endif  // TIDE_MSGS__MSG__DETAIL__EVENT_DATA__STRUCT_HPP_
