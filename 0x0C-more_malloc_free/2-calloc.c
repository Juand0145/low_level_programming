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
	unsigned int i = 0;
	char *s;

	if (nmemb == 0 || size == 0)
		return (NULL);

	matrix = malloc(nmemb * size);

	if (!matrix)
		return (NULL);

	s = (char *)matrix;

	if (s != NULL)
	{
		while (i < (nmemb * size))
			s[i++] = 0;

		return (s);
	}


	return (matrix);
}
