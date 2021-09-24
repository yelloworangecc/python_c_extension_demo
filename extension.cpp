#include "Python.h"
#include "hello.h"

static PyObject* py_say_hello(PyObject* self, PyObject* args)
{
    say_hello();
    return Py_None;
}

static PyMethodDef ExtendMethods[] = {
	{"say_hello",py_say_hello,METH_VARARGS,"say hello"},
	{NULL,NULL}
};

static struct PyModuleDef helloExtension = {
	PyModuleDef_HEAD_INIT,
	"helloExtension",
	NULL,
	-1,
	ExtendMethods
};

PyMODINIT_FUNC PyInit_helloExtension(void)
{
	return PyModule_Create(&helloExtension);
}
