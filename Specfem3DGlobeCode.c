/* Generated by Pyrex 0.9.3 on Thu Feb  2 10:59:44 2006 */

#include "Python.h"
#include "structmember.h"
#ifndef PY_LONG_LONG
  #define PY_LONG_LONG LONG_LONG
#endif
#include "config.h"
#include "string.h"


typedef struct {PyObject **p; char *s;} __Pyx_InternTabEntry; /*proto*/
typedef struct {PyObject **p; char *s; long n;} __Pyx_StringTabEntry; /*proto*/
static PyObject *__Pyx_UnpackItem(PyObject *, int); /*proto*/
static int __Pyx_EndUnpack(PyObject *, int); /*proto*/
static int __Pyx_PrintItem(PyObject *); /*proto*/
static int __Pyx_PrintNewline(void); /*proto*/
static void __Pyx_Raise(PyObject *type, PyObject *value, PyObject *tb); /*proto*/
static void __Pyx_ReRaise(void); /*proto*/
static PyObject *__Pyx_Import(PyObject *name, PyObject *from_list); /*proto*/
static PyObject *__Pyx_GetExcValue(void); /*proto*/
static int __Pyx_ArgTypeTest(PyObject *obj, PyTypeObject *type, int none_allowed, char *name); /*proto*/
static int __Pyx_TypeTest(PyObject *obj, PyTypeObject *type); /*proto*/
static int __Pyx_GetStarArgs(PyObject **args, PyObject **kwds, char *kwd_list[], int nargs, PyObject **args2, PyObject **kwds2); /*proto*/
static void __Pyx_WriteUnraisable(char *name); /*proto*/
static void __Pyx_AddTraceback(char *funcname); /*proto*/
static PyTypeObject *__Pyx_ImportType(char *module_name, char *class_name, long size);  /*proto*/
static int __Pyx_SetVtable(PyObject *dict, void *vtable); /*proto*/
static int __Pyx_GetVtable(PyObject *dict, void *vtabptr); /*proto*/
static PyObject *__Pyx_CreateClass(PyObject *bases, PyObject *dict, PyObject *name, char *modname); /*proto*/
static int __Pyx_InternStrings(__Pyx_InternTabEntry *t); /*proto*/
static int __Pyx_InitStrings(__Pyx_StringTabEntry *t); /*proto*/
static PyObject *__Pyx_GetName(PyObject *dict, PyObject *name); /*proto*/

static PyObject *__pyx_m;
static PyObject *__pyx_b;
static int __pyx_lineno;
static char *__pyx_filename;
staticforward char **__pyx_f;

static char __pyx_mdoc[] = "Python bindings for the SPECFEM3D Global Solver.";

/* Declarations from Specfem3DGlobeCode */

DL_EXPORT(void) (FC_FUNC_(read_value_integer, READ_VALUE_INTEGER)(int (*),char (*),int )); /*proto*/
DL_EXPORT(void) (FC_FUNC_(read_value_double_precision, READ_VALUE_DOUBLE_PRECISION)(double (*),char (*),int )); /*proto*/
DL_EXPORT(void) (FC_FUNC_(read_value_logical, READ_VALUE_LOGICAL)(int (*),char (*),int )); /*proto*/
DL_EXPORT(void) (FC_FUNC_(read_value_string, READ_VALUE_STRING)(char (*),char (*),int ,int )); /*proto*/
DL_EXPORT(void) (FC_FUNC_(open_parameter_file, OPEN_PARAMETER_FILE)(void)); /*proto*/
DL_EXPORT(void) (FC_FUNC_(close_parameter_file, CLOSE_PARAMETER_FILE)(void)); /*proto*/
DL_EXPORT(void) (FC_FUNC_(get_value_integer, GET_VALUE_INTEGER)(int (*),char (*),int (*),int )); /*proto*/
DL_EXPORT(void) (FC_FUNC_(get_value_double_precision, GET_VALUE_DOUBLE_PRECISION)(double (*),char (*),double (*),int )); /*proto*/
DL_EXPORT(void) (FC_FUNC_(get_value_logical, GET_VALUE_LOGICAL)(int (*),char (*),int (*),int )); /*proto*/
DL_EXPORT(void) (FC_FUNC_(get_value_string, GET_VALUE_STRING)(char (*),char (*),char (*),int ,int ,int )); /*proto*/
void (FC_FUNC(meshfem3d, MESHFEM3D)(void)); /*proto*/
void (FC_FUNC(specfem3d, SPECFEM3D)(void)); /*proto*/

/* Implementation of Specfem3DGlobeCode */

static PyObject *__pyx_n_component;
static PyObject *__pyx_n_meshfem3D;
static PyObject *__pyx_n_specfem3D;

