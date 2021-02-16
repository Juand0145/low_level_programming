#include "holberton.h"
#include <stdio.h>

/**
 * print_array - print and array
 * @a: the array;
 * @n: the number of data in teh array
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
			printf("%d", a[0]);

		else
			printf(", %d", a[i]);
	}
	printf("\n");
}
