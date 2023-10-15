#include "main.h"

/**
 * get_bit - Gets the value of a bit at a specific index.
 * @n: The number from which to retrieve the bit.
 * @index: The index of the bit to retrieve (starting from 0).
 *
 * Return: The value of the bit at the specified index, or -1 if the index is out of range.
 */
int get_bit(unsigned long int n, unsigned int index)
{
    // Check if the index is out of range (greater than the maximum bit index).
    if (index > (sizeof(unsigned long int) * 8 - 1))
        return (-1);

    // Shift the bit at the desired index to the least significant position and return it.
    return ((n >> index) & 1);
}
