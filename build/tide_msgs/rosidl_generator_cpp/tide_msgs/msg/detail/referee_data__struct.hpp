// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tide_msgs:msg/RefereeData.idl
// generated code does not contain a copyright notice

#ifndef TIDE_MSGS__MSG__DETAIL__REFEREE_DATA__STRUCT_HPP_
#define TIDE_MSGS__MSG__DETAIL__REFEREE_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'gamestatus'
#include "tide_msgs/msg/detail/game_status__struct.hpp"
// Member 'gameresult'
#include "tide_msgs/msg/detail/game_result__struct.hpp"
// Member 'gamerobothp'
#include "tide_msgs/msg/detail/game_robot_hp__struct.hpp"
// Member 'eventdata'
#include "tide_msgs/msg/detail/event_data__struct.hpp"
// Member 'refereewarning'
#include "tide_msgs/msg/detail/referee_warning__struct.hpp"
// Member 'gamerobotstatus'
#include "tide_msgs/msg/detail/game_robot_status__struct.hpp"
// Member 'powerheatdata'
#include "tide_msgs/msg/detail/power_heat_data__struct.hpp"
// Member 'gamerobotpos'
#include "tide_msgs/msg/detail/game_robot_pos__struct.hpp"
// Member 'buff'
#include "tide_msgs/msg/detail/buff__struct.hpp"
// Member 'robothurt'
#include "tide_msgs/msg/detail/robot_hurt__struct.hpp"
// Member 'shootdata'
#include "tide_msgs/msg/detail/shoot_data__struct.hpp"
// Member 'bulletremaining'
#include "tide_msgs/msg/detail/bullet_remaining__struct.hpp"
// Member 'rfidstatus'
#include "tide_msgs/msg/detail/rfid_status__struct.hpp"
// Member 'groundrobotpos'
#include "tide_msgs/msg/detail/ground_robot__struct.hpp"
// Member 'sentryinfo'
#include "tide_msgs/msg/detail/sentry_info__struct.hpp"
// Member 'interactid'
#include "tide_msgs/msg/detail/interact_id__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tide_msgs__msg__RefereeData __attribute__((deprecated))
#else
# define DEPRECATED__tide_msgs__msg__RefereeData __declspec(deprecated)
#endif

namespace tide_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RefereeData_
{
  using Type = RefereeData_<ContainerAllocator>;

  explicit RefereeData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : gamestatus(_init),
    gameresult(_init),
    gamerobothp(_init),
    eventdata(_init),
    refereewarning(_init),
    gamerobotstatus(_init),
    powerheatdata(_init),
    gamerobotpos(_init),
    buff(_init),
    robothurt(_init),
    shootdata(_init),
    bulletremaining(_init),
    rfidstatus(_init),
    groundrobotpos(_init),
    sentryinfo(_init),
    interactid(_init)
  {
    (void)_init;
  }

