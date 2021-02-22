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
	int i, j;

	for (i = 0; *s != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}
		}
		s++;
	}

	return (NULL);
}
