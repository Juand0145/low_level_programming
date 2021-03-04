#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range -  a function that creates an array of
 * integers.
 * @min: min value of the array
 * @max: Max value of the array
 * Return: Return a array of numbers:
 */
int *array_range(int min, int max)
{
	int i, j;
	int *num;

	if (min > max)
		return (NULL);

	i = max - min + 1;

	num = malloc(i * sizeof(int));

	for (j = 0; min <= max; j++)
	{
		num[j] = min++;
	}

	return (num);
}
