cmake_minimum_required(VERSION 3.8)
project(my_hardware_interface)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(hardware_interface REQUIRED)
find_package(pluginlib REQUIRED)
find_package(rclcpp REQUIRED)
find_package(rclcpp_lifecycle REQUIRED)
find_package(ros2_socketcan REQUIRED)
find_package(controller_interface REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(realtime_tools REQUIRED)


add_library(
  my_hardware_interface
  SHARED
  src/custom_mecanum_controller.cpp
  src/rrbot_hardware_interface.cpp
  src/tide_motor.cpp
)
target_include_directories(
  my_hardware_interface
  PUBLIC
  include
  ${ros2_socketcan_INCLUDE_DIRS} 
)

ament_target_dependencies(
  my_hardware_interface
  controller_interface
  hardware_interface
  rclcpp
  rclcpp_lifecycle
  ros2_socketcan
  
  geometry_msgs
  realtime_tools
)
# prevent pluginlib from using boost
target_compile_definitions(my_hardware_interface PUBLIC "PLUGINLIB__DISABLE_BOOST_FUNCTIONS")

pluginlib_export_plugin_description_file(
  hardware_interface my_hardware_interface.xml)
pluginlib_export_plugin_description_file(
  controller_interface my_hardware_interface.xml)


install(
  TARGETS
  my_hardware_interface
  RUNTIME DESTINATION bin
  ARCHIVE DESTINATION lib
  LIBRARY DESTINATION lib
)

install(
  DIRECTORY include/
  DESTINATION include
)

install(FILES
  my_hardware_interface.xml
  DESTINATION share/${PROJECT_NAME}
)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # comment the line when a copyright and license is added to all source files
  set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # comment the line when this package is in a git repo and when
  # a copyright and license is added to all source files
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
  find_package(ament_cmake_gmock REQUIRED)
  find_package(ros2_control_test_assets REQUIRED)

  ament_add_gmock(test_rrbot_hardware_interface test/test_rrbot_hardware_interface.cpp)
  target_include_directories(test_rrbot_hardware_interface PRIVATE include)
  ament_target_dependencies(
    test_rrbot_hardware_interface
    hardware_interface
    pluginlib
    ros2_control_test_assets
  )
endif()

ament_export_include_directories(
  include
)
ament_export_libraries(
  my_hardware_interface
)
ament_export_dependencies(
  hardware_interface
  pluginlib
  rclcpp
  rclcpp_lifecycle
  ros2_socketcan
)

ament_package()
