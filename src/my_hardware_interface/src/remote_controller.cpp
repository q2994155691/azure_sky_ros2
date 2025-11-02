// src/remote_controller.cpp
#include "my_hardware_interface/remote_controller.hpp"

namespace my_hardware_interface
{

RemoteController::RemoteController(const RC_Config_t& config)
  : config_(config)  
{
  status = RC_LOST;
  measure = Measure();
  channels_rx_buff.fill(0);
  switches_rx_buff.fill(0);
  wheel_rx_buff.fill(0);
}

void RemoteController::decode_channels_feedback()
{
  measure.ch1 = static_cast<int16_t>(channels_rx_buff[1]| (channels_rx_buff[0] << 8) );
  measure.ch2 = static_cast<int16_t>( channels_rx_buff[3]| (channels_rx_buff[2] << 8));
  measure.ch3 = static_cast<int16_t>( channels_rx_buff[5]| (channels_rx_buff[4] << 8));
  measure.ch4 = static_cast<int16_t>( channels_rx_buff[7]| (channels_rx_buff[6] << 8));
}



void RemoteController::decode_switches_feedback()
{
  measure.sw1 = switches_rx_buff[0];
  measure.sw2 = switches_rx_buff[1];
}

void RemoteController::decode_wheel_feedback()
{
  measure.wheel = static_cast<int16_t>( wheel_rx_buff[1]| (wheel_rx_buff[0] << 8) );
}


bool RemoteController::check_connection(const rclcpp::Time& current_time)
{
  bool channels_ok = check_channels_connection(current_time);
  bool switches_ok = check_switches_connection(current_time);
  bool wheel_ok = check_wheel_connection(current_time);
  
  if (channels_ok && switches_ok && wheel_ok)
  {
    status = RC_OK;
    return true;
  }
  else
  {
    status = RC_LOST;
    return false;
  }
}

void RemoteController::reset_data()
{
  measure.ch1 = 0;
  measure.ch2 = 0;
  measure.ch3 = 0;
  measure.ch4 = 0;
  measure.sw1 = 0;
  measure.sw2 = 0;
  measure.wheel = 0;
  
  measure.channels_valid = false;
  measure.switches_valid = false;
  measure.wheel_valid = false;
  
  status = RC_LOST;
}

bool RemoteController::is_all_data_valid() const
{
  return measure.channels_valid && measure.switches_valid && measure.wheel_valid;
}

bool RemoteController::check_channels_connection(const rclcpp::Time& current_time)
{
  auto time_diff = (current_time - last_channels_time_).seconds();
  return time_diff < RC_WATCHDOG_TIMEOUT;
}

bool RemoteController::check_switches_connection(const rclcpp::Time& current_time)
{
  auto time_diff = (current_time - last_switches_time_).seconds();
  return time_diff < RC_WATCHDOG_TIMEOUT;
}

bool RemoteController::check_wheel_connection(const rclcpp::Time& current_time)
{
  auto time_diff = (current_time - last_wheel_time_).seconds();
  return time_diff < RC_WATCHDOG_TIMEOUT;
}

}  // namespace my_hardware_interface
