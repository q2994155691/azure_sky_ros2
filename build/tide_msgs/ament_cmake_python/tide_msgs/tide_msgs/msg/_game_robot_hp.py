# generated from rosidl_generator_py/resource/_idl.py.em
# with input from tide_msgs:msg/GameRobotHP.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GameRobotHP(type):
    """Metaclass of message 'GameRobotHP'."""

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
                'tide_msgs.msg.GameRobotHP')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__game_robot_hp
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__game_robot_hp
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__game_robot_hp
            cls._TYPE_SUPPORT = module.type_support_msg__msg__game_robot_hp
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__game_robot_hp

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GameRobotHP(metaclass=Metaclass_GameRobotHP):
    """Message class 'GameRobotHP'."""

    __slots__ = [
        '_red1robot_hp',
        '_red2robot_hp',
        '_red3robot_hp',
        '_red4robot_hp',
        '_reserved1',
        '_red7robot_hp',
        '_redoutpost_hp',
        '_redbase_hp',
        '_blue1robot_hp',
        '_blue2robot_hp',
        '_blue3robot_hp',
        '_blue4robot_hp',
        '_reserved2',
        '_blue7robot_hp',
        '_blueoutpost_hp',
        '_bluebase_hp',
    ]

    _fields_and_field_types = {
        'red1robot_hp': 'uint16',
        'red2robot_hp': 'uint16',
        'red3robot_hp': 'uint16',
        'red4robot_hp': 'uint16',
        'reserved1': 'uint16',
        'red7robot_hp': 'uint16',
        'redoutpost_hp': 'uint16',
        'redbase_hp': 'uint16',
        'blue1robot_hp': 'uint16',
        'blue2robot_hp': 'uint16',
        'blue3robot_hp': 'uint16',
        'blue4robot_hp': 'uint16',
        'reserved2': 'uint16',
        'blue7robot_hp': 'uint16',
        'blueoutpost_hp': 'uint16',
        'bluebase_hp': 'uint16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.red1robot_hp = kwargs.get('red1robot_hp', int())
        self.red2robot_hp = kwargs.get('red2robot_hp', int())
        self.red3robot_hp = kwargs.get('red3robot_hp', int())
        self.red4robot_hp = kwargs.get('red4robot_hp', int())
        self.reserved1 = kwargs.get('reserved1', int())
        self.red7robot_hp = kwargs.get('red7robot_hp', int())
        self.redoutpost_hp = kwargs.get('redoutpost_hp', int())
        self.redbase_hp = kwargs.get('redbase_hp', int())
        self.blue1robot_hp = kwargs.get('blue1robot_hp', int())
        self.blue2robot_hp = kwargs.get('blue2robot_hp', int())
        self.blue3robot_hp = kwargs.get('blue3robot_hp', int())
        self.blue4robot_hp = kwargs.get('blue4robot_hp', int())
        self.reserved2 = kwargs.get('reserved2', int())
        self.blue7robot_hp = kwargs.get('blue7robot_hp', int())
        self.blueoutpost_hp = kwargs.get('blueoutpost_hp', int())
        self.bluebase_hp = kwargs.get('bluebase_hp', int())

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
        if self.red1robot_hp != other.red1robot_hp:
            return False
        if self.red2robot_hp != other.red2robot_hp:
            return False
        if self.red3robot_hp != other.red3robot_hp:
            return False
        if self.red4robot_hp != other.red4robot_hp:
            return False
        if self.reserved1 != other.reserved1:
            return False
        if self.red7robot_hp != other.red7robot_hp:
            return False
        if self.redoutpost_hp != other.redoutpost_hp:
            return False
        if self.redbase_hp != other.redbase_hp:
            return False
        if self.blue1robot_hp != other.blue1robot_hp:
            return False
        if self.blue2robot_hp != other.blue2robot_hp:
            return False
        if self.blue3robot_hp != other.blue3robot_hp:
            return False
        if self.blue4robot_hp != other.blue4robot_hp:
            return False
        if self.reserved2 != other.reserved2:
            return False
        if self.blue7robot_hp != other.blue7robot_hp:
            return False
        if self.blueoutpost_hp != other.blueoutpost_hp:
            return False
        if self.bluebase_hp != other.bluebase_hp:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def red1robot_hp(self):
        """Message field 'red1robot_hp'."""
        return self._red1robot_hp

    @red1robot_hp.setter
    def red1robot_hp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'red1robot_hp' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'red1robot_hp' field must be an unsigned integer in [0, 65535]"
        self._red1robot_hp = value

    @builtins.property
    def red2robot_hp(self):
        """Message field 'red2robot_hp'."""
        return self._red2robot_hp

    @red2robot_hp.setter
    def red2robot_hp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'red2robot_hp' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'red2robot_hp' field must be an unsigned integer in [0, 65535]"
        self._red2robot_hp = value

    @builtins.property
    def red3robot_hp(self):
        """Message field 'red3robot_hp'."""
        return self._red3robot_hp

    @red3robot_hp.setter
    def red3robot_hp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'red3robot_hp' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'red3robot_hp' field must be an unsigned integer in [0, 65535]"
        self._red3robot_hp = value

    @builtins.property
    def red4robot_hp(self):
        """Message field 'red4robot_hp'."""
        return self._red4robot_hp

    @red4robot_hp.setter
    def red4robot_hp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'red4robot_hp' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'red4robot_hp' field must be an unsigned integer in [0, 65535]"
        self._red4robot_hp = value

    @builtins.property
    def reserved1(self):
        """Message field 'reserved1'."""
        return self._reserved1

    @reserved1.setter
    def reserved1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'reserved1' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'reserved1' field must be an unsigned integer in [0, 65535]"
        self._reserved1 = value

    @builtins.property
    def red7robot_hp(self):
        """Message field 'red7robot_hp'."""
        return self._red7robot_hp

    @red7robot_hp.setter
    def red7robot_hp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'red7robot_hp' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'red7robot_hp' field must be an unsigned integer in [0, 65535]"
        self._red7robot_hp = value

    @builtins.property
    def redoutpost_hp(self):
        """Message field 'redoutpost_hp'."""
        return self._redoutpost_hp

    @redoutpost_hp.setter
    def redoutpost_hp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'redoutpost_hp' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'redoutpost_hp' field must be an unsigned integer in [0, 65535]"
        self._redoutpost_hp = value

    @builtins.property
    def redbase_hp(self):
        """Message field 'redbase_hp'."""
        return self._redbase_hp

    @redbase_hp.setter
    def redbase_hp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'redbase_hp' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'redbase_hp' field must be an unsigned integer in [0, 65535]"
        self._redbase_hp = value

    @builtins.property
    def blue1robot_hp(self):
        """Message field 'blue1robot_hp'."""
        return self._blue1robot_hp

    @blue1robot_hp.setter
    def blue1robot_hp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'blue1robot_hp' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'blue1robot_hp' field must be an unsigned integer in [0, 65535]"
        self._blue1robot_hp = value

    @builtins.property
    def blue2robot_hp(self):
        """Message field 'blue2robot_hp'."""
        return self._blue2robot_hp

    @blue2robot_hp.setter
    def blue2robot_hp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'blue2robot_hp' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'blue2robot_hp' field must be an unsigned integer in [0, 65535]"
        self._blue2robot_hp = value

    @builtins.property
    def blue3robot_hp(self):
        """Message field 'blue3robot_hp'."""
        return self._blue3robot_hp

    @blue3robot_hp.setter
    def blue3robot_hp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'blue3robot_hp' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'blue3robot_hp' field must be an unsigned integer in [0, 65535]"
        self._blue3robot_hp = value

    @builtins.property
    def blue4robot_hp(self):
        """Message field 'blue4robot_hp'."""
        return self._blue4robot_hp

    @blue4robot_hp.setter
    def blue4robot_hp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'blue4robot_hp' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'blue4robot_hp' field must be an unsigned integer in [0, 65535]"
        self._blue4robot_hp = value

    @builtins.property
    def reserved2(self):
        """Message field 'reserved2'."""
        return self._reserved2

    @reserved2.setter
    def reserved2(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'reserved2' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'reserved2' field must be an unsigned integer in [0, 65535]"
        self._reserved2 = value

    @builtins.property
    def blue7robot_hp(self):
        """Message field 'blue7robot_hp'."""
        return self._blue7robot_hp

    @blue7robot_hp.setter
    def blue7robot_hp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'blue7robot_hp' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'blue7robot_hp' field must be an unsigned integer in [0, 65535]"
        self._blue7robot_hp = value

    @builtins.property
    def blueoutpost_hp(self):
        """Message field 'blueoutpost_hp'."""
        return self._blueoutpost_hp

    @blueoutpost_hp.setter
    def blueoutpost_hp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'blueoutpost_hp' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'blueoutpost_hp' field must be an unsigned integer in [0, 65535]"
        self._blueoutpost_hp = value

    @builtins.property
    def bluebase_hp(self):
        """Message field 'bluebase_hp'."""
        return self._bluebase_hp

    @bluebase_hp.setter
    def bluebase_hp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'bluebase_hp' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'bluebase_hp' field must be an unsigned integer in [0, 65535]"
        self._bluebase_hp = value
