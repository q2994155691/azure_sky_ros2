// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from tide_msgs:msg/PowerHeatData.idl
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
#include "tide_msgs/msg/detail/power_heat_data__struct.h"
#include "tide_msgs/msg/detail/power_heat_data__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool tide_msgs__msg__power_heat_data__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[45];
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
    assert(strncmp("tide_msgs.msg._power_heat_data.PowerHeatData", full_classname_dest, 44) == 0);
  }
  tide_msgs__msg__PowerHeatData * ros_message = _ros_message;
  {  // reserved1
    PyObject * field = PyObject_GetAttrString(_pymsg, "reserved1");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->reserved1 = (uint16_t)PyLong_AsUnsignedLong(field);
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
  {  // reserved3
    PyObject * field = PyObject_GetAttrString(_pymsg, "reserved3");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->reserved3 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // buffer_energy
    PyObject * field = PyObject_GetAttrString(_pymsg, "buffer_energy");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->buffer_energy = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // shooter_id1_17mm_cooling_heat
    PyObject * field = PyObject_GetAttrString(_pymsg, "shooter_id1_17mm_cooling_heat");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->shooter_id1_17mm_cooling_heat = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // shooter_id2_17mm_cooling_heat
    PyObject * field = PyObject_GetAttrString(_pymsg, "shooter_id2_17mm_cooling_heat");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->shooter_id2_17mm_cooling_heat = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // shooter_id1_42mm_cooling_heat
    PyObject * field = PyObject_GetAttrString(_pymsg, "shooter_id1_42mm_cooling_heat");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->shooter_id1_42mm_cooling_heat = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * tide_msgs__msg__power_heat_data__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of PowerHeatData */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("tide_msgs.msg._power_heat_data");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "PowerHeatData");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  tide_msgs__msg__PowerHeatData * ros_message = (tide_msgs__msg__PowerHeatData *)raw_ros_message;
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
  {  // reserved3
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->reserved3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "reserved3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // buffer_energy
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->buffer_energy);
    {
      int rc = PyObject_SetAttrString(_pymessage, "buffer_energy", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // shooter_id1_17mm_cooling_heat
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->shooter_id1_17mm_cooling_heat);
    {
      int rc = PyObject_SetAttrString(_pymessage, "shooter_id1_17mm_cooling_heat", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // shooter_id2_17mm_cooling_heat
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->shooter_id2_17mm_cooling_heat);
    {
      int rc = PyObject_SetAttrString(_pymessage, "shooter_id2_17mm_cooling_heat", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // shooter_id1_42mm_cooling_heat
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->shooter_id1_42mm_cooling_heat);
    {
      int rc = PyObject_SetAttrString(_pymessage, "shooter_id1_42mm_cooling_heat", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