static PyObject *__pyx_n_readValue;

DL_EXPORT(void) FC_FUNC_(read_value_integer, READ_VALUE_INTEGER)(int (*__pyx_v_value),char (*__pyx_v_name),int __pyx_v_nameLen) {
  PyObject *__pyx_v_attrName;
  PyObject *__pyx_1 = 0;
  PyObject *__pyx_2 = 0;
  PyObject *__pyx_3 = 0;
  int __pyx_4;
  __pyx_v_attrName = Py_None; Py_INCREF(__pyx_v_attrName);

  /* "/home/leif/dv/SPECFEM3D_GLOBE/Specfem3DGlobeCode.pyx":28 */
  __pyx_1 = PyString_FromStringAndSize(__pyx_v_name,__pyx_v_nameLen); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 28; goto __pyx_L1;}
  Py_DECREF(__pyx_v_attrName);
  __pyx_v_attrName = __pyx_1;
  __pyx_1 = 0;

  /* "/home/leif/dv/SPECFEM3D_GLOBE/Specfem3DGlobeCode.pyx":29 */
  __pyx_1 = __Pyx_GetName(__pyx_m, __pyx_n_component); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 29; goto __pyx_L1;}
  __pyx_2 = PyObject_GetAttr(__pyx_1, __pyx_n_readValue); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 29; goto __pyx_L1;}
  Py_DECREF(__pyx_1); __pyx_1 = 0;
  __pyx_1 = PyTuple_New(1); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 29; goto __pyx_L1;}
  Py_INCREF(__pyx_v_attrName);
  PyTuple_SET_ITEM(__pyx_1, 0, __pyx_v_attrName);
  __pyx_3 = PyObject_CallObject(__pyx_2, __pyx_1); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 29; goto __pyx_L1;}
  Py_DECREF(__pyx_2); __pyx_2 = 0;
  Py_DECREF(__pyx_1); __pyx_1 = 0;
  __pyx_4 = PyInt_AsLong(__pyx_3); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 29; goto __pyx_L1;}
  Py_DECREF(__pyx_3); __pyx_3 = 0;
  (__pyx_v_value[0]) = __pyx_4;

  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_1);
  Py_XDECREF(__pyx_2);
  Py_XDECREF(__pyx_3);
  __Pyx_AddTraceback("Specfem3DGlobeCode.read_value_integer");
  __pyx_L0:;
  Py_DECREF(__pyx_v_attrName);
}

DL_EXPORT(void) FC_FUNC_(read_value_double_precision, READ_VALUE_DOUBLE_PRECISION)(double (*__pyx_v_value),char (*__pyx_v_name),int __pyx_v_nameLen) {
  PyObject *__pyx_v_attrName;
  PyObject *__pyx_1 = 0;
  PyObject *__pyx_2 = 0;
  PyObject *__pyx_3 = 0;
  double __pyx_4;
  __pyx_v_attrName = Py_None; Py_INCREF(__pyx_v_attrName);

  /* "/home/leif/dv/SPECFEM3D_GLOBE/Specfem3DGlobeCode.pyx":32 */
  __pyx_1 = PyString_FromStringAndSize(__pyx_v_name,__pyx_v_nameLen); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 32; goto __pyx_L1;}
  Py_DECREF(__pyx_v_attrName);
  __pyx_v_attrName = __pyx_1;
  __pyx_1 = 0;

  /* "/home/leif/dv/SPECFEM3D_GLOBE/Specfem3DGlobeCode.pyx":33 */
  __pyx_1 = __Pyx_GetName(__pyx_m, __pyx_n_component); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 33; goto __pyx_L1;}
  __pyx_2 = PyObject_GetAttr(__pyx_1, __pyx_n_readValue); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 33; goto __pyx_L1;}
  Py_DECREF(__pyx_1); __pyx_1 = 0;
  __pyx_1 = PyTuple_New(1); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 33; goto __pyx_L1;}
  Py_INCREF(__pyx_v_attrName);
  PyTuple_SET_ITEM(__pyx_1, 0, __pyx_v_attrName);
  __pyx_3 = PyObject_CallObject(__pyx_2, __pyx_1); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 33; goto __pyx_L1;}
  Py_DECREF(__pyx_2); __pyx_2 = 0;
  Py_DECREF(__pyx_1); __pyx_1 = 0;
  __pyx_4 = PyFloat_AsDouble(__pyx_3); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 33; goto __pyx_L1;}
  Py_DECREF(__pyx_3); __pyx_3 = 0;
  (__pyx_v_value[0]) = __pyx_4;

  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_1);
  Py_XDECREF(__pyx_2);
  Py_XDECREF(__pyx_3);
  __Pyx_AddTraceback("Specfem3DGlobeCode.read_value_double_precision");
  __pyx_L0:;
  Py_DECREF(__pyx_v_attrName);
}

