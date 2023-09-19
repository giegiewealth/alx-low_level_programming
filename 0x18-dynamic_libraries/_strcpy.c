#include "main.h"

/**
 * _strcpy - Copies a string to another string
 * @dest: The destination string
 * @src: The source string
 *
 * Return: The pointer to the destination string
 */
char *_strcpy(char *dest, char *src)
{
    char *start = dest;

    while (*src)
    {
        *dest = *src;
        dest++;
        src++;
    }

    *dest = '\0';
    return start;
}
