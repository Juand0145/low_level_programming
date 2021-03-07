#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main - Is a function that multilies two numbers
 * @argc: the number of arguments we introduce it.
 * @argv: The string we introduce it.
 * Return: Return 0 if it work or 98 if it doesn't.
 */
int main(int argc, char *argv[])
{
	long int mul;
	int i, j;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (98);
			}
		}
	}

	if (argc > 3)
	{
		printf("Error\n");
		return (98);
	}

	mul = atoi(argv[1]) * atoi(argv[2]);

	printf("%ld\n", mul);

	return (0);
}
