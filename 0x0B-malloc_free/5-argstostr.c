#include <stdlib.h>
#include "holberton.h"

/**
 * argstostr - cocatanetes any number of strings
 * @ac: Number of strings
 * @av: Array of strings
 * Return: The cocanated vector
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, counter;
	char *s;

	k = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			counter++;
		counter++;
	}

	s = malloc(sizeof(char) * (counter + 1));

	if (s == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			s[k] = av[i][j];
			k++;
		}
		s[k] = '\n';
		k++;
	}

	return (s);
}
