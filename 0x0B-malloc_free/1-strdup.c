#include <stdlib.h>
#include "holberton.h"

/**
 * _strdup - a function that returns a pointer to a
 * newly allocated space in memory, which contains a
 * copy of the
 * @str: The string we want to copy
 * Return: If we pass all the porblem return should be ch
 */
char *_strdup(char *str)
{
	char *ch;
	unsigned int i, counter;

	counter = 0;
	i = 0;

	if (str == NULL)
		return (NULL);

	while (str[counter])
		counter++;

	ch = (char *)malloc(sizeof(counter + 1));

	if (ch == NULL)
		return (NULL);

	while ((ch[i] = str[i]) != '\0')
		i++;

	return (ch);
}
