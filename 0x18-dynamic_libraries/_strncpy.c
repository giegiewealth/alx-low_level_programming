#include "main.h"

/**
 * _strncpy - Copies n bytes from src to dest
 * @dest: The destination string
 * @src: The source string
 * @n: The number of bytes to copy
 *
 * Return: The pointer to the destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
    char *start = dest;

    while (*src && n > 0)
    {
        *dest = *src;
        dest++;
        src++;
        n--;
    }

    while (n > 0)
    {
        *dest = '\0';
        dest++;
        n--;
    }

    return start;
}
