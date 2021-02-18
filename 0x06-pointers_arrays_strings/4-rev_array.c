#include "holberton.h"

/**
 * reverse_array - reverse and array
 * @a: The array
 * @n: The size of the array
 */
void reverse_array(int *a, int n)
{
	int end, begin, value, i;

	begin = 0;
	end = n - 1;

	for (i = 0; i < n / 2; i++)
	{
		value = a[begin];
		a[begin] = a[end];
		a[end] = value;

		begin++;
		end--;

	}
}