DL_EXPORT(void) FC_FUNC_(read_value_logical, READ_VALUE_LOGICAL)(int (*__pyx_v_value),char (*__pyx_v_name),int __pyx_v_nameLen) {
  PyObject *__pyx_v_attrName;
  PyObject *__pyx_1 = 0;
  PyObject *__pyx_2 = 0;
  PyObject *__pyx_3 = 0;
  int __pyx_4;
  __pyx_v_attrName = Py_None; Py_INCREF(__pyx_v_attrName);

  /* "/home/leif/dv/SPECFEM3D_GLOBE/Specfem3DGlobeCode.pyx":36 */
  __pyx_1 = PyString_FromStringAndSize(__pyx_v_name,__pyx_v_nameLen); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 36; goto __pyx_L1;}
  Py_DECREF(__pyx_v_attrName);
  __pyx_v_attrName = __pyx_1;
  __pyx_1 = 0;

  /* "/home/leif/dv/SPECFEM3D_GLOBE/Specfem3DGlobeCode.pyx":37 */
  __pyx_1 = __Pyx_GetName(__pyx_m, __pyx_n_component); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 37; goto __pyx_L1;}
  __pyx_2 = PyObject_GetAttr(__pyx_1, __pyx_n_readValue); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 37; goto __pyx_L1;}
  Py_DECREF(__pyx_1); __pyx_1 = 0;
  __pyx_1 = PyTuple_New(1); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 37; goto __pyx_L1;}
  Py_INCREF(__pyx_v_attrName);
  PyTuple_SET_ITEM(__pyx_1, 0, __pyx_v_attrName);
  __pyx_3 = PyObject_CallObject(__pyx_2, __pyx_1); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 37; goto __pyx_L1;}
  Py_DECREF(__pyx_2); __pyx_2 = 0;
  Py_DECREF(__pyx_1); __pyx_1 = 0;
  __pyx_4 = PyInt_AsLong(__pyx_3); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 37; goto __pyx_L1;}
  Py_DECREF(__pyx_3); __pyx_3 = 0;
  (__pyx_v_value[0]) = __pyx_4;

  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_1);
  Py_XDECREF(__pyx_2);
  Py_XDECREF(__pyx_3);
  __Pyx_AddTraceback("Specfem3DGlobeCode.read_value_logical");
  __pyx_L0:;
  Py_DECREF(__pyx_v_attrName);
}

static PyObject *__pyx_n_len;
static PyObject *__pyx_n_ValueError;

static PyObject *__pyx_k1p;

static char (__pyx_k1[]) = "%s value '%s' is too long (%d bytes) for destination Fortran buffer (%d bytes)";

