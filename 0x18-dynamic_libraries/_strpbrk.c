#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - Searches a string for any of a set of bytes
 * @s: The string to search
 * @accept: The string containing characters to search for
 *
 * Return: A pointer to the first occurrence in s of any character in accept,
 *         or NULL if no such character is found
 */
char *_strpbrk(char *s, char *accept)
{
    while (*s)
    {
        char *tmp = accept;
        while (*tmp)
        {
            if (*s == *tmp)
                return s;
            tmp++;
        }
        s++;
    }

    return NULL;
}
