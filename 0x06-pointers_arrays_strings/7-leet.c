#include "holberton.h"

/**
 * leet - write a secret code in our message
 * @s: The secret code
 * Return: return the secret code
 */
char *leet(char *s)
{
	int i, j;

	char letters [11] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char numb[11] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; letters[j] != '\0'; j++)
		{
			if (s[i] == letters[j])
				s[i] = numb[j];
		}
	}

	return (s);
}
