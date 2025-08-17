// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tide_msgs:msg/Armor.idl
// generated code does not contain a copyright notice

#ifndef TIDE_MSGS__MSG__DETAIL__ARMOR__STRUCT_HPP_
#define TIDE_MSGS__MSG__DETAIL__ARMOR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.hpp"
// Member 'kpts'
#include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tide_msgs__msg__Armor __attribute__((deprecated))
#else
# define DEPRECATED__tide_msgs__msg__Armor __declspec(deprecated)
#endif

namespace tide_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Armor_
{
  using Type = Armor_<ContainerAllocator>;

  explicit Armor_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->number = "";
      this->type = "";
      this->distance_to_image_center = 0.0f;
    }
  }

  explicit Armor_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : number(_alloc),
    type(_alloc),
    pose(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->number = "";
      this->type = "";
      this->distance_to_image_center = 0.0f;
    }
  }

  // field types and members
  using _number_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _number_type number;
  using _type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _type_type type;
  using _distance_to_image_center_type =
    float;
  _distance_to_image_center_type distance_to_image_center;
  using _pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _pose_type pose;
  using _kpts_type =
    std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>>;
  _kpts_type kpts;

  // setters for named parameter idiom
  Type & set__number(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->number = _arg;
    return *this;
  }
  Type & set__type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__distance_to_image_center(
    const float & _arg)
  {
    this->distance_to_image_center = _arg;
    return *this;
  }
  Type & set__pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }
  Type & set__kpts(
    const std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>> & _arg)
  {
    this->kpts = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tide_msgs::msg::Armor_<ContainerAllocator> *;
  using ConstRawPtr =
    const tide_msgs::msg::Armor_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tide_msgs::msg::Armor_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tide_msgs::msg::Armor_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tide_msgs::msg::Armor_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tide_msgs::msg::Armor_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tide_msgs::msg::Armor_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tide_msgs::msg::Armor_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tide_msgs::msg::Armor_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tide_msgs::msg::Armor_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tide_msgs__msg__Armor
    std::shared_ptr<tide_msgs::msg::Armor_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tide_msgs__msg__Armor
    std::shared_ptr<tide_msgs::msg::Armor_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Armor_ & other) const
  {
    if (this->number != other.number) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    if (this->distance_to_image_center != other.distance_to_image_center) {
      return false;
    }
    if (this->pose != other.pose) {
      return false;
    }
    if (this->kpts != other.kpts) {
      return false;
    }
    return true;
  }
  bool operator!=(const Armor_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Armor_

// alias to use template instance with default allocator
using Armor =
  tide_msgs::msg::Armor_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tide_msgs

#endif  // TIDE_MSGS__MSG__DETAIL__ARMOR__STRUCT_HPP_
