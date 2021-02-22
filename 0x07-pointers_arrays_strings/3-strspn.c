#include "holberton.h"

/**
 * _strspn - Write a function that gets the length
 * of a prefix substring.
 * @s: origin substring
 * @accept: bytes to compare
 * Return: return the prefix bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, counter, mark;

	counter = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		mark = 0;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				mark = 1;
				counter++;
			}
		}

		if (mark == 0)
			return (counter);
	}

	return (counter);
}
