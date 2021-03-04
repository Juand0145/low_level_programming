#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked -  function that allocates memory
 * using malloc.
 * @b: The memory space we want to reallocate
 * Return: A pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ch;

	ch = malloc(b);

	if (ch == NULL)
		exit(98);

	return (ch);
}
