// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from tide_msgs:msg/RefereeData.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "tide_msgs/msg/detail/referee_data__struct.h"
#include "tide_msgs/msg/detail/referee_data__functions.h"

bool tide_msgs__msg__game_status__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * tide_msgs__msg__game_status__convert_to_py(void * raw_ros_message);
bool tide_msgs__msg__game_result__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * tide_msgs__msg__game_result__convert_to_py(void * raw_ros_message);
bool tide_msgs__msg__game_robot_hp__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * tide_msgs__msg__game_robot_hp__convert_to_py(void * raw_ros_message);
bool tide_msgs__msg__event_data__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * tide_msgs__msg__event_data__convert_to_py(void * raw_ros_message);
bool tide_msgs__msg__referee_warning__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * tide_msgs__msg__referee_warning__convert_to_py(void * raw_ros_message);
bool tide_msgs__msg__game_robot_status__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * tide_msgs__msg__game_robot_status__convert_to_py(void * raw_ros_message);
bool tide_msgs__msg__power_heat_data__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * tide_msgs__msg__power_heat_data__convert_to_py(void * raw_ros_message);
bool tide_msgs__msg__game_robot_pos__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * tide_msgs__msg__game_robot_pos__convert_to_py(void * raw_ros_message);
bool tide_msgs__msg__buff__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * tide_msgs__msg__buff__convert_to_py(void * raw_ros_message);
bool tide_msgs__msg__robot_hurt__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * tide_msgs__msg__robot_hurt__convert_to_py(void * raw_ros_message);
bool tide_msgs__msg__shoot_data__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * tide_msgs__msg__shoot_data__convert_to_py(void * raw_ros_message);
bool tide_msgs__msg__bullet_remaining__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * tide_msgs__msg__bullet_remaining__convert_to_py(void * raw_ros_message);
bool tide_msgs__msg__rfid_status__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * tide_msgs__msg__rfid_status__convert_to_py(void * raw_ros_message);
bool tide_msgs__msg__ground_robot__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * tide_msgs__msg__ground_robot__convert_to_py(void * raw_ros_message);
bool tide_msgs__msg__sentry_info__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * tide_msgs__msg__sentry_info__convert_to_py(void * raw_ros_message);
bool tide_msgs__msg__interact_id__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * tide_msgs__msg__interact_id__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool tide_msgs__msg__referee_data__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[40];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("tide_msgs.msg._referee_data.RefereeData", full_classname_dest, 39) == 0);
  }
  tide_msgs__msg__RefereeData * ros_message = _ros_message;
  {  // gamestatus
    PyObject * field = PyObject_GetAttrString(_pymsg, "gamestatus");
    if (!field) {
      return false;
    }
    if (!tide_msgs__msg__game_status__convert_from_py(field, &ros_message->gamestatus)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // gameresult
    PyObject * field = PyObject_GetAttrString(_pymsg, "gameresult");
    if (!field) {
      return false;
    }
    if (!tide_msgs__msg__game_result__convert_from_py(field, &ros_message->gameresult)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // gamerobothp
    PyObject * field = PyObject_GetAttrString(_pymsg, "gamerobothp");
    if (!field) {
      return false;
    }
    if (!tide_msgs__msg__game_robot_hp__convert_from_py(field, &ros_message->gamerobothp)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // eventdata
    PyObject * field = PyObject_GetAttrString(_pymsg, "eventdata");
    if (!field) {
      return false;
    }
    if (!tide_msgs__msg__event_data__convert_from_py(field, &ros_message->eventdata)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // refereewarning
    PyObject * field = PyObject_GetAttrString(_pymsg, "refereewarning");
    if (!field) {
      return false;
    }
    if (!tide_msgs__msg__referee_warning__convert_from_py(field, &ros_message->refereewarning)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // gamerobotstatus
    PyObject * field = PyObject_GetAttrString(_pymsg, "gamerobotstatus");
    if (!field) {
      return false;
    }
    if (!tide_msgs__msg__game_robot_status__convert_from_py(field, &ros_message->gamerobotstatus)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // powerheatdata
    PyObject * field = PyObject_GetAttrString(_pymsg, "powerheatdata");
    if (!field) {
      return false;
    }
    if (!tide_msgs__msg__power_heat_data__convert_from_py(field, &ros_message->powerheatdata)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // gamerobotpos
    PyObject * field = PyObject_GetAttrString(_pymsg, "gamerobotpos");
    if (!field) {
      return false;
    }
    if (!tide_msgs__msg__game_robot_pos__convert_from_py(field, &ros_message->gamerobotpos)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // buff
    PyObject * field = PyObject_GetAttrString(_pymsg, "buff");
    if (!field) {
      return false;
    }
    if (!tide_msgs__msg__buff__convert_from_py(field, &ros_message->buff)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // robothurt
    PyObject * field = PyObject_GetAttrString(_pymsg, "robothurt");
    if (!field) {
      return false;
    }
    if (!tide_msgs__msg__robot_hurt__convert_from_py(field, &ros_message->robothurt)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // shootdata
    PyObject * field = PyObject_GetAttrString(_pymsg, "shootdata");
    if (!field) {
      return false;
    }
    if (!tide_msgs__msg__shoot_data__convert_from_py(field, &ros_message->shootdata)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // bulletremaining
    PyObject * field = PyObject_GetAttrString(_pymsg, "bulletremaining");
    if (!field) {
      return false;
    }
    if (!tide_msgs__msg__bullet_remaining__convert_from_py(field, &ros_message->bulletremaining)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // rfidstatus
    PyObject * field = PyObject_GetAttrString(_pymsg, "rfidstatus");
    if (!field) {
      return false;
    }
    if (!tide_msgs__msg__rfid_status__convert_from_py(field, &ros_message->rfidstatus)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // groundrobotpos
    PyObject * field = PyObject_GetAttrString(_pymsg, "groundrobotpos");
    if (!field) {
      return false;
    }
    if (!tide_msgs__msg__ground_robot__convert_from_py(field, &ros_message->groundrobotpos)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // sentryinfo
    PyObject * field = PyObject_GetAttrString(_pymsg, "sentryinfo");
    if (!field) {
      return false;
    }
    if (!tide_msgs__msg__sentry_info__convert_from_py(field, &ros_message->sentryinfo)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // interactid
    PyObject * field = PyObject_GetAttrString(_pymsg, "interactid");
    if (!field) {
      return false;
    }
    if (!tide_msgs__msg__interact_id__convert_from_py(field, &ros_message->interactid)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * tide_msgs__msg__referee_data__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of RefereeData */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("tide_msgs.msg._referee_data");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "RefereeData");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  tide_msgs__msg__RefereeData * ros_message = (tide_msgs__msg__RefereeData *)raw_ros_message;
  {  // gamestatus
    PyObject * field = NULL;
    field = tide_msgs__msg__game_status__convert_to_py(&ros_message->gamestatus);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "gamestatus", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gameresult
    PyObject * field = NULL;
    field = tide_msgs__msg__game_result__convert_to_py(&ros_message->gameresult);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "gameresult", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gamerobothp
    PyObject * field = NULL;
    field = tide_msgs__msg__game_robot_hp__convert_to_py(&ros_message->gamerobothp);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "gamerobothp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // eventdata
    PyObject * field = NULL;
    field = tide_msgs__msg__event_data__convert_to_py(&ros_message->eventdata);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "eventdata", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // refereewarning
    PyObject * field = NULL;
    field = tide_msgs__msg__referee_warning__convert_to_py(&ros_message->refereewarning);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "refereewarning", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gamerobotstatus
    PyObject * field = NULL;
    field = tide_msgs__msg__game_robot_status__convert_to_py(&ros_message->gamerobotstatus);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "gamerobotstatus", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // powerheatdata
    PyObject * field = NULL;
    field = tide_msgs__msg__power_heat_data__convert_to_py(&ros_message->powerheatdata);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "powerheatdata", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gamerobotpos
    PyObject * field = NULL;
    field = tide_msgs__msg__game_robot_pos__convert_to_py(&ros_message->gamerobotpos);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "gamerobotpos", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // buff
    PyObject * field = NULL;
    field = tide_msgs__msg__buff__convert_to_py(&ros_message->buff);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "buff", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // robothurt
    PyObject * field = NULL;
    field = tide_msgs__msg__robot_hurt__convert_to_py(&ros_message->robothurt);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "robothurt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // shootdata
    PyObject * field = NULL;
    field = tide_msgs__msg__shoot_data__convert_to_py(&ros_message->shootdata);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "shootdata", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bulletremaining
    PyObject * field = NULL;
    field = tide_msgs__msg__bullet_remaining__convert_to_py(&ros_message->bulletremaining);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "bulletremaining", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rfidstatus
    PyObject * field = NULL;
    field = tide_msgs__msg__rfid_status__convert_to_py(&ros_message->rfidstatus);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "rfidstatus", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // groundrobotpos
    PyObject * field = NULL;
    field = tide_msgs__msg__ground_robot__convert_to_py(&ros_message->groundrobotpos);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "groundrobotpos", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sentryinfo
    PyObject * field = NULL;
    field = tide_msgs__msg__sentry_info__convert_to_py(&ros_message->sentryinfo);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "sentryinfo", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // interactid
    PyObject * field = NULL;
    field = tide_msgs__msg__interact_id__convert_to_py(&ros_message->interactid);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "interactid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
