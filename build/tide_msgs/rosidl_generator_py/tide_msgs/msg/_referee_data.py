# generated from rosidl_generator_py/resource/_idl.py.em
# with input from tide_msgs:msg/RefereeData.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RefereeData(type):
    """Metaclass of message 'RefereeData'."""

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
                'tide_msgs.msg.RefereeData')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__referee_data
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__referee_data
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__referee_data
            cls._TYPE_SUPPORT = module.type_support_msg__msg__referee_data
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__referee_data

            from tide_msgs.msg import Buff
            if Buff.__class__._TYPE_SUPPORT is None:
                Buff.__class__.__import_type_support__()

            from tide_msgs.msg import BulletRemaining
            if BulletRemaining.__class__._TYPE_SUPPORT is None:
                BulletRemaining.__class__.__import_type_support__()

            from tide_msgs.msg import EventData
            if EventData.__class__._TYPE_SUPPORT is None:
                EventData.__class__.__import_type_support__()

            from tide_msgs.msg import GameResult
            if GameResult.__class__._TYPE_SUPPORT is None:
                GameResult.__class__.__import_type_support__()

            from tide_msgs.msg import GameRobotHP
            if GameRobotHP.__class__._TYPE_SUPPORT is None:
                GameRobotHP.__class__.__import_type_support__()

            from tide_msgs.msg import GameRobotPos
            if GameRobotPos.__class__._TYPE_SUPPORT is None:
                GameRobotPos.__class__.__import_type_support__()

            from tide_msgs.msg import GameRobotStatus
            if GameRobotStatus.__class__._TYPE_SUPPORT is None:
                GameRobotStatus.__class__.__import_type_support__()

            from tide_msgs.msg import GameStatus
            if GameStatus.__class__._TYPE_SUPPORT is None:
                GameStatus.__class__.__import_type_support__()

            from tide_msgs.msg import GroundRobot
            if GroundRobot.__class__._TYPE_SUPPORT is None:
                GroundRobot.__class__.__import_type_support__()

            from tide_msgs.msg import InteractID
            if InteractID.__class__._TYPE_SUPPORT is None:
                InteractID.__class__.__import_type_support__()

            from tide_msgs.msg import PowerHeatData
            if PowerHeatData.__class__._TYPE_SUPPORT is None:
                PowerHeatData.__class__.__import_type_support__()

            from tide_msgs.msg import RFIDStatus
            if RFIDStatus.__class__._TYPE_SUPPORT is None:
                RFIDStatus.__class__.__import_type_support__()

            from tide_msgs.msg import RefereeWarning
            if RefereeWarning.__class__._TYPE_SUPPORT is None:
                RefereeWarning.__class__.__import_type_support__()

            from tide_msgs.msg import RobotHurt
            if RobotHurt.__class__._TYPE_SUPPORT is None:
                RobotHurt.__class__.__import_type_support__()

            from tide_msgs.msg import SentryInfo
            if SentryInfo.__class__._TYPE_SUPPORT is None:
                SentryInfo.__class__.__import_type_support__()

            from tide_msgs.msg import ShootData
            if ShootData.__class__._TYPE_SUPPORT is None:
                ShootData.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RefereeData(metaclass=Metaclass_RefereeData):
    """Message class 'RefereeData'."""

    __slots__ = [
        '_gamestatus',
        '_gameresult',
        '_gamerobothp',
        '_eventdata',
        '_refereewarning',
        '_gamerobotstatus',
        '_powerheatdata',
        '_gamerobotpos',
        '_buff',
        '_robothurt',
        '_shootdata',
        '_bulletremaining',
        '_rfidstatus',
        '_groundrobotpos',
        '_sentryinfo',
        '_interactid',
    ]

    _fields_and_field_types = {
        'gamestatus': 'tide_msgs/GameStatus',
        'gameresult': 'tide_msgs/GameResult',
        'gamerobothp': 'tide_msgs/GameRobotHP',
        'eventdata': 'tide_msgs/EventData',
        'refereewarning': 'tide_msgs/RefereeWarning',
        'gamerobotstatus': 'tide_msgs/GameRobotStatus',
        'powerheatdata': 'tide_msgs/PowerHeatData',
        'gamerobotpos': 'tide_msgs/GameRobotPos',
        'buff': 'tide_msgs/Buff',
        'robothurt': 'tide_msgs/RobotHurt',
        'shootdata': 'tide_msgs/ShootData',
        'bulletremaining': 'tide_msgs/BulletRemaining',
        'rfidstatus': 'tide_msgs/RFIDStatus',
        'groundrobotpos': 'tide_msgs/GroundRobot',
        'sentryinfo': 'tide_msgs/SentryInfo',
        'interactid': 'tide_msgs/InteractID',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['tide_msgs', 'msg'], 'GameStatus'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['tide_msgs', 'msg'], 'GameResult'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['tide_msgs', 'msg'], 'GameRobotHP'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['tide_msgs', 'msg'], 'EventData'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['tide_msgs', 'msg'], 'RefereeWarning'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['tide_msgs', 'msg'], 'GameRobotStatus'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['tide_msgs', 'msg'], 'PowerHeatData'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['tide_msgs', 'msg'], 'GameRobotPos'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['tide_msgs', 'msg'], 'Buff'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['tide_msgs', 'msg'], 'RobotHurt'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['tide_msgs', 'msg'], 'ShootData'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['tide_msgs', 'msg'], 'BulletRemaining'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['tide_msgs', 'msg'], 'RFIDStatus'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['tide_msgs', 'msg'], 'GroundRobot'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['tide_msgs', 'msg'], 'SentryInfo'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['tide_msgs', 'msg'], 'InteractID'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from tide_msgs.msg import GameStatus
        self.gamestatus = kwargs.get('gamestatus', GameStatus())
        from tide_msgs.msg import GameResult
        self.gameresult = kwargs.get('gameresult', GameResult())
        from tide_msgs.msg import GameRobotHP
        self.gamerobothp = kwargs.get('gamerobothp', GameRobotHP())
        from tide_msgs.msg import EventData
        self.eventdata = kwargs.get('eventdata', EventData())
        from tide_msgs.msg import RefereeWarning
        self.refereewarning = kwargs.get('refereewarning', RefereeWarning())
        from tide_msgs.msg import GameRobotStatus
        self.gamerobotstatus = kwargs.get('gamerobotstatus', GameRobotStatus())
        from tide_msgs.msg import PowerHeatData
        self.powerheatdata = kwargs.get('powerheatdata', PowerHeatData())
        from tide_msgs.msg import GameRobotPos
        self.gamerobotpos = kwargs.get('gamerobotpos', GameRobotPos())
        from tide_msgs.msg import Buff
        self.buff = kwargs.get('buff', Buff())
        from tide_msgs.msg import RobotHurt
        self.robothurt = kwargs.get('robothurt', RobotHurt())
        from tide_msgs.msg import ShootData
        self.shootdata = kwargs.get('shootdata', ShootData())
        from tide_msgs.msg import BulletRemaining
        self.bulletremaining = kwargs.get('bulletremaining', BulletRemaining())
        from tide_msgs.msg import RFIDStatus
        self.rfidstatus = kwargs.get('rfidstatus', RFIDStatus())
        from tide_msgs.msg import GroundRobot
        self.groundrobotpos = kwargs.get('groundrobotpos', GroundRobot())
        from tide_msgs.msg import SentryInfo
        self.sentryinfo = kwargs.get('sentryinfo', SentryInfo())
        from tide_msgs.msg import InteractID
        self.interactid = kwargs.get('interactid', InteractID())

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
        if self.gamestatus != other.gamestatus:
            return False
        if self.gameresult != other.gameresult:
            return False
        if self.gamerobothp != other.gamerobothp:
            return False
        if self.eventdata != other.eventdata:
            return False
        if self.refereewarning != other.refereewarning:
            return False
        if self.gamerobotstatus != other.gamerobotstatus:
            return False
        if self.powerheatdata != other.powerheatdata:
            return False
        if self.gamerobotpos != other.gamerobotpos:
            return False
        if self.buff != other.buff:
            return False
        if self.robothurt != other.robothurt:
            return False
        if self.shootdata != other.shootdata:
            return False
        if self.bulletremaining != other.bulletremaining:
            return False
        if self.rfidstatus != other.rfidstatus:
            return False
        if self.groundrobotpos != other.groundrobotpos:
            return False
        if self.sentryinfo != other.sentryinfo:
            return False
        if self.interactid != other.interactid:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def gamestatus(self):
        """Message field 'gamestatus'."""
        return self._gamestatus

    @gamestatus.setter
    def gamestatus(self, value):
        if __debug__:
            from tide_msgs.msg import GameStatus
            assert \
                isinstance(value, GameStatus), \
                "The 'gamestatus' field must be a sub message of type 'GameStatus'"
        self._gamestatus = value

    @builtins.property
    def gameresult(self):
        """Message field 'gameresult'."""
        return self._gameresult

    @gameresult.setter
    def gameresult(self, value):
        if __debug__:
            from tide_msgs.msg import GameResult
            assert \
                isinstance(value, GameResult), \
                "The 'gameresult' field must be a sub message of type 'GameResult'"
        self._gameresult = value

    @builtins.property
    def gamerobothp(self):
        """Message field 'gamerobothp'."""
        return self._gamerobothp

    @gamerobothp.setter
    def gamerobothp(self, value):
        if __debug__:
            from tide_msgs.msg import GameRobotHP
            assert \
                isinstance(value, GameRobotHP), \
                "The 'gamerobothp' field must be a sub message of type 'GameRobotHP'"
        self._gamerobothp = value

    @builtins.property
    def eventdata(self):
        """Message field 'eventdata'."""
        return self._eventdata

    @eventdata.setter
    def eventdata(self, value):
        if __debug__:
            from tide_msgs.msg import EventData
            assert \
                isinstance(value, EventData), \
                "The 'eventdata' field must be a sub message of type 'EventData'"
        self._eventdata = value

    @builtins.property
    def refereewarning(self):
        """Message field 'refereewarning'."""
        return self._refereewarning

    @refereewarning.setter
    def refereewarning(self, value):
        if __debug__:
            from tide_msgs.msg import RefereeWarning
            assert \
                isinstance(value, RefereeWarning), \
                "The 'refereewarning' field must be a sub message of type 'RefereeWarning'"
        self._refereewarning = value

    @builtins.property
    def gamerobotstatus(self):
        """Message field 'gamerobotstatus'."""
        return self._gamerobotstatus

    @gamerobotstatus.setter
    def gamerobotstatus(self, value):
        if __debug__:
            from tide_msgs.msg import GameRobotStatus
            assert \
                isinstance(value, GameRobotStatus), \
                "The 'gamerobotstatus' field must be a sub message of type 'GameRobotStatus'"
        self._gamerobotstatus = value

    @builtins.property
    def powerheatdata(self):
        """Message field 'powerheatdata'."""
        return self._powerheatdata

    @powerheatdata.setter
    def powerheatdata(self, value):
        if __debug__:
            from tide_msgs.msg import PowerHeatData
            assert \
                isinstance(value, PowerHeatData), \
                "The 'powerheatdata' field must be a sub message of type 'PowerHeatData'"
        self._powerheatdata = value

    @builtins.property
    def gamerobotpos(self):
        """Message field 'gamerobotpos'."""
        return self._gamerobotpos

    @gamerobotpos.setter
    def gamerobotpos(self, value):
        if __debug__:
            from tide_msgs.msg import GameRobotPos
            assert \
                isinstance(value, GameRobotPos), \
                "The 'gamerobotpos' field must be a sub message of type 'GameRobotPos'"
        self._gamerobotpos = value

    @builtins.property
    def buff(self):
        """Message field 'buff'."""
        return self._buff

    @buff.setter
    def buff(self, value):
        if __debug__:
            from tide_msgs.msg import Buff
            assert \
                isinstance(value, Buff), \
                "The 'buff' field must be a sub message of type 'Buff'"
        self._buff = value

    @builtins.property
    def robothurt(self):
        """Message field 'robothurt'."""
        return self._robothurt

    @robothurt.setter
    def robothurt(self, value):
        if __debug__:
            from tide_msgs.msg import RobotHurt
            assert \
                isinstance(value, RobotHurt), \
                "The 'robothurt' field must be a sub message of type 'RobotHurt'"
        self._robothurt = value

    @builtins.property
    def shootdata(self):
        """Message field 'shootdata'."""
        return self._shootdata

    @shootdata.setter
    def shootdata(self, value):
        if __debug__:
            from tide_msgs.msg import ShootData
            assert \
                isinstance(value, ShootData), \
                "The 'shootdata' field must be a sub message of type 'ShootData'"
        self._shootdata = value

    @builtins.property
    def bulletremaining(self):
        """Message field 'bulletremaining'."""
        return self._bulletremaining

    @bulletremaining.setter
    def bulletremaining(self, value):
        if __debug__:
            from tide_msgs.msg import BulletRemaining
            assert \
                isinstance(value, BulletRemaining), \
                "The 'bulletremaining' field must be a sub message of type 'BulletRemaining'"
        self._bulletremaining = value

    @builtins.property
    def rfidstatus(self):
        """Message field 'rfidstatus'."""
        return self._rfidstatus

    @rfidstatus.setter
    def rfidstatus(self, value):
        if __debug__:
            from tide_msgs.msg import RFIDStatus
            assert \
                isinstance(value, RFIDStatus), \
                "The 'rfidstatus' field must be a sub message of type 'RFIDStatus'"
        self._rfidstatus = value

    @builtins.property
    def groundrobotpos(self):
        """Message field 'groundrobotpos'."""
        return self._groundrobotpos

    @groundrobotpos.setter
    def groundrobotpos(self, value):
        if __debug__:
            from tide_msgs.msg import GroundRobot
            assert \
                isinstance(value, GroundRobot), \
                "The 'groundrobotpos' field must be a sub message of type 'GroundRobot'"
        self._groundrobotpos = value

    @builtins.property
    def sentryinfo(self):
        """Message field 'sentryinfo'."""
        return self._sentryinfo

    @sentryinfo.setter
    def sentryinfo(self, value):
        if __debug__:
            from tide_msgs.msg import SentryInfo
            assert \
                isinstance(value, SentryInfo), \
                "The 'sentryinfo' field must be a sub message of type 'SentryInfo'"
        self._sentryinfo = value

    @builtins.property
    def interactid(self):
        """Message field 'interactid'."""
        return self._interactid

    @interactid.setter
    def interactid(self, value):
        if __debug__:
            from tide_msgs.msg import InteractID
            assert \
                isinstance(value, InteractID), \
                "The 'interactid' field must be a sub message of type 'InteractID'"
        self._interactid = value
