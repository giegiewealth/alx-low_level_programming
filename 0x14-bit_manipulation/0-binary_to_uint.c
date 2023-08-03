#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @binr: string containing the binary number
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *binr)
{
    int i;
    unsigned int dec_val = 0;

    if (!binr)
        return (0);

    for (i = 0; binr[i]; i++)
    {
        if (binr[i] < '0' || binr[i] > '1')
            return (0);
        dec_val = 2 * dec_val + (binr[i] - '0');
    }

    return (dec_val);
}
