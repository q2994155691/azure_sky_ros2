// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tide_msgs:msg/RefereeData.idl
// generated code does not contain a copyright notice

#ifndef TIDE_MSGS__MSG__DETAIL__REFEREE_DATA__BUILDER_HPP_
#define TIDE_MSGS__MSG__DETAIL__REFEREE_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tide_msgs/msg/detail/referee_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tide_msgs
{

namespace msg
{

namespace builder
{

class Init_RefereeData_interactid
{
public:
  explicit Init_RefereeData_interactid(::tide_msgs::msg::RefereeData & msg)
  : msg_(msg)
  {}
  ::tide_msgs::msg::RefereeData interactid(::tide_msgs::msg::RefereeData::_interactid_type arg)
  {
    msg_.interactid = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tide_msgs::msg::RefereeData msg_;
};

class Init_RefereeData_sentryinfo
{
public:
  explicit Init_RefereeData_sentryinfo(::tide_msgs::msg::RefereeData & msg)
  : msg_(msg)
  {}
  Init_RefereeData_interactid sentryinfo(::tide_msgs::msg::RefereeData::_sentryinfo_type arg)
  {
    msg_.sentryinfo = std::move(arg);
    return Init_RefereeData_interactid(msg_);
  }

private:
  ::tide_msgs::msg::RefereeData msg_;
};

class Init_RefereeData_groundrobotpos
{
public:
  explicit Init_RefereeData_groundrobotpos(::tide_msgs::msg::RefereeData & msg)
  : msg_(msg)
  {}
  Init_RefereeData_sentryinfo groundrobotpos(::tide_msgs::msg::RefereeData::_groundrobotpos_type arg)
  {
    msg_.groundrobotpos = std::move(arg);
    return Init_RefereeData_sentryinfo(msg_);
  }

private:
  ::tide_msgs::msg::RefereeData msg_;
};

class Init_RefereeData_rfidstatus
{
public:
  explicit Init_RefereeData_rfidstatus(::tide_msgs::msg::RefereeData & msg)
  : msg_(msg)
  {}
  Init_RefereeData_groundrobotpos rfidstatus(::tide_msgs::msg::RefereeData::_rfidstatus_type arg)
  {
    msg_.rfidstatus = std::move(arg);
    return Init_RefereeData_groundrobotpos(msg_);
  }

private:
  ::tide_msgs::msg::RefereeData msg_;
};

class Init_RefereeData_bulletremaining
{
public:
  explicit Init_RefereeData_bulletremaining(::tide_msgs::msg::RefereeData & msg)
  : msg_(msg)
  {}
  Init_RefereeData_rfidstatus bulletremaining(::tide_msgs::msg::RefereeData::_bulletremaining_type arg)
  {
    msg_.bulletremaining = std::move(arg);
    return Init_RefereeData_rfidstatus(msg_);
  }

private:
  ::tide_msgs::msg::RefereeData msg_;
};

class Init_RefereeData_shootdata
{
public:
  explicit Init_RefereeData_shootdata(::tide_msgs::msg::RefereeData & msg)
  : msg_(msg)
  {}
  Init_RefereeData_bulletremaining shootdata(::tide_msgs::msg::RefereeData::_shootdata_type arg)
  {
    msg_.shootdata = std::move(arg);
    return Init_RefereeData_bulletremaining(msg_);
  }

private:
  ::tide_msgs::msg::RefereeData msg_;
};

class Init_RefereeData_robothurt
{
public:
  explicit Init_RefereeData_robothurt(::tide_msgs::msg::RefereeData & msg)
  : msg_(msg)
  {}
  Init_RefereeData_shootdata robothurt(::tide_msgs::msg::RefereeData::_robothurt_type arg)
  {
    msg_.robothurt = std::move(arg);
    return Init_RefereeData_shootdata(msg_);
  }

private:
  ::tide_msgs::msg::RefereeData msg_;
};

class Init_RefereeData_buff
{
public:
  explicit Init_RefereeData_buff(::tide_msgs::msg::RefereeData & msg)
  : msg_(msg)
  {}
  Init_RefereeData_robothurt buff(::tide_msgs::msg::RefereeData::_buff_type arg)
  {
    msg_.buff = std::move(arg);
    return Init_RefereeData_robothurt(msg_);
  }

private:
  ::tide_msgs::msg::RefereeData msg_;
};

class Init_RefereeData_gamerobotpos
{
public:
  explicit Init_RefereeData_gamerobotpos(::tide_msgs::msg::RefereeData & msg)
  : msg_(msg)
  {}
  Init_RefereeData_buff gamerobotpos(::tide_msgs::msg::RefereeData::_gamerobotpos_type arg)
  {
    msg_.gamerobotpos = std::move(arg);
    return Init_RefereeData_buff(msg_);
  }

private:
  ::tide_msgs::msg::RefereeData msg_;
};

class Init_RefereeData_powerheatdata
{
public:
  explicit Init_RefereeData_powerheatdata(::tide_msgs::msg::RefereeData & msg)
  : msg_(msg)
  {}
  Init_RefereeData_gamerobotpos powerheatdata(::tide_msgs::msg::RefereeData::_powerheatdata_type arg)
  {
    msg_.powerheatdata = std::move(arg);
    return Init_RefereeData_gamerobotpos(msg_);
  }

private:
  ::tide_msgs::msg::RefereeData msg_;
};

class Init_RefereeData_gamerobotstatus
{
public:
  explicit Init_RefereeData_gamerobotstatus(::tide_msgs::msg::RefereeData & msg)
  : msg_(msg)
  {}
  Init_RefereeData_powerheatdata gamerobotstatus(::tide_msgs::msg::RefereeData::_gamerobotstatus_type arg)
  {
    msg_.gamerobotstatus = std::move(arg);
    return Init_RefereeData_powerheatdata(msg_);
  }

private:
  ::tide_msgs::msg::RefereeData msg_;
};

class Init_RefereeData_refereewarning
{
public:
  explicit Init_RefereeData_refereewarning(::tide_msgs::msg::RefereeData & msg)
  : msg_(msg)
  {}
  Init_RefereeData_gamerobotstatus refereewarning(::tide_msgs::msg::RefereeData::_refereewarning_type arg)
  {
    msg_.refereewarning = std::move(arg);
    return Init_RefereeData_gamerobotstatus(msg_);
  }

private:
  ::tide_msgs::msg::RefereeData msg_;
};

class Init_RefereeData_eventdata
{
public:
  explicit Init_RefereeData_eventdata(::tide_msgs::msg::RefereeData & msg)
  : msg_(msg)
  {}
  Init_RefereeData_refereewarning eventdata(::tide_msgs::msg::RefereeData::_eventdata_type arg)
  {
    msg_.eventdata = std::move(arg);
    return Init_RefereeData_refereewarning(msg_);
  }

private:
  ::tide_msgs::msg::RefereeData msg_;
};

class Init_RefereeData_gamerobothp
{
public:
  explicit Init_RefereeData_gamerobothp(::tide_msgs::msg::RefereeData & msg)
  : msg_(msg)
  {}
  Init_RefereeData_eventdata gamerobothp(::tide_msgs::msg::RefereeData::_gamerobothp_type arg)
  {
    msg_.gamerobothp = std::move(arg);
    return Init_RefereeData_eventdata(msg_);
  }

private:
  ::tide_msgs::msg::RefereeData msg_;
};

class Init_RefereeData_gameresult
{
public:
  explicit Init_RefereeData_gameresult(::tide_msgs::msg::RefereeData & msg)
  : msg_(msg)
  {}
  Init_RefereeData_gamerobothp gameresult(::tide_msgs::msg::RefereeData::_gameresult_type arg)
  {
    msg_.gameresult = std::move(arg);
    return Init_RefereeData_gamerobothp(msg_);
  }

private:
  ::tide_msgs::msg::RefereeData msg_;
};

class Init_RefereeData_gamestatus
{
public:
  Init_RefereeData_gamestatus()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RefereeData_gameresult gamestatus(::tide_msgs::msg::RefereeData::_gamestatus_type arg)
  {
    msg_.gamestatus = std::move(arg);
    return Init_RefereeData_gameresult(msg_);
  }

private:
  ::tide_msgs::msg::RefereeData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tide_msgs::msg::RefereeData>()
{
  return tide_msgs::msg::builder::Init_RefereeData_gamestatus();
}

}  // namespace tide_msgs

#endif  // TIDE_MSGS__MSG__DETAIL__REFEREE_DATA__BUILDER_HPP_
