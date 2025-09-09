// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from tide_msgs:msg/GameRobotHP.idl
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
#include "tide_msgs/msg/detail/game_robot_hp__struct.h"
#include "tide_msgs/msg/detail/game_robot_hp__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool tide_msgs__msg__game_robot_hp__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[41];
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
    assert(strncmp("tide_msgs.msg._game_robot_hp.GameRobotHP", full_classname_dest, 40) == 0);
  }
  tide_msgs__msg__GameRobotHP * ros_message = _ros_message;
  {  // red1robot_hp
    PyObject * field = PyObject_GetAttrString(_pymsg, "red1robot_hp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->red1robot_hp = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // red2robot_hp
    PyObject * field = PyObject_GetAttrString(_pymsg, "red2robot_hp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->red2robot_hp = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // red3robot_hp
    PyObject * field = PyObject_GetAttrString(_pymsg, "red3robot_hp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->red3robot_hp = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // red4robot_hp
    PyObject * field = PyObject_GetAttrString(_pymsg, "red4robot_hp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->red4robot_hp = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // reserved1
    PyObject * field = PyObject_GetAttrString(_pymsg, "reserved1");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->reserved1 = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // red7robot_hp
    PyObject * field = PyObject_GetAttrString(_pymsg, "red7robot_hp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->red7robot_hp = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // redoutpost_hp
    PyObject * field = PyObject_GetAttrString(_pymsg, "redoutpost_hp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->redoutpost_hp = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // redbase_hp
    PyObject * field = PyObject_GetAttrString(_pymsg, "redbase_hp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->redbase_hp = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // blue1robot_hp
    PyObject * field = PyObject_GetAttrString(_pymsg, "blue1robot_hp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->blue1robot_hp = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // blue2robot_hp
    PyObject * field = PyObject_GetAttrString(_pymsg, "blue2robot_hp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->blue2robot_hp = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // blue3robot_hp
    PyObject * field = PyObject_GetAttrString(_pymsg, "blue3robot_hp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->blue3robot_hp = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // blue4robot_hp
    PyObject * field = PyObject_GetAttrString(_pymsg, "blue4robot_hp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->blue4robot_hp = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // reserved2
    PyObject * field = PyObject_GetAttrString(_pymsg, "reserved2");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->reserved2 = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // blue7robot_hp
    PyObject * field = PyObject_GetAttrString(_pymsg, "blue7robot_hp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->blue7robot_hp = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // blueoutpost_hp
    PyObject * field = PyObject_GetAttrString(_pymsg, "blueoutpost_hp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->blueoutpost_hp = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // bluebase_hp
    PyObject * field = PyObject_GetAttrString(_pymsg, "bluebase_hp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->bluebase_hp = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * tide_msgs__msg__game_robot_hp__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of GameRobotHP */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("tide_msgs.msg._game_robot_hp");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "GameRobotHP");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  tide_msgs__msg__GameRobotHP * ros_message = (tide_msgs__msg__GameRobotHP *)raw_ros_message;
  {  // red1robot_hp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->red1robot_hp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "red1robot_hp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // red2robot_hp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->red2robot_hp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "red2robot_hp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // red3robot_hp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->red3robot_hp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "red3robot_hp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // red4robot_hp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->red4robot_hp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "red4robot_hp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // reserved1
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->reserved1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "reserved1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // red7robot_hp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->red7robot_hp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "red7robot_hp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // redoutpost_hp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->redoutpost_hp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "redoutpost_hp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // redbase_hp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->redbase_hp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "redbase_hp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // blue1robot_hp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->blue1robot_hp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "blue1robot_hp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // blue2robot_hp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->blue2robot_hp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "blue2robot_hp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // blue3robot_hp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->blue3robot_hp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "blue3robot_hp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // blue4robot_hp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->blue4robot_hp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "blue4robot_hp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // reserved2
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->reserved2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "reserved2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // blue7robot_hp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->blue7robot_hp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "blue7robot_hp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // blueoutpost_hp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->blueoutpost_hp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "blueoutpost_hp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bluebase_hp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->bluebase_hp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bluebase_hp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
