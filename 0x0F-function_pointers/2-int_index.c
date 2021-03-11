#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index -  a function that searches for an integer.
 * @array:Array of numbers
 * @size: Size of the array
 * @cmp: pointer to the function we want to evaluate.
 * Return: Retirn the index of the mathc or -1 either way.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}
