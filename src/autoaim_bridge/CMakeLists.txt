cmake_minimum_required(VERSION 3.8)
project(autoaim_bridge)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# 查找依赖
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(tide_msgs REQUIRED)
find_package(auto_aim_interfaces REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(tf2_ros REQUIRED)
find_package(tf2_geometry_msgs REQUIRED)

# 添加可执行文件
add_executable(autoaim_bridge_node src/autoaim_bridge_node.cpp)

# 添加包含目录
target_include_directories(autoaim_bridge_node PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>
)

# 链接依赖
ament_target_dependencies(autoaim_bridge_node
  rclcpp
  tide_msgs
  auto_aim_interfaces
  tf2_ros
  tf2_geometry_msgs
  geometry_msgs
)

# 安装可执行文件
install(TARGETS autoaim_bridge_node
  DESTINATION lib/${PROJECT_NAME}
)

# 安装头文件
install(DIRECTORY include/
  DESTINATION include
)

ament_package()

