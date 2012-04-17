#include <Python.h>

static PyObject*
pydrawer_foo(PyObject* self, PyObject* args)
{
  printf("Hello World!\n");
  Py_INCREF(Py_None);
  return Py_None;
}

static PyMethodDef PydrawerMethods[] = {
  {"foo", pydrawer_foo, METH_VARARGS, ""},
  {NULL, NULL, 0, NULL}
};

PyMODINIT_FUNC initpydrawer(void)
{
  (void) Py_InitModule("pydrawer", PydrawerMethods);
}
