
#include <Python.h>

void execute_python(const char* code) {
    Py_Initialize();
    PyRun_SimpleString(code);
    Py_Finalize();
}