DL_EXPORT(void) FC_FUNC_(read_value_string, READ_VALUE_STRING)(char (*__pyx_v_value),char (*__pyx_v_name),int __pyx_v_valueLen,int __pyx_v_nameLen) {
  char (*__pyx_v_vp);
  int __pyx_v_vl;
  int __pyx_v_i;
  PyObject *__pyx_v_attrName;
  PyObject *__pyx_v_v;
  PyObject *__pyx_1 = 0;
  PyObject *__pyx_2 = 0;
  PyObject *__pyx_3 = 0;
  int __pyx_4;
  PyObject *__pyx_5 = 0;
  char (*__pyx_6);
  __pyx_v_attrName = Py_None; Py_INCREF(__pyx_v_attrName);
  __pyx_v_v = Py_None; Py_INCREF(__pyx_v_v);

  /* "/home/leif/dv/SPECFEM3D_GLOBE/Specfem3DGlobeCode.pyx":42 */
  __pyx_1 = PyString_FromStringAndSize(__pyx_v_name,__pyx_v_nameLen); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 42; goto __pyx_L1;}
  Py_DECREF(__pyx_v_attrName);
  __pyx_v_attrName = __pyx_1;
  __pyx_1 = 0;

  /* "/home/leif/dv/SPECFEM3D_GLOBE/Specfem3DGlobeCode.pyx":43 */
  __pyx_1 = __Pyx_GetName(__pyx_m, __pyx_n_component); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 43; goto __pyx_L1;}
  __pyx_2 = PyObject_GetAttr(__pyx_1, __pyx_n_readValue); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 43; goto __pyx_L1;}
  Py_DECREF(__pyx_1); __pyx_1 = 0;
  __pyx_1 = PyTuple_New(1); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 43; goto __pyx_L1;}
  Py_INCREF(__pyx_v_attrName);
  PyTuple_SET_ITEM(__pyx_1, 0, __pyx_v_attrName);
  __pyx_3 = PyObject_CallObject(__pyx_2, __pyx_1); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 43; goto __pyx_L1;}
  Py_DECREF(__pyx_2); __pyx_2 = 0;
  Py_DECREF(__pyx_1); __pyx_1 = 0;
  Py_DECREF(__pyx_v_v);
  __pyx_v_v = __pyx_3;
  __pyx_3 = 0;

  /* "/home/leif/dv/SPECFEM3D_GLOBE/Specfem3DGlobeCode.pyx":44 */
  __pyx_2 = __Pyx_GetName(__pyx_b, __pyx_n_len); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 44; goto __pyx_L1;}
  __pyx_1 = PyTuple_New(1); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 44; goto __pyx_L1;}
  Py_INCREF(__pyx_v_v);
  PyTuple_SET_ITEM(__pyx_1, 0, __pyx_v_v);
  __pyx_3 = PyObject_CallObject(__pyx_2, __pyx_1); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 44; goto __pyx_L1;}
  Py_DECREF(__pyx_2); __pyx_2 = 0;
  Py_DECREF(__pyx_1); __pyx_1 = 0;
  __pyx_4 = PyInt_AsLong(__pyx_3); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 44; goto __pyx_L1;}
  Py_DECREF(__pyx_3); __pyx_3 = 0;
  __pyx_v_vl = __pyx_4;

  /* "/home/leif/dv/SPECFEM3D_GLOBE/Specfem3DGlobeCode.pyx":45 */
  __pyx_4 = (__pyx_v_vl > __pyx_v_valueLen);
  if (__pyx_4) {

    /* "/home/leif/dv/SPECFEM3D_GLOBE/Specfem3DGlobeCode.pyx":46 */
    __pyx_2 = __Pyx_GetName(__pyx_b, __pyx_n_ValueError); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 46; goto __pyx_L1;}
    __pyx_1 = PyInt_FromLong(__pyx_v_vl); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 46; goto __pyx_L1;}
    __pyx_3 = PyInt_FromLong(__pyx_v_valueLen); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 46; goto __pyx_L1;}
    __pyx_5 = PyTuple_New(4); if (!__pyx_5) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 46; goto __pyx_L1;}
    Py_INCREF(__pyx_v_attrName);
    PyTuple_SET_ITEM(__pyx_5, 0, __pyx_v_attrName);
    Py_INCREF(__pyx_v_v);
    PyTuple_SET_ITEM(__pyx_5, 1, __pyx_v_v);
    PyTuple_SET_ITEM(__pyx_5, 2, __pyx_1);
    PyTuple_SET_ITEM(__pyx_5, 3, __pyx_3);
    __pyx_1 = 0;
    __pyx_3 = 0;
    __pyx_1 = PyNumber_Remainder(__pyx_k1p, __pyx_5); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 46; goto __pyx_L1;}
    Py_DECREF(__pyx_5); __pyx_5 = 0;
    __pyx_3 = PyTuple_New(1); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 46; goto __pyx_L1;}
    PyTuple_SET_ITEM(__pyx_3, 0, __pyx_1);
    __pyx_1 = 0;
    __pyx_5 = PyObject_CallObject(__pyx_2, __pyx_3); if (!__pyx_5) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 46; goto __pyx_L1;}
    Py_DECREF(__pyx_2); __pyx_2 = 0;
    Py_DECREF(__pyx_3); __pyx_3 = 0;
    __Pyx_Raise(__pyx_5, 0, 0);
    Py_DECREF(__pyx_5); __pyx_5 = 0;
    {__pyx_filename = __pyx_f[0]; __pyx_lineno = 46; goto __pyx_L1;}
    goto __pyx_L2;
  }
  __pyx_L2:;

  /* "/home/leif/dv/SPECFEM3D_GLOBE/Specfem3DGlobeCode.pyx":47 */
  __pyx_6 = PyString_AsString(__pyx_v_v); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 47; goto __pyx_L1;}
  __pyx_v_vp = __pyx_6;

  /* "/home/leif/dv/SPECFEM3D_GLOBE/Specfem3DGlobeCode.pyx":48 */
  strncpy(__pyx_v_value,__pyx_v_vp,__pyx_v_vl);

  /* "/home/leif/dv/SPECFEM3D_GLOBE/Specfem3DGlobeCode.pyx":49 */
  for (__pyx_v_i = __pyx_v_vl; __pyx_v_i < __pyx_v_valueLen; ++__pyx_v_i) {

    /* "/home/leif/dv/SPECFEM3D_GLOBE/Specfem3DGlobeCode.pyx":50 */
    (__pyx_v_value[__pyx_v_i]) = ' ';
    __pyx_L3:;
  }
  __pyx_L4:;

  /* "/home/leif/dv/SPECFEM3D_GLOBE/Specfem3DGlobeCode.pyx":51 */
  goto __pyx_L0;

  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_1);
  Py_XDECREF(__pyx_2);
  Py_XDECREF(__pyx_3);
  Py_XDECREF(__pyx_5);
  __Pyx_AddTraceback("Specfem3DGlobeCode.read_value_string");
  __pyx_L0:;
  Py_DECREF(__pyx_v_attrName);
  Py_DECREF(__pyx_v_v);
}

