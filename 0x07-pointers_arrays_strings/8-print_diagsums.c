#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - function that prints the sum
 * of the two diagonals of a square matrix of
 * integers.
 * @a: The matrix we want to sum
 * @size: size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int i;

	unsigned int sum_a, sum_b;

	sum_a = 0;
	sum_b = 0;

	for (i = 0; i < size; i++)
	{
		sum_a += a[(size * i) + i];
		sum_b += a[(size * (i + 1)) - (i + 1)];
	}

	printf("%d, %d\n", sum_a, sum_b);
}
