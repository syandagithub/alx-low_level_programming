#include "main.h"

/**
 * set_bit - Sets a bit at a specific index to 1.
 * @n: A pointer to the number in which the bit should be set.
 * @index: The index of the bit to be set (starting from 0).
 *
 * Return: 1 on success, -1 on failure.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
    if (n == NULL || index > (sizeof(unsigned long int) * 8 - 1))
    {
        return (-1); // Return -1 for failure if the index is out of range or n is NULL.
    }

    // Use a bitwise OR operation to set the bit at the desired index to 1.
    *n |= (1ul << index);
    
    return (1);
}
