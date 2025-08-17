// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from tide_msgs:msg/Buff.idl
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
#include "tide_msgs/msg/detail/buff__struct.h"
#include "tide_msgs/msg/detail/buff__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool tide_msgs__msg__buff__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[25];
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
    assert(strncmp("tide_msgs.msg._buff.Buff", full_classname_dest, 24) == 0);
  }
  tide_msgs__msg__Buff * ros_message = _ros_message;
  {  // recovery_buff
    PyObject * field = PyObject_GetAttrString(_pymsg, "recovery_buff");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->recovery_buff = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // cooling_buff
    PyObject * field = PyObject_GetAttrString(_pymsg, "cooling_buff");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->cooling_buff = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // defence_buff
    PyObject * field = PyObject_GetAttrString(_pymsg, "defence_buff");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->defence_buff = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // vulnerability_buff
    PyObject * field = PyObject_GetAttrString(_pymsg, "vulnerability_buff");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->vulnerability_buff = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // attack_buff
    PyObject * field = PyObject_GetAttrString(_pymsg, "attack_buff");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->attack_buff = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // remaining_energy
    PyObject * field = PyObject_GetAttrString(_pymsg, "remaining_energy");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->remaining_energy = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * tide_msgs__msg__buff__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Buff */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("tide_msgs.msg._buff");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Buff");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  tide_msgs__msg__Buff * ros_message = (tide_msgs__msg__Buff *)raw_ros_message;
  {  // recovery_buff
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->recovery_buff);
    {
      int rc = PyObject_SetAttrString(_pymessage, "recovery_buff", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cooling_buff
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->cooling_buff);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cooling_buff", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // defence_buff
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->defence_buff);
    {
      int rc = PyObject_SetAttrString(_pymessage, "defence_buff", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vulnerability_buff
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->vulnerability_buff);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vulnerability_buff", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // attack_buff
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->attack_buff);
    {
      int rc = PyObject_SetAttrString(_pymessage, "attack_buff", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // remaining_energy
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->remaining_energy);
    {
      int rc = PyObject_SetAttrString(_pymessage, "remaining_energy", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
