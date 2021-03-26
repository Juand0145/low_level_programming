#include "holberton.h"

/**
 * print_binary a function that prints the binary
 * representation of a number.
 * @n: The number to comvert into binary
 */
void print_binary(unsigned long int n)
{
	int i = 63, count = 0;
	unsigned long int current;

	while ( i >= 0)
	{
		current = n >> i;

		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');

    i--;
	}
	if (!count)
		_putchar('0');
}