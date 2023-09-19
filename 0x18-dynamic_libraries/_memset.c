#include "main.h"

/**
 * _memset - Fills memory with a constant byte
 * @s: The pointer to memory
 * @b: The constant byte
 * @n: The number of bytes to fill
 *
 * Return: The pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
    char *start = s;

    while (n > 0)
    {
        *s = b;
        s++;
        n--;
    }

    return start;
}
