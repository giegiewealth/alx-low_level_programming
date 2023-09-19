#include "main.h"
#include <stddef.h>

/**
 * _strstr - Locates a substring within a string
 * @haystack: The string to search in
 * @needle: The substring to find
 *
 * Return: A pointer to the beginning of the located substring,
 *         or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
    while (*haystack)
    {
        char *start = haystack;
        char *n = needle;

        while (*n && *haystack == *n)
        {
            haystack++;
            n++;
        }

        if (*n == '\0')
            return start;

        haystack = start + 1;
    }

    return NULL;
}
