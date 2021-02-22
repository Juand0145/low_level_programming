#include "holberton.h"
#include <stdio.h>

/**
 * _strchr - Returns a pointer to the first
 * occurrence of the character c in the string s,
 * or NULL if the character is not found
 * @s: string s
 * @c : Character to search
 * Return: Return the string cuted
 */
char *_strchr(char *s, char c)
{
	int i, a;

	for (i = 0; s[i] != '\0'; i++)
	{
		a = *s++;

		if (a == c)
			return (s - 1);

		if (a == 0)
			return (NULL);
	}
}
