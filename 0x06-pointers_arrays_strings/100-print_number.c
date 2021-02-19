#include "holberton.h"

/**
 * print_number - print numbers
 * @n: the number to print
 */
void print_number(int n)
{
	unsigned int num;

	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}

	num = n;

	if (num / 10)
		print_number(num / 10);

	_putchar((num % 10) + '0');

}
