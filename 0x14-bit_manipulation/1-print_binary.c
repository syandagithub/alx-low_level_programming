#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be printed in binary.
 *
 * Return: void.
 */
void print_binary(unsigned long int n)
{
    if (n > 1)
    {
        // Recursively print the binary representation of n divided by 2.
        print_binary(n >> 1);
    }

    // Print the least significant bit of n (0 or 1) as a character.
    _putchar((n & 1) + '0');
}
