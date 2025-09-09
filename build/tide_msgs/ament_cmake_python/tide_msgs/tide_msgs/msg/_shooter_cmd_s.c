// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from tide_msgs:msg/ShooterCmd.idl
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
#include "tide_msgs/msg/detail/shooter_cmd__struct.h"
#include "tide_msgs/msg/detail/shooter_cmd__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool tide_msgs__msg__shooter_cmd__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[38];
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
    assert(strncmp("tide_msgs.msg._shooter_cmd.ShooterCmd", full_classname_dest, 37) == 0);
  }
  tide_msgs__msg__ShooterCmd * ros_message = _ros_message;
  {  // mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "mode");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mode = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // bullet_velocity
    PyObject * field = PyObject_GetAttrString(_pymsg, "bullet_velocity");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->bullet_velocity = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // shooting_freq
    PyObject * field = PyObject_GetAttrString(_pymsg, "shooting_freq");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->shooting_freq = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * tide_msgs__msg__shooter_cmd__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ShooterCmd */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("tide_msgs.msg._shooter_cmd");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ShooterCmd");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  tide_msgs__msg__ShooterCmd * ros_message = (tide_msgs__msg__ShooterCmd *)raw_ros_message;
  {  // mode
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->mode);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bullet_velocity
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->bullet_velocity);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bullet_velocity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // shooting_freq
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->shooting_freq);
    {
      int rc = PyObject_SetAttrString(_pymessage, "shooting_freq", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
