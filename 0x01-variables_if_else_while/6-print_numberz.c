#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all single-digit numbers of base 10 starting from 0,
 *              followed by a new line, using the putchar function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number;

	for (number = 0; number <= 9; number++)
		putchar(number + 48);

	putchar('\n');

	return (0);
}
