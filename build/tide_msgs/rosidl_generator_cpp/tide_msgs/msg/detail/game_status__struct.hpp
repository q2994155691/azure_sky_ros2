// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tide_msgs:msg/GameStatus.idl
// generated code does not contain a copyright notice

#ifndef TIDE_MSGS__MSG__DETAIL__GAME_STATUS__STRUCT_HPP_
#define TIDE_MSGS__MSG__DETAIL__GAME_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__tide_msgs__msg__GameStatus __attribute__((deprecated))
#else
# define DEPRECATED__tide_msgs__msg__GameStatus __declspec(deprecated)
#endif

namespace tide_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GameStatus_
{
  using Type = GameStatus_<ContainerAllocator>;

  explicit GameStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->game_type = 0;
      this->game_progress = 0;
      this->stage_remain_time = 0;
      this->sync_timestamp = 0ull;
    }
  }

  explicit GameStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->game_type = 0;
      this->game_progress = 0;
      this->stage_remain_time = 0;
      this->sync_timestamp = 0ull;
    }
  }

  // field types and members
  using _game_type_type =
    uint8_t;
  _game_type_type game_type;
  using _game_progress_type =
    uint8_t;
  _game_progress_type game_progress;
  using _stage_remain_time_type =
    uint16_t;
  _stage_remain_time_type stage_remain_time;
  using _sync_timestamp_type =
    uint64_t;
  _sync_timestamp_type sync_timestamp;

  // setters for named parameter idiom
  Type & set__game_type(
    const uint8_t & _arg)
  {
    this->game_type = _arg;
    return *this;
  }
  Type & set__game_progress(
    const uint8_t & _arg)
  {
    this->game_progress = _arg;
    return *this;
  }
  Type & set__stage_remain_time(
    const uint16_t & _arg)
  {
    this->stage_remain_time = _arg;
    return *this;
  }
  Type & set__sync_timestamp(
    const uint64_t & _arg)
  {
    this->sync_timestamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tide_msgs::msg::GameStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const tide_msgs::msg::GameStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tide_msgs::msg::GameStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tide_msgs::msg::GameStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tide_msgs::msg::GameStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tide_msgs::msg::GameStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tide_msgs::msg::GameStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tide_msgs::msg::GameStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tide_msgs::msg::GameStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tide_msgs::msg::GameStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tide_msgs__msg__GameStatus
    std::shared_ptr<tide_msgs::msg::GameStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tide_msgs__msg__GameStatus
    std::shared_ptr<tide_msgs::msg::GameStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GameStatus_ & other) const
  {
    if (this->game_type != other.game_type) {
      return false;
    }
    if (this->game_progress != other.game_progress) {
      return false;
    }
    if (this->stage_remain_time != other.stage_remain_time) {
      return false;
    }
    if (this->sync_timestamp != other.sync_timestamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const GameStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GameStatus_

// alias to use template instance with default allocator
using GameStatus =
  tide_msgs::msg::GameStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tide_msgs

#endif  // TIDE_MSGS__MSG__DETAIL__GAME_STATUS__STRUCT_HPP_
