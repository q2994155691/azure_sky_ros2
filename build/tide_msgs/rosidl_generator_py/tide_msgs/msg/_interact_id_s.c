// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from tide_msgs:msg/InteractID.idl
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
#include "tide_msgs/msg/detail/interact_id__struct.h"
#include "tide_msgs/msg/detail/interact_id__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool tide_msgs__msg__interact_id__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("tide_msgs.msg._interact_id.InteractID", full_classname_dest, 37) == 0);
  }
  tide_msgs__msg__InteractID * ros_message = _ros_message;
  {  // teammate_hero
    PyObject * field = PyObject_GetAttrString(_pymsg, "teammate_hero");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->teammate_hero = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // teammate_infantry3
    PyObject * field = PyObject_GetAttrString(_pymsg, "teammate_infantry3");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->teammate_infantry3 = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // teammate_infantry4
    PyObject * field = PyObject_GetAttrString(_pymsg, "teammate_infantry4");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->teammate_infantry4 = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // teammate_infantry5
    PyObject * field = PyObject_GetAttrString(_pymsg, "teammate_infantry5");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->teammate_infantry5 = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // teammate_sentry
    PyObject * field = PyObject_GetAttrString(_pymsg, "teammate_sentry");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->teammate_sentry = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // client_hero
    PyObject * field = PyObject_GetAttrString(_pymsg, "client_hero");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->client_hero = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // client_infantry3
    PyObject * field = PyObject_GetAttrString(_pymsg, "client_infantry3");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->client_infantry3 = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // client_infantry4
    PyObject * field = PyObject_GetAttrString(_pymsg, "client_infantry4");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->client_infantry4 = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // client_infantry5
    PyObject * field = PyObject_GetAttrString(_pymsg, "client_infantry5");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->client_infantry5 = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * tide_msgs__msg__interact_id__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of InteractID */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("tide_msgs.msg._interact_id");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "InteractID");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  tide_msgs__msg__InteractID * ros_message = (tide_msgs__msg__InteractID *)raw_ros_message;
  {  // teammate_hero
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->teammate_hero);
    {
      int rc = PyObject_SetAttrString(_pymessage, "teammate_hero", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // teammate_infantry3
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->teammate_infantry3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "teammate_infantry3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // teammate_infantry4
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->teammate_infantry4);
    {
      int rc = PyObject_SetAttrString(_pymessage, "teammate_infantry4", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // teammate_infantry5
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->teammate_infantry5);
    {
      int rc = PyObject_SetAttrString(_pymessage, "teammate_infantry5", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // teammate_sentry
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->teammate_sentry);
    {
      int rc = PyObject_SetAttrString(_pymessage, "teammate_sentry", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // client_hero
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->client_hero);
    {
      int rc = PyObject_SetAttrString(_pymessage, "client_hero", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // client_infantry3
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->client_infantry3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "client_infantry3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // client_infantry4
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->client_infantry4);
    {
      int rc = PyObject_SetAttrString(_pymessage, "client_infantry4", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // client_infantry5
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->client_infantry5);
    {
      int rc = PyObject_SetAttrString(_pymessage, "client_infantry5", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
