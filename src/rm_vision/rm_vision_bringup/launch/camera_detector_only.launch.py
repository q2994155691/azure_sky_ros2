# 文件路径: rm_vision/rm_vision_bringup/launch/camera_detector_only.launch.py
import os
import sys
from ament_index_python.packages import get_package_share_directory
sys.path.append(os.path.join(get_package_share_directory('rm_vision_bringup'), 'launch'))

def generate_launch_description():
    from common import node_params, launch_params, robot_state_publisher, armor_tracker_node
    from launch_ros.descriptions import ComposableNode
    from launch_ros.actions import ComposableNodeContainer, Node
    from launch.actions import Shutdown
    from launch import LaunchDescription

    def get_camera_node(package, plugin):
        return ComposableNode(
            package=package,
            plugin=plugin,
            name='camera_node',
            parameters=[node_params,
            	{
            	   'frame_id': 'cam0_link',                    # 使用 cam0_link
                   'camera_optical_frame_id': 'cam0_optical_frame'
            	}
            ],
            extra_arguments=[{'use_intra_process_comms': True}]
        )

    def get_camera_detector_container(camera_node):
        return ComposableNodeContainer(
            name='camera_detector_container',
            namespace='',
            package='rclcpp_components',
            executable='component_container',
            composable_node_descriptions=[
                camera_node,
                ComposableNode(
                    package='armor_detector',
                    plugin='rm_auto_aim::ArmorDetectorNode',
                    name='armor_detector',
                    parameters=[node_params],
                    extra_arguments=[{'use_intra_process_comms': True}]
                )
            ],
            output='both',
            emulate_tty=True,
            ros_arguments=['--ros-args', '--log-level',
                           'armor_detector:='+launch_params['armor_detector_log_level']],
            on_exit=Shutdown(),
        )

    # 根据配置选择相机节点
    hik_camera_node = get_camera_node('hik_camera', 'hik_camera::HikCameraNode')

    if (launch_params['camera'] == 'hik'):
        cam_detector = get_camera_detector_container(hik_camera_node)
    else:
        raise ValueError(f"Unsupported camera type: {launch_params['camera']}")

    return LaunchDescription([
        robot_state_publisher,
        cam_detector,
        armor_tracker_node
    ])
