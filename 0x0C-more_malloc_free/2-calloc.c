#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - a function that allocates memory for an
 * array, using malloc.
 * @nmemb: Spaces of memory to asign
 * @size: The bytes for memory
 * Return: The matrix
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *matrix;

	if (nmemb == 0 || size == 0)
		return (NULL);

	matrix = calloc(nmemb, size);

	if (!matrix)
		return (NULL);

	return (matrix);
}
