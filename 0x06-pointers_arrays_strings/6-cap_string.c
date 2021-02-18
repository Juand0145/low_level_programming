#include "holberton.h"

/**
 * cap_string - Capitalize each word of a sentence
 * @s: The phrase we want to change
 * Return: Give us the string capitalized
 */
char *cap_string(char *s)
{
	int i, j;

	char ch[13] = {' ', '\t', '\n', ',', ';', '.',
			'!', '?', '"', '(', ')', '{', '}'};

	for (i = 0; s[i] != '\0'; i++)
	{
		if ((s[i] >= 'a' && s[i] <= 'z') && i == 0)
			s[i] -= 32;

		for (j = 0; j < 13; j++)
		{
			if (s[i] == ch[j])
			{
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
				{
					s[i + 1] -= 32;
				}
			}
		}
	}

	return (s);
}
