std_msgs/Header header

# Gimbal angles in radians
float64 yaw
float64 pitch

# Gimbal velocities in rad/s
float64 yaw_velocity
float64 pitch_velocity

# Motor currents in A
float64 yaw_current
float64 pitch_current

# Motor temperatures in °C
uint8 yaw_temperature
uint8 pitch_temperature