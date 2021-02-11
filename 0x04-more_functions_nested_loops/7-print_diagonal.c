#include "holberton.h"

/**
 * print_diagonal - print a diagonal
 * @n: the space to print the diagonal
 */
void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
			_putchar('\n');

		for (j = 0; j < i; j++)
			_putchar(' ');

		_putchar(92);
		_putchar('\n');
	}
}
