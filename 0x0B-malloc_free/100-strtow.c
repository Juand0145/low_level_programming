#include <stdlib.h>
#include "holberton.h"

/**
 * count_word - Count the words
 * @s: String
 * Return: The number of words.
 */
int count_word(char *s)
{
	int flag, c, n;

	flag = 0;
	n = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			n++;
		}
	}

	return (n);
}
/**
 * **strtow - a function that splits a string into words.
 * @str: string to split
 * Return: The string splited. or NULL or Error
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int i, k = 0, counter = 0, words, c = 0, start, end;

	while (*(str + counter))
		counter++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (i = 0; i <= counter; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[k] = tmp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}

	matrix[k] = NULL;

	return (matrix);
}
