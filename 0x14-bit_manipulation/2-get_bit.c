#include "main.h"

/**
 * get_bit - returns the value of a bit at an index in a decimal number
 * @binr: number to search
 * @bin: index of the bit
 *
 * Return: value of the bit
 */
int get_bit(unsigned long int binr, unsigned int bin)
{
    int bit_val;

    if (bin > 63)
        return (-1);

    bit_val = (binr >> bin) & 1;

    return (bit_val);
}
