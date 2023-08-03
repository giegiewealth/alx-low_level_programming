#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @binr: number to print in binary
 */
void print_binary(unsigned long int binr)
{
    int i, count = 0;
    unsigned long int current;

    for (i = 63; i >= 0; i--)
    {
        current = binr >> i;

        if (current & 1)
        {
            _putchar('1');
            count++;
        }
        else if (count)
            _putchar('0');
    }
    if (!count)
        _putchar('0');
}
