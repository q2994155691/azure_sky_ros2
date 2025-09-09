# generated from rosidl_generator_py/resource/_idl.py.em
# with input from tide_msgs:msg/GameRobotStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GameRobotStatus(type):
    """Metaclass of message 'GameRobotStatus'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('tide_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tide_msgs.msg.GameRobotStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__game_robot_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__game_robot_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__game_robot_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__game_robot_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__game_robot_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GameRobotStatus(metaclass=Metaclass_GameRobotStatus):
    """Message class 'GameRobotStatus'."""

    __slots__ = [
        '_robot_id',
        '_robot_level',
        '_current_hp',
        '_maximum_hp',
        '_shooter_barrel_cooling_value',
        '_shooter_barrel_heat_limit',
        '_chassis_power_limit',
        '_power_management_gimbal_output',
        '_power_management_chassis_output',
        '_power_management_shooter_output',
    ]

    _fields_and_field_types = {
        'robot_id': 'uint8',
        'robot_level': 'uint8',
        'current_hp': 'uint16',
        'maximum_hp': 'uint16',
        'shooter_barrel_cooling_value': 'uint16',
        'shooter_barrel_heat_limit': 'uint16',
        'chassis_power_limit': 'uint16',
        'power_management_gimbal_output': 'uint8',
        'power_management_chassis_output': 'uint8',
        'power_management_shooter_output': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.robot_id = kwargs.get('robot_id', int())
        self.robot_level = kwargs.get('robot_level', int())
        self.current_hp = kwargs.get('current_hp', int())
        self.maximum_hp = kwargs.get('maximum_hp', int())
        self.shooter_barrel_cooling_value = kwargs.get('shooter_barrel_cooling_value', int())
        self.shooter_barrel_heat_limit = kwargs.get('shooter_barrel_heat_limit', int())
        self.chassis_power_limit = kwargs.get('chassis_power_limit', int())
        self.power_management_gimbal_output = kwargs.get('power_management_gimbal_output', int())
        self.power_management_chassis_output = kwargs.get('power_management_chassis_output', int())
        self.power_management_shooter_output = kwargs.get('power_management_shooter_output', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.robot_id != other.robot_id:
            return False
        if self.robot_level != other.robot_level:
            return False
        if self.current_hp != other.current_hp:
            return False
        if self.maximum_hp != other.maximum_hp:
            return False
        if self.shooter_barrel_cooling_value != other.shooter_barrel_cooling_value:
            return False
        if self.shooter_barrel_heat_limit != other.shooter_barrel_heat_limit:
            return False
        if self.chassis_power_limit != other.chassis_power_limit:
            return False
        if self.power_management_gimbal_output != other.power_management_gimbal_output:
            return False
        if self.power_management_chassis_output != other.power_management_chassis_output:
            return False
        if self.power_management_shooter_output != other.power_management_shooter_output:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def robot_id(self):
        """Message field 'robot_id'."""
        return self._robot_id

    @robot_id.setter
    def robot_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'robot_id' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'robot_id' field must be an unsigned integer in [0, 255]"
        self._robot_id = value

    @builtins.property
    def robot_level(self):
        """Message field 'robot_level'."""
        return self._robot_level

    @robot_level.setter
    def robot_level(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'robot_level' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'robot_level' field must be an unsigned integer in [0, 255]"
        self._robot_level = value

    @builtins.property
    def current_hp(self):
        """Message field 'current_hp'."""
        return self._current_hp

    @current_hp.setter
    def current_hp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'current_hp' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'current_hp' field must be an unsigned integer in [0, 65535]"
        self._current_hp = value

    @builtins.property
    def maximum_hp(self):
        """Message field 'maximum_hp'."""
        return self._maximum_hp

    @maximum_hp.setter
    def maximum_hp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'maximum_hp' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'maximum_hp' field must be an unsigned integer in [0, 65535]"
        self._maximum_hp = value

    @builtins.property
    def shooter_barrel_cooling_value(self):
        """Message field 'shooter_barrel_cooling_value'."""
        return self._shooter_barrel_cooling_value

    @shooter_barrel_cooling_value.setter
    def shooter_barrel_cooling_value(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'shooter_barrel_cooling_value' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'shooter_barrel_cooling_value' field must be an unsigned integer in [0, 65535]"
        self._shooter_barrel_cooling_value = value

    @builtins.property
    def shooter_barrel_heat_limit(self):
        """Message field 'shooter_barrel_heat_limit'."""
        return self._shooter_barrel_heat_limit

    @shooter_barrel_heat_limit.setter
    def shooter_barrel_heat_limit(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'shooter_barrel_heat_limit' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'shooter_barrel_heat_limit' field must be an unsigned integer in [0, 65535]"
        self._shooter_barrel_heat_limit = value

    @builtins.property
    def chassis_power_limit(self):
        """Message field 'chassis_power_limit'."""
        return self._chassis_power_limit

    @chassis_power_limit.setter
    def chassis_power_limit(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'chassis_power_limit' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'chassis_power_limit' field must be an unsigned integer in [0, 65535]"
        self._chassis_power_limit = value

    @builtins.property
    def power_management_gimbal_output(self):
        """Message field 'power_management_gimbal_output'."""
        return self._power_management_gimbal_output

    @power_management_gimbal_output.setter
    def power_management_gimbal_output(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'power_management_gimbal_output' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'power_management_gimbal_output' field must be an unsigned integer in [0, 255]"
        self._power_management_gimbal_output = value

    @builtins.property
    def power_management_chassis_output(self):
        """Message field 'power_management_chassis_output'."""
        return self._power_management_chassis_output

    @power_management_chassis_output.setter
    def power_management_chassis_output(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'power_management_chassis_output' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'power_management_chassis_output' field must be an unsigned integer in [0, 255]"
        self._power_management_chassis_output = value

    @builtins.property
    def power_management_shooter_output(self):
        """Message field 'power_management_shooter_output'."""
        return self._power_management_shooter_output

    @power_management_shooter_output.setter
    def power_management_shooter_output(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'power_management_shooter_output' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'power_management_shooter_output' field must be an unsigned integer in [0, 255]"
        self._power_management_shooter_output = value