DL_EXPORT(void) FC_FUNC_(open_parameter_file, OPEN_PARAMETER_FILE)(void) {

  /* "/home/leif/dv/SPECFEM3D_GLOBE/Specfem3DGlobeCode.pyx":54 */
  goto __pyx_L0;

  goto __pyx_L0;
  __pyx_L1:;
  __Pyx_AddTraceback("Specfem3DGlobeCode.open_parameter_file");
  __pyx_L0:;
}

DL_EXPORT(void) FC_FUNC_(close_parameter_file, CLOSE_PARAMETER_FILE)(void) {

  /* "/home/leif/dv/SPECFEM3D_GLOBE/Specfem3DGlobeCode.pyx":57 */
  goto __pyx_L0;

  goto __pyx_L0;
  __pyx_L1:;
  __Pyx_AddTraceback("Specfem3DGlobeCode.close_parameter_file");
  __pyx_L0:;
}

DL_EXPORT(void) FC_FUNC_(get_value_integer, GET_VALUE_INTEGER)(int (*__pyx_v_value),char (*__pyx_v_name),int (*__pyx_v_default),int __pyx_v_nameLen) {

  /* "/home/leif/dv/SPECFEM3D_GLOBE/Specfem3DGlobeCode.pyx":60 */
  (__pyx_v_value[0]) = (__pyx_v_default[0]);

  /* "/home/leif/dv/SPECFEM3D_GLOBE/Specfem3DGlobeCode.pyx":61 */
  FC_FUNC_(read_value_integer, READ_VALUE_INTEGER)(__pyx_v_value,__pyx_v_name,__pyx_v_nameLen); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 61; goto __pyx_L1;}

  goto __pyx_L0;
  __pyx_L1:;
  __Pyx_WriteUnraisable("Specfem3DGlobeCode.get_value_integer");
  __pyx_L0:;
}

DL_EXPORT(void) FC_FUNC_(get_value_double_precision, GET_VALUE_DOUBLE_PRECISION)(double (*__pyx_v_value),char (*__pyx_v_name),double (*__pyx_v_default),int __pyx_v_nameLen) {

  /* "/home/leif/dv/SPECFEM3D_GLOBE/Specfem3DGlobeCode.pyx":64 */
  (__pyx_v_value[0]) = (__pyx_v_default[0]);

  /* "/home/leif/dv/SPECFEM3D_GLOBE/Specfem3DGlobeCode.pyx":65 */
  FC_FUNC_(read_value_double_precision, READ_VALUE_DOUBLE_PRECISION)(__pyx_v_value,__pyx_v_name,__pyx_v_nameLen); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 65; goto __pyx_L1;}

  goto __pyx_L0;
  __pyx_L1:;
  __Pyx_WriteUnraisable("Specfem3DGlobeCode.get_value_double_precision");
  __pyx_L0:;
}

DL_EXPORT(void) FC_FUNC_(get_value_logical, GET_VALUE_LOGICAL)(int (*__pyx_v_value),char (*__pyx_v_name),int (*__pyx_v_default),int __pyx_v_nameLen) {

  /* "/home/leif/dv/SPECFEM3D_GLOBE/Specfem3DGlobeCode.pyx":68 */
  (__pyx_v_value[0]) = (__pyx_v_default[0]);

  /* "/home/leif/dv/SPECFEM3D_GLOBE/Specfem3DGlobeCode.pyx":69 */
  FC_FUNC_(read_value_logical, READ_VALUE_LOGICAL)(__pyx_v_value,__pyx_v_name,__pyx_v_nameLen); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 69; goto __pyx_L1;}

  goto __pyx_L0;
  __pyx_L1:;
  __Pyx_WriteUnraisable("Specfem3DGlobeCode.get_value_logical");
  __pyx_L0:;
}

