cmake_minimum_required(VERSION 3.8)
project(rm_can_driver)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(ros2_socketcan REQUIRED)
find_package(auto_aim_interfaces REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(tf2 REQUIRED)
find_package(tf2_ros REQUIRED)
find_package(tf2_geometry_msgs REQUIRED)
find_package(sensor_msgs REQUIRED)

add_executable(rm_can_driver_node src/rm_can_driver.cpp)
target_include_directories(rm_can_driver_node PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>)
target_compile_features(rm_can_driver_node PUBLIC c_std_99 cxx_std_17)  # Require C99 and C++17

ament_target_dependencies(
  rm_can_driver_node
  "rclcpp"
  "auto_aim_interfaces"
  "sensor_msgs"
  "ros2_socketcan"
  "tf2"
  "tf2_ros"
  "sensor_msgs"
  "tf2_geometry_msgs"
)

# 移除了 target_link_libraries 中对 ros2_socketcan::ros2_socketcan 的链接
# 因为已经通过 ament_target_dependencies 处理了依赖关系

install(TARGETS rm_can_driver_node
  DESTINATION lib/${PROJECT_NAME})

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()