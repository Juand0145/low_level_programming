#include "search_algos.h"

/**
 * linear_search - search a element in array
 * @value: number to search
 * @size: elements i the array
 * @array: POinter to the first
 * Return: First index where value is found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; array && i < size; ++i)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