DL_EXPORT(void) FC_FUNC_(get_value_string, GET_VALUE_STRING)(char (*__pyx_v_value),char (*__pyx_v_name),char (*__pyx_v_default),int __pyx_v_valueLen,int __pyx_v_nameLen,int __pyx_v_defaultLen) {
  PyObject *__pyx_v_i;
  int __pyx_1;
  long __pyx_2;
  PyObject *__pyx_3 = 0;
  __pyx_v_i = Py_None; Py_INCREF(__pyx_v_i);

  /* "/home/leif/dv/SPECFEM3D_GLOBE/Specfem3DGlobeCode.pyx":72 */
  __pyx_1 = (__pyx_v_defaultLen > __pyx_v_valueLen);
  if (__pyx_1) {

    /* "/home/leif/dv/SPECFEM3D_GLOBE/Specfem3DGlobeCode.pyx":73 */
    strncpy(__pyx_v_value,__pyx_v_default,__pyx_v_valueLen);
    goto __pyx_L2;
  }
  /*else*/ {

    /* "/home/leif/dv/SPECFEM3D_GLOBE/Specfem3DGlobeCode.pyx":75 */
    strncpy(__pyx_v_value,__pyx_v_default,__pyx_v_defaultLen);

    /* "/home/leif/dv/SPECFEM3D_GLOBE/Specfem3DGlobeCode.pyx":76 */
    for (__pyx_2 = __pyx_v_defaultLen; __pyx_2 < __pyx_v_valueLen; ++__pyx_2) {
      __pyx_3 = PyInt_FromLong(__pyx_2); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 76; goto __pyx_L1;}
      Py_DECREF(__pyx_v_i);
      __pyx_v_i = __pyx_3;
      __pyx_3 = 0;

      /* "/home/leif/dv/SPECFEM3D_GLOBE/Specfem3DGlobeCode.pyx":77 */
      __pyx_1 = PyInt_AsLong(__pyx_v_i); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 77; goto __pyx_L1;}
      (__pyx_v_value[__pyx_1]) = ' ';
      __pyx_L3:;
    }
    __pyx_L4:;
  }
  __pyx_L2:;

  /* "/home/leif/dv/SPECFEM3D_GLOBE/Specfem3DGlobeCode.pyx":78 */
  FC_FUNC_(read_value_string, READ_VALUE_STRING)(__pyx_v_value,__pyx_v_name,__pyx_v_valueLen,__pyx_v_nameLen); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 78; goto __pyx_L1;}

  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_3);
  __Pyx_WriteUnraisable("Specfem3DGlobeCode.get_value_string");
  __pyx_L0:;
  Py_DECREF(__pyx_v_i);
}

static PyObject *__pyx_f_18Specfem3DGlobeCode_meshfem3D(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds); /*proto*/
static char __pyx_doc_18Specfem3DGlobeCode_meshfem3D[] = "Run the SPECFEM3D Global Mesher.";
static PyObject *__pyx_f_18Specfem3DGlobeCode_meshfem3D(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  PyObject *__pyx_v_arg = 0;
  PyObject *__pyx_r;
  static char *__pyx_argnames[] = {"arg",0};
  if (!PyArg_ParseTupleAndKeywords(__pyx_args, __pyx_kwds, "O", __pyx_argnames, &__pyx_v_arg)) return 0;
  Py_INCREF(__pyx_v_arg);

  /* "/home/leif/dv/SPECFEM3D_GLOBE/Specfem3DGlobeCode.pyx":87 */
  if (PyObject_SetAttr(__pyx_m, __pyx_n_component, __pyx_v_arg) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 87; goto __pyx_L1;}

  /* "/home/leif/dv/SPECFEM3D_GLOBE/Specfem3DGlobeCode.pyx":88 */
  FC_FUNC(meshfem3d, MESHFEM3D)(); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 88; goto __pyx_L1;}

  __pyx_r = Py_None; Py_INCREF(__pyx_r);
  goto __pyx_L0;
  __pyx_L1:;
  __Pyx_AddTraceback("Specfem3DGlobeCode.meshfem3D");
  __pyx_r = 0;
  __pyx_L0:;
  Py_DECREF(__pyx_v_arg);
  return __pyx_r;
}

