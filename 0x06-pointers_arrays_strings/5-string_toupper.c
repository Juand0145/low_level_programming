#include "holberton.h"

/**
 * string_toupper - Comvert words in lower case
 * into upper case
 * @s: The string we want to comvert
 * Return: the string we comverted
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			s[i] = s[i] - 32;
		}
	}

	return (s);
}
