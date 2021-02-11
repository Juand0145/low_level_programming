#include "holberton.h"

/**
 * print_line - Print a line
 * @n: Lenght of the line
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
		_putchar('_');
	_putchar('\n');
}