static PyObject *__pyx_f_18Specfem3DGlobeCode_specfem3D(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds); /*proto*/
static char __pyx_doc_18Specfem3DGlobeCode_specfem3D[] = "Run the SPECFEM3D Global Solver.";
static PyObject *__pyx_f_18Specfem3DGlobeCode_specfem3D(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  PyObject *__pyx_v_arg = 0;
  PyObject *__pyx_r;
  static char *__pyx_argnames[] = {"arg",0};
  if (!PyArg_ParseTupleAndKeywords(__pyx_args, __pyx_kwds, "O", __pyx_argnames, &__pyx_v_arg)) return 0;
  Py_INCREF(__pyx_v_arg);

  /* "/home/leif/dv/SPECFEM3D_GLOBE/Specfem3DGlobeCode.pyx":94 */
  if (PyObject_SetAttr(__pyx_m, __pyx_n_component, __pyx_v_arg) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 94; goto __pyx_L1;}

  /* "/home/leif/dv/SPECFEM3D_GLOBE/Specfem3DGlobeCode.pyx":95 */
  FC_FUNC(specfem3d, SPECFEM3D)(); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 95; goto __pyx_L1;}

  __pyx_r = Py_None; Py_INCREF(__pyx_r);
  goto __pyx_L0;
  __pyx_L1:;
  __Pyx_AddTraceback("Specfem3DGlobeCode.specfem3D");
  __pyx_r = 0;
  __pyx_L0:;
  Py_DECREF(__pyx_v_arg);
  return __pyx_r;
}

static __Pyx_InternTabEntry __pyx_intern_tab[] = {
  {&__pyx_n_ValueError, "ValueError"},
  {&__pyx_n_component, "component"},
  {&__pyx_n_len, "len"},
  {&__pyx_n_meshfem3D, "meshfem3D"},
  {&__pyx_n_readValue, "readValue"},
  {&__pyx_n_specfem3D, "specfem3D"},
  {0, 0}
};

static __Pyx_StringTabEntry __pyx_string_tab[] = {
  {&__pyx_k1p, __pyx_k1, sizeof(__pyx_k1)},
  {0, 0, 0}
};

static struct PyMethodDef __pyx_methods[] = {
  {"meshfem3D", (PyCFunction)__pyx_f_18Specfem3DGlobeCode_meshfem3D, METH_VARARGS|METH_KEYWORDS, __pyx_doc_18Specfem3DGlobeCode_meshfem3D},
  {"specfem3D", (PyCFunction)__pyx_f_18Specfem3DGlobeCode_specfem3D, METH_VARARGS|METH_KEYWORDS, __pyx_doc_18Specfem3DGlobeCode_specfem3D},
  {0, 0, 0, 0}
};

DL_EXPORT(void) initSpecfem3DGlobeCode(void); /*proto*/
DL_EXPORT(void) initSpecfem3DGlobeCode(void) {
  __pyx_m = Py_InitModule4("Specfem3DGlobeCode", __pyx_methods, __pyx_mdoc, 0, PYTHON_API_VERSION);
  if (!__pyx_m) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 4; goto __pyx_L1;};
  __pyx_b = PyImport_AddModule("__builtin__");
  if (!__pyx_b) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 4; goto __pyx_L1;};
  if (PyObject_SetAttrString(__pyx_m, "__builtins__", __pyx_b) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 4; goto __pyx_L1;};
  if (__Pyx_InternStrings(__pyx_intern_tab) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 4; goto __pyx_L1;};
  if (__Pyx_InitStrings(__pyx_string_tab) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 4; goto __pyx_L1;};

  /* "/home/leif/dv/SPECFEM3D_GLOBE/Specfem3DGlobeCode.pyx":22 */
  if (PyObject_SetAttr(__pyx_m, __pyx_n_component, Py_None) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 22; goto __pyx_L1;}

  /* "/home/leif/dv/SPECFEM3D_GLOBE/Specfem3DGlobeCode.pyx":91 */
  return;
  __pyx_L1:;
  __Pyx_AddTraceback("Specfem3DGlobeCode");
}

static char *__pyx_filenames[] = {
  "Specfem3DGlobeCode.pyx",
};
statichere char **__pyx_f = __pyx_filenames;

/* Runtime support code */

static PyObject *__Pyx_GetName(PyObject *dict, PyObject *name) {
    PyObject *result;
    result = PyObject_GetAttr(dict, name);
    if (!result)
        PyErr_SetObject(PyExc_NameError, name);
    return result;
}

