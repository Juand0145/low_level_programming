#include <stdlib.h>
#include "holberton.h"

/**
 * str_concat - a function that concatenates two
 * strings.
 * @s1: first string
 * @s2: Second string
 * Return: The string cocatanated
 */
char *str_concat(char *s1, char *s2)
{
	char *s3;
	unsigned int i = 0, j = 0, counter1 = 0, counter2 = 0;

	while (s1 && s1[counter1])
		counter1++;
	while (s2 && s2[counter2])
		counter2++;

	s3 = malloc(sizeof(char) * (counter1 + counter2 + 1));
	if (s3 == NULL)
		return (NULL);

	i = 0;
	j = 0;

	if (s1)
	{
		while (i < counter1)
		{
			s3[i] = s1[i];
			i++;
		}
	}

	if (s2)
	{
		while (i < (counter1 + counter2))
		{
			s3[i] = s2[j];
			i++;
			j++;
		}
	}
	s3[i] = '\0';

	return (s3);
}
