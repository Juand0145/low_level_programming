#include <stdio.h>
#include <stdlib.h>

/**
 * zero_diff - differentiate the number 0 from a string
 * @s - the string to analise
 * Return: Return 0 if is number and 1 if is not
 */
int zero_diff(char *s)
{
	if (s[0] == '0')
		return (0);

	return (1);
}

/**
 * main - a program that adds positive numbers.
 * @argc:The input integer values
 * @argv: The input string values
 * Return: If tehre is no problem should return 0
 */
int main(int argc, char *argv[])
{
	int i, sum;

	sum = 0;
	(void)argv;

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

	printf("%d\n", sum);

	return (0);
}
