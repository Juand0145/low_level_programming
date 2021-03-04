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
	unsigned int lenght_1, lenght_2, i, j;
	char *concat;

	lenght_1 = counter(s1);
	lenght_2 = counter(s2);

	if (n < lenght_2)
		concat = calloc(lenght_1 + n + 1, sizeof(char));

	else
		concat = calloc(lenght_1 + lenght_2 + 1, sizeof(char));


	if (!concat)
		return (NULL);


	for (i = 0; i < lenght_1; i++)
		concat[i] = s1[i];

	j = 0;

	while (i < (lenght_1 + n) && s2[j] != '\0')
	{
		concat[i] = s2[j];
		i++;
		j++;
	}

	concat[i] = '\0';

	return (concat);
}
