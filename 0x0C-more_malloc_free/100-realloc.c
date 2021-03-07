#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - a function that reallocates a memory block using malloc and free.
 * @ptr:  Is a pointer to the memory previously allocated.
 * @old_size: The size of the old pointer.
 * @new_size: The size of the new pointer.
 * Return: The nold pointer witha  new size.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *_realloc;
	char *p_i;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	_realloc = malloc(new_size);

	if (_realloc != NULL)
	{
		p_i = (char *)ptr;

		for (i = 0; i < old_size; i++)
			_realloc[i] = p_i[i];

		free(ptr);
		return (_realloc);
	}

	return (NULL);
}