static void __Pyx_Raise(PyObject *type, PyObject *value, PyObject *tb) {
    Py_XINCREF(type);
    Py_XINCREF(value);
    Py_XINCREF(tb);
    /* First, check the traceback argument, replacing None with NULL. */
    if (tb == Py_None) {
        Py_DECREF(tb);
        tb = 0;
    }
    else if (tb != NULL && !PyTraceBack_Check(tb)) {
        PyErr_SetString(PyExc_TypeError,
            "raise: arg 3 must be a traceback or None");
        goto raise_error;
    }
    /* Next, replace a missing value with None */
    if (value == NULL) {
        value = Py_None;
        Py_INCREF(value);
    }
    /* Next, repeatedly, replace a tuple exception with its first item */
    while (PyTuple_Check(type) && PyTuple_Size(type) > 0) {
        PyObject *tmp = type;
        type = PyTuple_GET_ITEM(type, 0);
        Py_INCREF(type);
        Py_DECREF(tmp);
    }
    if (PyString_Check(type))
        ;
    else if (PyClass_Check(type))
        ; /*PyErr_NormalizeException(&type, &value, &tb);*/
    else if (PyInstance_Check(type)) {
        /* Raising an instance.  The value should be a dummy. */
        if (value != Py_None) {
            PyErr_SetString(PyExc_TypeError,
              "instance exception may not have a separate value");
            goto raise_error;
        }
        else {
            /* Normalize to raise <class>, <instance> */
            Py_DECREF(value);
            value = type;
            type = (PyObject*) ((PyInstanceObject*)type)->in_class;
            Py_INCREF(type);
        }
    }
    else {
        /* Not something you can raise.  You get an exception
           anyway, just not what you specified :-) */
        PyErr_Format(PyExc_TypeError,
                 "exceptions must be strings, classes, or "
                 "instances, not %s", type->ob_type->tp_name);
        goto raise_error;
    }
    PyErr_Restore(type, value, tb);
    return;
raise_error:
    Py_XDECREF(value);
    Py_XDECREF(type);
    Py_XDECREF(tb);
    return;
}

static void __Pyx_WriteUnraisable(char *name) {
    PyObject *old_exc, *old_val, *old_tb;
    PyObject *ctx;
    PyErr_Fetch(&old_exc, &old_val, &old_tb);
    ctx = PyString_FromString(name);
    PyErr_Restore(old_exc, old_val, old_tb);
    if (!ctx)
        ctx = Py_None;
    PyErr_WriteUnraisable(ctx);
}

static int __Pyx_InternStrings(__Pyx_InternTabEntry *t) {
    while (t->p) {
        *t->p = PyString_InternFromString(t->s);
        if (!*t->p)
            return -1;
        ++t;
    }
    return 0;
}

static int __Pyx_InitStrings(__Pyx_StringTabEntry *t) {
    while (t->p) {
        *t->p = PyString_FromStringAndSize(t->s, t->n - 1);
        if (!*t->p)
            return -1;
        ++t;
    }
    return 0;
}

#include "compile.h"
#include "frameobject.h"
#include "traceback.h"

static void __Pyx_AddTraceback(char *funcname) {
    PyObject *py_srcfile = 0;
    PyObject *py_funcname = 0;
    PyObject *py_globals = 0;
    PyObject *empty_tuple = 0;
    PyObject *empty_string = 0;
    PyCodeObject *py_code = 0;
    PyFrameObject *py_frame = 0;
    
    py_srcfile = PyString_FromString(__pyx_filename);
    if (!py_srcfile) goto bad;
    py_funcname = PyString_FromString(funcname);
    if (!py_funcname) goto bad;
    py_globals = PyModule_GetDict(__pyx_m);
    if (!py_globals) goto bad;
    empty_tuple = PyTuple_New(0);
    if (!empty_tuple) goto bad;
    empty_string = PyString_FromString("");
    if (!empty_string) goto bad;
    py_code = PyCode_New(
        0,            /*int argcount,*/
        0,            /*int nlocals,*/
        0,            /*int stacksize,*/
        0,            /*int flags,*/
        empty_string, /*PyObject *code,*/
        empty_tuple,  /*PyObject *consts,*/
        empty_tuple,  /*PyObject *names,*/
        empty_tuple,  /*PyObject *varnames,*/
        empty_tuple,  /*PyObject *freevars,*/
        empty_tuple,  /*PyObject *cellvars,*/
        py_srcfile,   /*PyObject *filename,*/
        py_funcname,  /*PyObject *name,*/
        __pyx_lineno,   /*int firstlineno,*/
        empty_string  /*PyObject *lnotab*/
    );
    if (!py_code) goto bad;
    py_frame = PyFrame_New(
        PyThreadState_Get(), /*PyThreadState *tstate,*/
        py_code,             /*PyCodeObject *code,*/
        py_globals,          /*PyObject *globals,*/
        0                    /*PyObject *locals*/
    );
    if (!py_frame) goto bad;
    py_frame->f_lineno = __pyx_lineno;
    PyTraceBack_Here(py_frame);
bad:
    Py_XDECREF(py_srcfile);
    Py_XDECREF(py_funcname);
    Py_XDECREF(empty_tuple);
    Py_XDECREF(empty_string);
    Py_XDECREF(py_code);
    Py_XDECREF(py_frame);
}