  explicit RefereeData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : gamestatus(_alloc, _init),
    gameresult(_alloc, _init),
    gamerobothp(_alloc, _init),
    eventdata(_alloc, _init),
    refereewarning(_alloc, _init),
    gamerobotstatus(_alloc, _init),
    powerheatdata(_alloc, _init),
    gamerobotpos(_alloc, _init),
    buff(_alloc, _init),
    robothurt(_alloc, _init),
    shootdata(_alloc, _init),
    bulletremaining(_alloc, _init),
    rfidstatus(_alloc, _init),
    groundrobotpos(_alloc, _init),
    sentryinfo(_alloc, _init),
    interactid(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _gamestatus_type =
    tide_msgs::msg::GameStatus_<ContainerAllocator>;
  _gamestatus_type gamestatus;
  using _gameresult_type =
    tide_msgs::msg::GameResult_<ContainerAllocator>;
  _gameresult_type gameresult;
  using _gamerobothp_type =
    tide_msgs::msg::GameRobotHP_<ContainerAllocator>;
  _gamerobothp_type gamerobothp;
  using _eventdata_type =
    tide_msgs::msg::EventData_<ContainerAllocator>;
  _eventdata_type eventdata;
  using _refereewarning_type =
    tide_msgs::msg::RefereeWarning_<ContainerAllocator>;
  _refereewarning_type refereewarning;
  using _gamerobotstatus_type =
    tide_msgs::msg::GameRobotStatus_<ContainerAllocator>;
  _gamerobotstatus_type gamerobotstatus;
  using _powerheatdata_type =
    tide_msgs::msg::PowerHeatData_<ContainerAllocator>;
  _powerheatdata_type powerheatdata;
  using _gamerobotpos_type =
    tide_msgs::msg::GameRobotPos_<ContainerAllocator>;
  _gamerobotpos_type gamerobotpos;
  using _buff_type =
    tide_msgs::msg::Buff_<ContainerAllocator>;
  _buff_type buff;
  using _robothurt_type =
    tide_msgs::msg::RobotHurt_<ContainerAllocator>;
  _robothurt_type robothurt;
  using _shootdata_type =
    tide_msgs::msg::ShootData_<ContainerAllocator>;
  _shootdata_type shootdata;
  using _bulletremaining_type =
    tide_msgs::msg::BulletRemaining_<ContainerAllocator>;
  _bulletremaining_type bulletremaining;
  using _rfidstatus_type =
    tide_msgs::msg::RFIDStatus_<ContainerAllocator>;
  _rfidstatus_type rfidstatus;
  using _groundrobotpos_type =
    tide_msgs::msg::GroundRobot_<ContainerAllocator>;
  _groundrobotpos_type groundrobotpos;
  using _sentryinfo_type =
    tide_msgs::msg::SentryInfo_<ContainerAllocator>;
  _sentryinfo_type sentryinfo;
  using _interactid_type =
    tide_msgs::msg::InteractID_<ContainerAllocator>;
  _interactid_type interactid;

  // setters for named parameter idiom
  Type & set__gamestatus(
    const tide_msgs::msg::GameStatus_<ContainerAllocator> & _arg)
  {
    this->gamestatus = _arg;
    return *this;
  }
  Type & set__gameresult(
    const tide_msgs::msg::GameResult_<ContainerAllocator> & _arg)
  {
    this->gameresult = _arg;
    return *this;
  }
  Type & set__gamerobothp(
    const tide_msgs::msg::GameRobotHP_<ContainerAllocator> & _arg)
  {
    this->gamerobothp = _arg;
    return *this;
  }
  Type & set__eventdata(
    const tide_msgs::msg::EventData_<ContainerAllocator> & _arg)
  {
    this->eventdata = _arg;
    return *this;
  }
  Type & set__refereewarning(
    const tide_msgs::msg::RefereeWarning_<ContainerAllocator> & _arg)
  {
    this->refereewarning = _arg;
    return *this;
  }
  Type & set__gamerobotstatus(
    const tide_msgs::msg::GameRobotStatus_<ContainerAllocator> & _arg)
  {
    this->gamerobotstatus = _arg;
    return *this;
  }
  Type & set__powerheatdata(
    const tide_msgs::msg::PowerHeatData_<ContainerAllocator> & _arg)
  {
    this->powerheatdata = _arg;
    return *this;
  }
  Type & set__gamerobotpos(
    const tide_msgs::msg::GameRobotPos_<ContainerAllocator> & _arg)
  {
    this->gamerobotpos = _arg;
    return *this;
  }
  Type & set__buff(
    const tide_msgs::msg::Buff_<ContainerAllocator> & _arg)
  {
    this->buff = _arg;
    return *this;
  }
  Type & set__robothurt(
    const tide_msgs::msg::RobotHurt_<ContainerAllocator> & _arg)
  {
    this->robothurt = _arg;
    return *this;
  }
  Type & set__shootdata(
    const tide_msgs::msg::ShootData_<ContainerAllocator> & _arg)
  {
    this->shootdata = _arg;
    return *this;
  }
  Type & set__bulletremaining(
    const tide_msgs::msg::BulletRemaining_<ContainerAllocator> & _arg)
  {
    this->bulletremaining = _arg;
    return *this;
  }
  Type & set__rfidstatus(
    const tide_msgs::msg::RFIDStatus_<ContainerAllocator> & _arg)
  {
    this->rfidstatus = _arg;
    return *this;
  }
  Type & set__groundrobotpos(
    const tide_msgs::msg::GroundRobot_<ContainerAllocator> & _arg)
  {
    this->groundrobotpos = _arg;
    return *this;
  }
  Type & set__sentryinfo(
    const tide_msgs::msg::SentryInfo_<ContainerAllocator> & _arg)
  {
    this->sentryinfo = _arg;
    return *this;
  }
  Type & set__interactid(
    const tide_msgs::msg::InteractID_<ContainerAllocator> & _arg)
  {
    this->interactid = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tide_msgs::msg::RefereeData_<ContainerAllocator> *;
  using ConstRawPtr =
    const tide_msgs::msg::RefereeData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tide_msgs::msg::RefereeData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tide_msgs::msg::RefereeData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tide_msgs::msg::RefereeData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tide_msgs::msg::RefereeData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tide_msgs::msg::RefereeData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tide_msgs::msg::RefereeData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tide_msgs::msg::RefereeData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tide_msgs::msg::RefereeData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tide_msgs__msg__RefereeData
    std::shared_ptr<tide_msgs::msg::RefereeData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tide_msgs__msg__RefereeData
    std::shared_ptr<tide_msgs::msg::RefereeData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RefereeData_ & other) const
  {
    if (this->gamestatus != other.gamestatus) {
      return false;
    }
    if (this->gameresult != other.gameresult) {
      return false;
    }
    if (this->gamerobothp != other.gamerobothp) {
      return false;
    }
    if (this->eventdata != other.eventdata) {
      return false;
    }
    if (this->refereewarning != other.refereewarning) {
      return false;
    }
    if (this->gamerobotstatus != other.gamerobotstatus) {
      return false;
    }
    if (this->powerheatdata != other.powerheatdata) {
      return false;
    }
    if (this->gamerobotpos != other.gamerobotpos) {
      return false;
    }
    if (this->buff != other.buff) {
      return false;
    }
    if (this->robothurt != other.robothurt) {
      return false;
    }
    if (this->shootdata != other.shootdata) {
      return false;
    }
    if (this->bulletremaining != other.bulletremaining) {
      return false;
    }
    if (this->rfidstatus != other.rfidstatus) {
      return false;
    }
    if (this->groundrobotpos != other.groundrobotpos) {
      return false;
    }
    if (this->sentryinfo != other.sentryinfo) {
      return false;
    }
    if (this->interactid != other.interactid) {
      return false;
    }
    return true;
  }
  bool operator!=(const RefereeData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RefereeData_

// alias to use template instance with default allocator
using RefereeData =
  tide_msgs::msg::RefereeData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tide_msgs

#endif  // TIDE_MSGS__MSG__DETAIL__REFEREE_DATA__STRUCT_HPP_
