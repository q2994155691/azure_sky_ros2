#ifndef MY_HARDWARE_INTERFACE__TIDE_REMOTE_CONTROLLER_HPP_
#define MY_HARDWARE_INTERFACE__TIDE_REMOTE_CONTROLLER_HPP_

#include <rclcpp/rclcpp.hpp>
#include <array>
#include <string>
#include <cmath>

namespace my_hardware_interface
{

constexpr double RC_WATCHDOG_TIMEOUT = 0.5;  // 遙控器通信超時時間，單位秒

typedef enum
{
  RC_LOST = 0,
  RC_OK,
} RC_Status_e;

typedef enum
{
  CAN_ID_CHANNELS = 0x301,
  CAN_ID_SWITCHES = 0x302,  
  CAN_ID_WHEEL = 0x303,
} RC_CAN_ID_e;

typedef struct
{
  std::string rc_name="rc1";
  std::string can_bus="can0";
  uint32_t channels_id=0x301;  // 0x301
  uint32_t switches_id=0x302;  // 0x302
  uint32_t wheel_id=0x303;     // 0x303
} RC_Config_t;

class RemoteController
{
public:
  struct Measure
  {
    // 通道數據 (-660 到 +660)
    int16_t ch1{ 0 };
    int16_t ch2{ 0 };
    int16_t ch3{ 0 };
    int16_t ch4{ 0 };
    
    // 開關數據 (0, 1, 2)
    uint8_t sw1{ 0 };
    uint8_t sw2{ 0 };
    
    // 滾輪數據
    int16_t wheel{ 0 };
    
    // 數據有效性標記
    bool channels_valid{ false };
    bool switches_valid{ false };
    bool wheel_valid{ false };
    
    Measure() = default;
  };

  RC_Status_e status = RC_LOST;
  RC_Config_t config_;
  Measure measure;
  
  // 三個CAN ID對應的接收緩存
  std::array<uint8_t, 8> channels_rx_buff = { 0 };  // 0x301
  std::array<uint8_t, 8> switches_rx_buff = { 0 };  // 0x302  
  std::array<uint8_t, 8> wheel_rx_buff = { 0 };     // 0x303

  explicit RemoteController(const RC_Config_t& config);
  
  // 解析不同CAN ID的數據
  void decode_channels_feedback();   // 解析0x301通道數據
  void decode_switches_feedback();   // 解析0x302開關數據
  void decode_wheel_feedback();      // 解析0x303滾輪數據
  
  // 檢查連接狀態
  bool check_connection(const rclcpp::Time& current_time);
  
  // 更新時間戳
  void update_channels_timestamp(const rclcpp::Time& time) { last_channels_time_ = time; }
  void update_switches_timestamp(const rclcpp::Time& time) { last_switches_time_ = time; }
  void update_wheel_timestamp(const rclcpp::Time& time) { last_wheel_time_ = time; }
  
  // 停止/重置
  void reset_data();
  
  // 獲取完整狀態
  bool is_all_data_valid() const;

private:
  rclcpp::Time last_channels_time_{ 0, 0, RCL_ROS_TIME };
  rclcpp::Time last_switches_time_{ 0, 0, RCL_ROS_TIME };
  rclcpp::Time last_wheel_time_{ 0, 0, RCL_ROS_TIME };
  
  // 檢查各個數據的連接狀態
  bool check_channels_connection(const rclcpp::Time& current_time);
  bool check_switches_connection(const rclcpp::Time& current_time);
  bool check_wheel_connection(const rclcpp::Time& current_time);
};

}  // namespace my_hardware_interface

#endif  // MY_HARDWARE_INTERFACE__TIDE_REMOTE_CONTROLLER_HPP_