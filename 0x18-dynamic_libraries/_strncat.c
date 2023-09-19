#include "main.h"

/**
 * _strncat - Concatenates two strings with n bytes from src
 * @dest: The destination string
 * @src: The source string to append
 * @n: The number of bytes to concatenate
 *
 * Return: The pointer to the destination string
 */
char *_strncat(char *dest, char *src, int n)
{
    char *start = dest;

    while (*dest)
        dest++;

    while (*src && n > 0)
    {
        *dest = *src;
        dest++;
        src++;
        n--;
    }

    *dest = '\0';
    return start;
}
