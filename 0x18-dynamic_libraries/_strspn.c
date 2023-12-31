#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: The string to search
 * @accept: The string containing characters to match
 *
 * Return: The number of bytes in the initial segment of s
 *         which consist only of characters from accept
 */
unsigned int _strspn(char *s, char *accept)
{
    unsigned int count = 0;
    int found;

    while (*s)
    {
        found = 0;
        while (*accept)
        {
            if (*s == *accept)
            {
                count++;
                found = 1;
                break;
            }
            accept++;
        }
        if (!found)
            break;
        s++;
    }

    return count;
}
