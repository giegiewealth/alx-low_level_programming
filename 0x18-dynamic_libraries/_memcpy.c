#include "main.h"

/**
 * _memcpy - Copies memory area from src to dest
 * @dest: The destination memory
 * @src: The source memory
 * @n: The number of bytes to copy
 *
 * Return: The pointer to the destination memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
    char *start = dest;

    while (n > 0)
    {
        *dest = *src;
        dest++;
        src++;
        n--;
    }

    return start;
}
