#include <Python.h>

static PyObject*
pyframe_foo(PyObject* self, PyObject* args)
{
  printf("Hello World!\n");
  Py_INCREF(Py_None);
  return Py_None;
}

static PyMethodDef PyframeMethods[] = {
  {"foo", pyframe_foo, METH_VARARGS, ""},
  {NULL, NULL, 0, NULL}
};

PyMODINIT_FUNC initpyframe(void)
{
  (void) Py_InitModule("pyframe", PyframeMethods);
}
