cmake_minimum_required(VERSION 3.8)
project(auto_aim)

set(CMAKE_CXX_STANDARD 14)

include_directories("/usr/include/eigen3")
include_directories("src")

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

if(CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fvisibility=hidden -fvisibility-inlines-hidden")
endif()

find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(cv_bridge REQUIRED)
find_package(OpenCV REQUIRED)
find_package(auto_aim_interfaces REQUIRED)
find_package(Ceres REQUIRED)

# 修改這裡：使用正確的 OpenVINO 配置
set(OpenVINO_DIR "/usr/lib/x86_64-linux-gnu/cmake/openvino2023.0.0")
find_package(OpenVINO REQUIRED COMPONENTS Runtime)

# 移除這些不正確的行：
# set(InferenceEngine_DIR "/opt/intel/openvino_2023/runtime/cmake")
# include_directories(${InferenceEngine_INCLUDE_DIRS})
# link_directories("/opt/intel/openvino_2023/runtime/include")

# 递归编译全部文件
file(GLOB_RECURSE DETECTOR_SOURCES
    "${PROJECT_SOURCE_DIR}/detector/*.cpp"
)

file(GLOB_RECURSE PROCESSOR_SOURCES
    "${PROJECT_SOURCE_DIR}/processor/*.cpp"
)

file(GLOB_RECURSE CONTROLER_SOURCES
    "${PROJECT_SOURCE_DIR}/controler/*.cpp"
)

file(GLOB_RECURSE DEBUGGER_SOURCES
    "${PROJECT_SOURCE_DIR}/debugger/*.cpp"
)

add_executable(auto_aim_detector_node 
  node/DetectorNode.cpp
  ${DETECTOR_SOURCES}
)

add_executable(auto_aim_processor_node 
  node/ProcessorNode.cpp
  ${PROCESSOR_SOURCES}
  ${CONTROLER_SOURCES}
  ${DEBUGGER_SOURCES}
)

add_executable(serial_read_data_node 
  node/SerialReadNode.cpp
  controler/SerialModule/Serial.cpp
)

add_executable(serial_send_data_node 
  node/SerialSendNode.cpp
  controler/SerialModule/Serial.cpp
)

# 修改這裡：將 InferenceEngine 改為 OpenVINO
ament_target_dependencies(auto_aim_detector_node rclcpp 
  sensor_msgs cv_bridge OpenCV auto_aim_interfaces)

ament_target_dependencies(auto_aim_processor_node rclcpp 
  sensor_msgs cv_bridge OpenCV auto_aim_interfaces)

ament_target_dependencies(serial_read_data_node rclcpp 
  sensor_msgs cv_bridge OpenCV auto_aim_interfaces)

ament_target_dependencies(serial_send_data_node rclcpp 
  sensor_msgs cv_bridge OpenCV auto_aim_interfaces)
  
 ament_target_dependencies(auto_aim_detector_node rclcpp 
  sensor_msgs cv_bridge OpenCV auto_aim_interfaces Ceres)

ament_target_dependencies(auto_aim_processor_node rclcpp 
  sensor_msgs cv_bridge OpenCV auto_aim_interfaces Ceres)


# 修改這裡：添加 OpenVINO 鏈接
target_link_libraries(auto_aim_detector_node fmt ${CERES_LIBRARIES} openvino::runtime)

target_link_libraries(auto_aim_processor_node fmt ${CERES_LIBRARIES} openvino::runtime)

target_link_libraries(serial_read_data_node fmt ${CERES_LIBRARIES})

target_link_libraries(serial_send_data_node fmt ${CERES_LIBRARIES})

install(TARGETS auto_aim_detector_node DESTINATION lib/${PROJECT_NAME})

install(TARGETS auto_aim_processor_node DESTINATION lib/${PROJECT_NAME})

install(TARGETS serial_read_data_node DESTINATION lib/${PROJECT_NAME})

install(TARGETS serial_send_data_node DESTINATION lib/${PROJECT_NAME})

ament_package()

