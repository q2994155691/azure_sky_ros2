// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tide_msgs:msg/GameRobotHP.idl
// generated code does not contain a copyright notice

#ifndef TIDE_MSGS__MSG__DETAIL__GAME_ROBOT_HP__STRUCT_HPP_
#define TIDE_MSGS__MSG__DETAIL__GAME_ROBOT_HP__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__tide_msgs__msg__GameRobotHP __attribute__((deprecated))
#else
# define DEPRECATED__tide_msgs__msg__GameRobotHP __declspec(deprecated)
#endif

namespace tide_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GameRobotHP_
{
  using Type = GameRobotHP_<ContainerAllocator>;

  explicit GameRobotHP_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->red1robot_hp = 0;
      this->red2robot_hp = 0;
      this->red3robot_hp = 0;
      this->red4robot_hp = 0;
      this->reserved1 = 0;
      this->red7robot_hp = 0;
      this->redoutpost_hp = 0;
      this->redbase_hp = 0;
      this->blue1robot_hp = 0;
      this->blue2robot_hp = 0;
      this->blue3robot_hp = 0;
      this->blue4robot_hp = 0;
      this->reserved2 = 0;
      this->blue7robot_hp = 0;
      this->blueoutpost_hp = 0;
      this->bluebase_hp = 0;
    }
  }

  explicit GameRobotHP_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->red1robot_hp = 0;
      this->red2robot_hp = 0;
      this->red3robot_hp = 0;
      this->red4robot_hp = 0;
      this->reserved1 = 0;
      this->red7robot_hp = 0;
      this->redoutpost_hp = 0;
      this->redbase_hp = 0;
      this->blue1robot_hp = 0;
      this->blue2robot_hp = 0;
      this->blue3robot_hp = 0;
      this->blue4robot_hp = 0;
      this->reserved2 = 0;
      this->blue7robot_hp = 0;
      this->blueoutpost_hp = 0;
      this->bluebase_hp = 0;
    }
  }

  // field types and members
  using _red1robot_hp_type =
    uint16_t;
  _red1robot_hp_type red1robot_hp;
  using _red2robot_hp_type =
    uint16_t;
  _red2robot_hp_type red2robot_hp;
  using _red3robot_hp_type =
    uint16_t;
  _red3robot_hp_type red3robot_hp;
  using _red4robot_hp_type =
    uint16_t;
  _red4robot_hp_type red4robot_hp;
  using _reserved1_type =
    uint16_t;
  _reserved1_type reserved1;
  using _red7robot_hp_type =
    uint16_t;
  _red7robot_hp_type red7robot_hp;
  using _redoutpost_hp_type =
    uint16_t;
  _redoutpost_hp_type redoutpost_hp;
  using _redbase_hp_type =
    uint16_t;
  _redbase_hp_type redbase_hp;
  using _blue1robot_hp_type =
    uint16_t;
  _blue1robot_hp_type blue1robot_hp;
  using _blue2robot_hp_type =
    uint16_t;
  _blue2robot_hp_type blue2robot_hp;
  using _blue3robot_hp_type =
    uint16_t;
  _blue3robot_hp_type blue3robot_hp;
  using _blue4robot_hp_type =
    uint16_t;
  _blue4robot_hp_type blue4robot_hp;
  using _reserved2_type =
    uint16_t;
  _reserved2_type reserved2;
  using _blue7robot_hp_type =
    uint16_t;
  _blue7robot_hp_type blue7robot_hp;
  using _blueoutpost_hp_type =
    uint16_t;
  _blueoutpost_hp_type blueoutpost_hp;
  using _bluebase_hp_type =
    uint16_t;
  _bluebase_hp_type bluebase_hp;

  // setters for named parameter idiom
  Type & set__red1robot_hp(
    const uint16_t & _arg)
  {
    this->red1robot_hp = _arg;
    return *this;
  }
  Type & set__red2robot_hp(
    const uint16_t & _arg)
  {
    this->red2robot_hp = _arg;
    return *this;
  }
  Type & set__red3robot_hp(
    const uint16_t & _arg)
  {
    this->red3robot_hp = _arg;
    return *this;
  }
  Type & set__red4robot_hp(
    const uint16_t & _arg)
  {
    this->red4robot_hp = _arg;
    return *this;
  }
  Type & set__reserved1(
    const uint16_t & _arg)
  {
    this->reserved1 = _arg;
    return *this;
  }
  Type & set__red7robot_hp(
    const uint16_t & _arg)
  {
    this->red7robot_hp = _arg;
    return *this;
  }
  Type & set__redoutpost_hp(
    const uint16_t & _arg)
  {
    this->redoutpost_hp = _arg;
    return *this;
  }
  Type & set__redbase_hp(
    const uint16_t & _arg)
  {
    this->redbase_hp = _arg;
    return *this;
  }
  Type & set__blue1robot_hp(
    const uint16_t & _arg)
  {
    this->blue1robot_hp = _arg;
    return *this;
  }
  Type & set__blue2robot_hp(
    const uint16_t & _arg)
  {
    this->blue2robot_hp = _arg;
    return *this;
  }
  Type & set__blue3robot_hp(
    const uint16_t & _arg)
  {
    this->blue3robot_hp = _arg;
    return *this;
  }
  Type & set__blue4robot_hp(
    const uint16_t & _arg)
  {
    this->blue4robot_hp = _arg;
    return *this;
  }
  Type & set__reserved2(
    const uint16_t & _arg)
  {
    this->reserved2 = _arg;
    return *this;
  }
  Type & set__blue7robot_hp(
    const uint16_t & _arg)
  {
    this->blue7robot_hp = _arg;
    return *this;
  }
  Type & set__blueoutpost_hp(
    const uint16_t & _arg)
  {
    this->blueoutpost_hp = _arg;
    return *this;
  }
  Type & set__bluebase_hp(
    const uint16_t & _arg)
  {
    this->bluebase_hp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tide_msgs::msg::GameRobotHP_<ContainerAllocator> *;
  using ConstRawPtr =
    const tide_msgs::msg::GameRobotHP_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tide_msgs::msg::GameRobotHP_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tide_msgs::msg::GameRobotHP_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tide_msgs::msg::GameRobotHP_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tide_msgs::msg::GameRobotHP_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tide_msgs::msg::GameRobotHP_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tide_msgs::msg::GameRobotHP_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tide_msgs::msg::GameRobotHP_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tide_msgs::msg::GameRobotHP_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tide_msgs__msg__GameRobotHP
    std::shared_ptr<tide_msgs::msg::GameRobotHP_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tide_msgs__msg__GameRobotHP
    std::shared_ptr<tide_msgs::msg::GameRobotHP_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GameRobotHP_ & other) const
  {
    if (this->red1robot_hp != other.red1robot_hp) {
      return false;
    }
    if (this->red2robot_hp != other.red2robot_hp) {
      return false;
    }
    if (this->red3robot_hp != other.red3robot_hp) {
      return false;
    }
    if (this->red4robot_hp != other.red4robot_hp) {
      return false;
    }
    if (this->reserved1 != other.reserved1) {
      return false;
    }
    if (this->red7robot_hp != other.red7robot_hp) {
      return false;
    }
    if (this->redoutpost_hp != other.redoutpost_hp) {
      return false;
    }
    if (this->redbase_hp != other.redbase_hp) {
      return false;
    }
    if (this->blue1robot_hp != other.blue1robot_hp) {
      return false;
    }
    if (this->blue2robot_hp != other.blue2robot_hp) {
      return false;
    }
    if (this->blue3robot_hp != other.blue3robot_hp) {
      return false;
    }
    if (this->blue4robot_hp != other.blue4robot_hp) {
      return false;
    }
    if (this->reserved2 != other.reserved2) {
      return false;
    }
    if (this->blue7robot_hp != other.blue7robot_hp) {
      return false;
    }
    if (this->blueoutpost_hp != other.blueoutpost_hp) {
      return false;
    }
    if (this->bluebase_hp != other.bluebase_hp) {
      return false;
    }
    return true;
  }
  bool operator!=(const GameRobotHP_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GameRobotHP_

// alias to use template instance with default allocator
using GameRobotHP =
  tide_msgs::msg::GameRobotHP_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tide_msgs

#endif  // TIDE_MSGS__MSG__DETAIL__GAME_ROBOT_HP__STRUCT_HPP_
