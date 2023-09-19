#include <Python.h>

/**
 * add_integers - Adds two integers
 * @a: The first integer
 * @b: The second integer
 *
 * Return: The sum of a and b
 */
int add_integers(int a, int b)
{
    return a + b;
}

/**
 * subtract_integers - Subtracts two integers
 * @a: The first integer
 * @b: The second integer
 *
 * Return: The result of subtracting b from a
 */
int subtract_integers(int a, int b)
{
    return a - b;
}

/**
 * multiply_integers - Multiplies two integers
 * @a: The first integer
 * @b: The second integer
 *
 * Return: The product of a and b
 */
int multiply_integers(int a, int b)
{
    return a * b;
}

/**
 * divide_integers - Divides two integers
 * @a: The first integer
 * @b: The second integer
 *
 * Return: The result of dividing a by b
 */
int divide_integers(int a, int b)
{
    if (b == 0)
    {
        PyErr_SetString(PyExc_ZeroDivisionError, "division by zero");
        return -1; // Return -1 to indicate an error
    }
    return a / b;
}

/* Define a Python module and its methods */
static PyMethodDef myMethods[] = {
    {"add", (PyCFunction)add_integers, METH_VARARGS, "Add two integers"},
    {"subtract", (PyCFunction)subtract_integers, METH_VARARGS, "Subtract two integers"},
    {"multiply", (PyCFunction)multiply_integers, METH_VARARGS, "Multiply two integers"},
    {"divide", (PyCFunction)divide_integers, METH_VARARGS, "Divide two integers"},
    {NULL, NULL, 0, NULL} /* Sentinel */
};

/* Define the module's initialization function */
static struct PyModuleDef myModule = {
    PyModuleDef_HEAD_INIT,
    "myModule", /* Module name */
    NULL,       /* Module documentation */
    -1,         /* Size of per-interpreter state of the module, or -1 if the module keeps state in global variables. */
    myMethods   /* Method definitions */
};

/* Module initialization function */
PyMODINIT_FUNC PyInit_100_operations(void)
{
    return PyModule_Create(&myModule);
}
