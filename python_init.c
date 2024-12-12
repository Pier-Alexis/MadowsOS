
#include <Python.h>

void init_python() {
    Py_Initialize();
    PyRun_SimpleString("print('Python initialized on MadowsOS')");
}
