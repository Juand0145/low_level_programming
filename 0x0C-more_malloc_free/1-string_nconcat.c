#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * counter - counte the characters ina string_nconcat
 * @s: the string
 * Return: The number of character in the string
 */
int counter(char *s)
{
	unsigned int i;

	i = 0;
	while (s && s[i])
		i++;

	return (i);
}

/**
 * string_nconcat - a function that concatenates two
 * strings.
 * @s1: string 1
 * @s2: string 2
 * @n: the number of characters in the string 2
 * Return: the string concatenated
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int lenght, i, j;
	char *concat;

	lenght = counter(s1);

	concat = calloc(lenght + n + 1, sizeof(char));

	if (!concat)
		return (NULL);

	for (i = 0; i < lenght; i++)
		concat[i] = s1[i];

	for (j = 0; i < (lenght + n); i++, j++)
		concat[i] = s2[j];

	concat[i] = '\0';

	return (concat);
}
