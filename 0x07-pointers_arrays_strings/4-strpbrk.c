#include "holberton.h"
#include <stdio.h>

/**
 * _strpbrk -  function locates the first
 * occurrence in the string s of any of the
 * bytes in the string accept
 * @s: Base string
 * @accept: string to compare
 * Return: gives back the returning string
 */
char *_strpbrk(char *s, char *accept)
{
	int i, a;

	while (a != '\0')
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
				return (s);
		}

		a = *s++;
	}

	return (NULL);
}
