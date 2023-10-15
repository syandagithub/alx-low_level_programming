#include "main.h"

/**
 * binary_to_uint - converts a binary string to an unsigned int
 * @b: the binary number as a string
 *
 * Return: the converted value, or 0 if b is NULL or contains non-binary characters
 */
unsigned int binary_to_uint(const char *b)
{
    unsigned int decimal = 0;
    int base = 1;

    if (!check_valid_string(b))
        return 0;

    for (int i = 0; b[i] != '\0'; i++)
    {
        decimal = decimal * 2 + (b[i] - '0');
    }

    return decimal;
}

/**
 * check_valid_string - checks if a string has only '0's and '1's
 * @b: string to be checked
 *
 * Return: 1 if the string is valid, 0 otherwise
 */
int check_valid_string(const char *b)
{
    if (b == NULL)
        return 0;

    while (*b)
    {
        if (*b != '0' && *b != '1')
            return 0;
        b++;
    }

    return 1;
}
