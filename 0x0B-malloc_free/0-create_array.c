#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - a function that creates an array of
 * chars, and initializes it with a specific char.
 * @size: The size of the array
 * @c: the character we want to replicate
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ch;

	if (size == 0)
		return (NULL);

	ch = (char *) malloc(sizeof(char) * size);

	if (ch == NULL)
		return (0);

	for (i = 0; i < size; i++)
		ch[i] = c;

	ch[i + 1] = '\0';

	return (ch);
}
