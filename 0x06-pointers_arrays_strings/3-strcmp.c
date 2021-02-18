#include "holberton.h"

/**
 * _strcmp - compare two strings
 * @s1: first string
 * @s2: Second string
 * Return: return the value of two strings
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] - s2[i] != 0)
		{
			return (s1[i] - s2[i]);
		}
	}

	return (0);
}
