// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tide_msgs:msg/InteractID.idl
// generated code does not contain a copyright notice

#ifndef TIDE_MSGS__MSG__DETAIL__INTERACT_ID__STRUCT_HPP_
#define TIDE_MSGS__MSG__DETAIL__INTERACT_ID__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__tide_msgs__msg__InteractID __attribute__((deprecated))
#else
# define DEPRECATED__tide_msgs__msg__InteractID __declspec(deprecated)
#endif

namespace tide_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct InteractID_
{
  using Type = InteractID_<ContainerAllocator>;

  explicit InteractID_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->teammate_hero = 0;
      this->teammate_infantry3 = 0;
      this->teammate_infantry4 = 0;
      this->teammate_infantry5 = 0;
      this->teammate_sentry = 0;
      this->client_hero = 0;
      this->client_infantry3 = 0;
      this->client_infantry4 = 0;
      this->client_infantry5 = 0;
    }
  }

  explicit InteractID_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->teammate_hero = 0;
      this->teammate_infantry3 = 0;
      this->teammate_infantry4 = 0;
      this->teammate_infantry5 = 0;
      this->teammate_sentry = 0;
      this->client_hero = 0;
      this->client_infantry3 = 0;
      this->client_infantry4 = 0;
      this->client_infantry5 = 0;
    }
  }

  // field types and members
  using _teammate_hero_type =
    uint16_t;
  _teammate_hero_type teammate_hero;
  using _teammate_infantry3_type =
    uint16_t;
  _teammate_infantry3_type teammate_infantry3;
  using _teammate_infantry4_type =
    uint16_t;
  _teammate_infantry4_type teammate_infantry4;
  using _teammate_infantry5_type =
    uint16_t;
  _teammate_infantry5_type teammate_infantry5;
  using _teammate_sentry_type =
    uint16_t;
  _teammate_sentry_type teammate_sentry;
  using _client_hero_type =
    uint16_t;
  _client_hero_type client_hero;
  using _client_infantry3_type =
    uint16_t;
  _client_infantry3_type client_infantry3;
  using _client_infantry4_type =
    uint16_t;
  _client_infantry4_type client_infantry4;
  using _client_infantry5_type =
    uint16_t;
  _client_infantry5_type client_infantry5;

  // setters for named parameter idiom
  Type & set__teammate_hero(
    const uint16_t & _arg)
  {
    this->teammate_hero = _arg;
    return *this;
  }
  Type & set__teammate_infantry3(
    const uint16_t & _arg)
  {
    this->teammate_infantry3 = _arg;
    return *this;
  }
  Type & set__teammate_infantry4(
    const uint16_t & _arg)
  {
    this->teammate_infantry4 = _arg;
    return *this;
  }
  Type & set__teammate_infantry5(
    const uint16_t & _arg)
  {
    this->teammate_infantry5 = _arg;
    return *this;
  }
  Type & set__teammate_sentry(
    const uint16_t & _arg)
  {
    this->teammate_sentry = _arg;
    return *this;
  }
  Type & set__client_hero(
    const uint16_t & _arg)
  {
    this->client_hero = _arg;
    return *this;
  }
  Type & set__client_infantry3(
    const uint16_t & _arg)
  {
    this->client_infantry3 = _arg;
    return *this;
  }
  Type & set__client_infantry4(
    const uint16_t & _arg)
  {
    this->client_infantry4 = _arg;
    return *this;
  }
  Type & set__client_infantry5(
    const uint16_t & _arg)
  {
    this->client_infantry5 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tide_msgs::msg::InteractID_<ContainerAllocator> *;
  using ConstRawPtr =
    const tide_msgs::msg::InteractID_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tide_msgs::msg::InteractID_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tide_msgs::msg::InteractID_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tide_msgs::msg::InteractID_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tide_msgs::msg::InteractID_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tide_msgs::msg::InteractID_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tide_msgs::msg::InteractID_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tide_msgs::msg::InteractID_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tide_msgs::msg::InteractID_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tide_msgs__msg__InteractID
    std::shared_ptr<tide_msgs::msg::InteractID_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tide_msgs__msg__InteractID
    std::shared_ptr<tide_msgs::msg::InteractID_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const InteractID_ & other) const
  {
    if (this->teammate_hero != other.teammate_hero) {
      return false;
    }
    if (this->teammate_infantry3 != other.teammate_infantry3) {
      return false;
    }
    if (this->teammate_infantry4 != other.teammate_infantry4) {
      return false;
    }
    if (this->teammate_infantry5 != other.teammate_infantry5) {
      return false;
    }
    if (this->teammate_sentry != other.teammate_sentry) {
      return false;
    }
    if (this->client_hero != other.client_hero) {
      return false;
    }
    if (this->client_infantry3 != other.client_infantry3) {
      return false;
    }
    if (this->client_infantry4 != other.client_infantry4) {
      return false;
    }
    if (this->client_infantry5 != other.client_infantry5) {
      return false;
    }
    return true;
  }
  bool operator!=(const InteractID_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct InteractID_

// alias to use template instance with default allocator
using InteractID =
  tide_msgs::msg::InteractID_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tide_msgs

#endif  // TIDE_MSGS__MSG__DETAIL__INTERACT_ID__STRUCT_HPP_
