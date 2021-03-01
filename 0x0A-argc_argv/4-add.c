#include <stdio.h>
#include <stdlib.h>

/**
 * zero_diff - differentiate the number 0 from a string
 * @s: The string to analise
 * Return: Return 0 if is number and 1 if is not
 */
int zero_diff(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < '0' || s[i] > '9')
		{
			return (1);
		}
	}

	return (0);
}

/**
 * main - a program that adds positive numbers.
 * @argc:The input integer values
 * @argv: The input string values
 * Return: If tehre is no problem should return 0
 */
int main(int argc, char *argv[])
{
	long int i, sum;

	sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 2; i < argc; i++)
	{
		if (atoi(argv[i]) == 0 && zero_diff(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
	}

	for (i = 1; i < argc; i++)
	{
		sum += atoi(argv[i]);
	}

	printf("%ld\n", sum);

	return (0);
}
