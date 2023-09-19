#include <stdio.h>

/**
 * add - Adds two integers
 * @a: The first integer
 * @b: The second integer
 *
 * Return: The sum of a and b
 */
int add(int a, int b)
{
    return a + b;
}

// The Python C-API requires a function with this signature.
int add_wrapper(int a, int b)
{
    return add(a, b);
}
