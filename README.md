目前的項目有複雜的依賴關係，如以請按順序建構

# 第一階段：建構基礎消息套件
colcon build --packages-select auto_aim_interfaces tide_msgs ros2_socketcan_msgs

# 第二階段：建構依賴這些接口的套件
colcon build --packages-select auto_aim auto_aim_debug

# 第三階段：建構其餘套件
colcon build

<img width="1580" height="251" alt="dependencies" src="https://github.com/user-attachments/assets/e5b09f1e-0484-4851-a0f0-a28c029509ee" />
