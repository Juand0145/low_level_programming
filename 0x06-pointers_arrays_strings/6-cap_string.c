#include "holberton.h"

/**
 * cap_string - Capitalize each word of a sentence
 * @s: The phrase we want to change
 * Return: Give us the string capitalized
 */
char *cap_string(char *s)
{
	int i, j;
	char ch[13] = {' ', '\t', '\n', ',', ';', '.', '!',
		       '?', '"', '(', ')', '{', '}'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 13; j++)
		{
			if (s[i - 1] == ch[j])
			{
				if (s[i] >= 'a' && s[i] <= 'z')
					s[i] = s[i] - 32;
			}
		}

	}

	return (s);
}
