# 只启动相机与串口节点

import os
from ament_index_python.packages import get_package_share_directory, get_package_prefix
from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration, PathJoinSubstitution
from launch_ros.substitutions import FindPackageShare

def generate_launch_description():
    params_file = DeclareLaunchArgument(
        'params_file',
        default_value=PathJoinSubstitution([FindPackageShare('auto_aim_bringup'), 'config', 'default.yaml']),
        description='Full path to the parameter file'
    )
    
    return LaunchDescription([
        params_file,
        
        # 使用send_debug_detector_node独占相机（移除usb_cam避免冲突）
        Node(
            package='usb_cam',
            executable='usb_cam_node_exe',
            name='usb_cam',
            output='screen',
            emulate_tty=True,
            parameters=[{
                'video_device': '/dev/video2',
                'image_width': 640,
                'image_height': 480,
                'framerate': 30.0,
                'pixel_format': 'yuyv',
                'camera_frame_id': 'camera_link',
                'camera_name': 'usb_cam',
                'io_method': 'mmap',
                'camera_info_url': 'file:///home/luis/workshop_ws/src/auto_aim_bringup/config/camera_calibration.yaml',
            }],
            remappings=[
                ('image_raw', '/image_raw'),
                ('camera_info', '/camera_info'),
            ]
        ),
        Node(
            package='auto_aim_publisher',
            executable='send_debug_detector_node',
            name='send_debug_detector_node',
            parameters=[LaunchConfiguration('params_file')],
            output='screen',
        ),
        # 串口和处理节点
        Node(
            package='auto_aim',
            executable='serial_read_data_node',
            name='serial_read_data_node',
            parameters=[LaunchConfiguration('params_file')],
            output='screen',
        ),
        
        Node(
            package='auto_aim',
            executable='serial_send_data_node',
            name='serial_send_data_node',
            parameters=[LaunchConfiguration('params_file')],
            output='screen',
        ),
        
        Node(
            package='auto_aim',
            executable='auto_aim_processor_node',
            name='auto_aim_processor_node',
            parameters=[LaunchConfiguration('params_file')],
            output='screen',
        ),

        Node(
            package='auto_aim_debug',
            executable='auto_aim_debug_node',
            name='auto_aim_debug_node',
            parameters=[LaunchConfiguration('params_file')],
            output='screen',
        ),
    ])
