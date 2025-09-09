# generated from rosidl_generator_py/resource/_idl.py.em
# with input from tide_msgs:msg/InteractID.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_InteractID(type):
    """Metaclass of message 'InteractID'."""

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
                'tide_msgs.msg.InteractID')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__interact_id
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__interact_id
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__interact_id
            cls._TYPE_SUPPORT = module.type_support_msg__msg__interact_id
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__interact_id

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class InteractID(metaclass=Metaclass_InteractID):
    """Message class 'InteractID'."""

    __slots__ = [
        '_teammate_hero',
        '_teammate_infantry3',
        '_teammate_infantry4',
        '_teammate_infantry5',
        '_teammate_sentry',
        '_client_hero',
        '_client_infantry3',
        '_client_infantry4',
        '_client_infantry5',
    ]

    _fields_and_field_types = {
        'teammate_hero': 'uint16',
        'teammate_infantry3': 'uint16',
        'teammate_infantry4': 'uint16',
        'teammate_infantry5': 'uint16',
        'teammate_sentry': 'uint16',
        'client_hero': 'uint16',
        'client_infantry3': 'uint16',
        'client_infantry4': 'uint16',
        'client_infantry5': 'uint16',
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
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.teammate_hero = kwargs.get('teammate_hero', int())
        self.teammate_infantry3 = kwargs.get('teammate_infantry3', int())
        self.teammate_infantry4 = kwargs.get('teammate_infantry4', int())
        self.teammate_infantry5 = kwargs.get('teammate_infantry5', int())
        self.teammate_sentry = kwargs.get('teammate_sentry', int())
        self.client_hero = kwargs.get('client_hero', int())
        self.client_infantry3 = kwargs.get('client_infantry3', int())
        self.client_infantry4 = kwargs.get('client_infantry4', int())
        self.client_infantry5 = kwargs.get('client_infantry5', int())

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
        if self.teammate_hero != other.teammate_hero:
            return False
        if self.teammate_infantry3 != other.teammate_infantry3:
            return False
        if self.teammate_infantry4 != other.teammate_infantry4:
            return False
        if self.teammate_infantry5 != other.teammate_infantry5:
            return False
        if self.teammate_sentry != other.teammate_sentry:
            return False
        if self.client_hero != other.client_hero:
            return False
        if self.client_infantry3 != other.client_infantry3:
            return False
        if self.client_infantry4 != other.client_infantry4:
            return False
        if self.client_infantry5 != other.client_infantry5:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def teammate_hero(self):
        """Message field 'teammate_hero'."""
        return self._teammate_hero

    @teammate_hero.setter
    def teammate_hero(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'teammate_hero' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'teammate_hero' field must be an unsigned integer in [0, 65535]"
        self._teammate_hero = value

    @builtins.property
    def teammate_infantry3(self):
        """Message field 'teammate_infantry3'."""
        return self._teammate_infantry3

    @teammate_infantry3.setter
    def teammate_infantry3(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'teammate_infantry3' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'teammate_infantry3' field must be an unsigned integer in [0, 65535]"
        self._teammate_infantry3 = value

    @builtins.property
    def teammate_infantry4(self):
        """Message field 'teammate_infantry4'."""
        return self._teammate_infantry4

    @teammate_infantry4.setter
    def teammate_infantry4(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'teammate_infantry4' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'teammate_infantry4' field must be an unsigned integer in [0, 65535]"
        self._teammate_infantry4 = value

    @builtins.property
    def teammate_infantry5(self):
        """Message field 'teammate_infantry5'."""
        return self._teammate_infantry5

    @teammate_infantry5.setter
    def teammate_infantry5(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'teammate_infantry5' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'teammate_infantry5' field must be an unsigned integer in [0, 65535]"
        self._teammate_infantry5 = value

    @builtins.property
    def teammate_sentry(self):
        """Message field 'teammate_sentry'."""
        return self._teammate_sentry

    @teammate_sentry.setter
    def teammate_sentry(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'teammate_sentry' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'teammate_sentry' field must be an unsigned integer in [0, 65535]"
        self._teammate_sentry = value

    @builtins.property
    def client_hero(self):
        """Message field 'client_hero'."""
        return self._client_hero

    @client_hero.setter
    def client_hero(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'client_hero' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'client_hero' field must be an unsigned integer in [0, 65535]"
        self._client_hero = value

    @builtins.property
    def client_infantry3(self):
        """Message field 'client_infantry3'."""
        return self._client_infantry3

    @client_infantry3.setter
    def client_infantry3(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'client_infantry3' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'client_infantry3' field must be an unsigned integer in [0, 65535]"
        self._client_infantry3 = value

    @builtins.property
    def client_infantry4(self):
        """Message field 'client_infantry4'."""
        return self._client_infantry4

    @client_infantry4.setter
    def client_infantry4(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'client_infantry4' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'client_infantry4' field must be an unsigned integer in [0, 65535]"
        self._client_infantry4 = value

    @builtins.property
    def client_infantry5(self):
        """Message field 'client_infantry5'."""
        return self._client_infantry5

    @client_infantry5.setter
    def client_infantry5(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'client_infantry5' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'client_infantry5' field must be an unsigned integer in [0, 65535]"
        self._client_infantry5 = value
