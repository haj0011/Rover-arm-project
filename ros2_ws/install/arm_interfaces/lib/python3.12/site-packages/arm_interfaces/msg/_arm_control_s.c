// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from arm_interfaces:msg/ArmControl.idl
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
#include "arm_interfaces/msg/detail/arm_control__struct.h"
#include "arm_interfaces/msg/detail/arm_control__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool arm_interfaces__msg__arm_control__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[43];
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
    assert(strncmp("arm_interfaces.msg._arm_control.ArmControl", full_classname_dest, 42) == 0);
  }
  arm_interfaces__msg__ArmControl * ros_message = _ros_message;
  {  // axis_0
    PyObject * field = PyObject_GetAttrString(_pymsg, "axis_0");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->axis_0 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // axis_1
    PyObject * field = PyObject_GetAttrString(_pymsg, "axis_1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->axis_1 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // axis_2
    PyObject * field = PyObject_GetAttrString(_pymsg, "axis_2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->axis_2 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // axis_3
    PyObject * field = PyObject_GetAttrString(_pymsg, "axis_3");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->axis_3 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // claw
    PyObject * field = PyObject_GetAttrString(_pymsg, "claw");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->claw = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * arm_interfaces__msg__arm_control__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ArmControl */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("arm_interfaces.msg._arm_control");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ArmControl");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  arm_interfaces__msg__ArmControl * ros_message = (arm_interfaces__msg__ArmControl *)raw_ros_message;
  {  // axis_0
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->axis_0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "axis_0", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // axis_1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->axis_1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "axis_1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // axis_2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->axis_2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "axis_2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // axis_3
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->axis_3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "axis_3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // claw
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->claw);
    {
      int rc = PyObject_SetAttrString(_pymessage, "claw", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
