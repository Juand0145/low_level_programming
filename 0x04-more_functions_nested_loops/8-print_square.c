#include "holberton.h"

/**
 * print_square - print a square with #
 * @size: the size of the square
 */
void print_square(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size ; j++)
			_putchar('#');
		_putchar('\n');
	}
}
