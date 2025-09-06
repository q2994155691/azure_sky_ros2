cmake_minimum_required(VERSION 3.10)
project(armor_tracker)

## Use C++14
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

## By adding -Wall and -Werror, the compiler does not ignore warnings anymore,
## enforcing cleaner code.
add_definitions(-Wall -Werror)

## Export compile commands for clangd
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

#######################
## Find dependencies ##
#######################
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(rclcpp_components REQUIRED)
find_package(angles REQUIRED)
find_package(std_srvs REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(visualization_msgs REQUIRED)
find_package(message_filters REQUIRED)
find_package(tf2_geometry_msgs REQUIRED)
find_package(auto_aim_interfaces REQUIRED)

# Eigen3 的正确查找方式
find_package(Eigen3 REQUIRED)

###########
## Build ##
###########

# 创建共享库
add_library(${PROJECT_NAME} SHARED
  src/tracker.cpp
  src/extended_kalman_filter.cpp
  src/tracker_node.cpp
)

# 链接 Eigen
target_link_libraries(${PROJECT_NAME}
  Eigen3::Eigen
)

# 设置包含目录
target_include_directories(${PROJECT_NAME} PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>
)

# 链接依赖
ament_target_dependencies(${PROJECT_NAME}
  rclcpp
  rclcpp_components
  angles
  std_srvs
  geometry_msgs
  visualization_msgs
  message_filters
  tf2_geometry_msgs
  auto_aim_interfaces
)

# 注册组件节点
rclcpp_components_register_node(${PROJECT_NAME}
  PLUGIN rm_auto_aim::ArmorTrackerNode
  EXECUTABLE armor_tracker_node
)

#############
## Testing ##
#############

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  list(APPEND AMENT_LINT_AUTO_EXCLUDE
    ament_cmake_copyright
    ament_cmake_uncrustify
    ament_cmake_cpplint
  )
  ament_lint_auto_find_test_dependencies()
endif()

#############
## Install ##
#############

# 安装头文件
install(
  DIRECTORY include/
  DESTINATION include
)

# 安装库文件
install(
  TARGETS ${PROJECT_NAME}
  EXPORT export_${PROJECT_NAME}
  LIBRARY DESTINATION lib
  ARCHIVE DESTINATION lib
  RUNTIME DESTINATION bin
  INCLUDES DESTINATION include
)

# 导出依赖
ament_export_dependencies(
  rclcpp
  rclcpp_components
  angles
  std_srvs
  geometry_msgs
  visualization_msgs
  message_filters
  tf2_geometry_msgs
  auto_aim_interfaces
)

ament_export_targets(export_${PROJECT_NAME} HAS_LIBRARY_TARGET)
ament_export_include_directories(include)
ament_export_libraries(${PROJECT_NAME})

ament_package()