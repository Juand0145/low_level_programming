#include <stdio.h>
#include <stdlib.h>

/**
 * main - Write a program that multiplies two numbers.
 * @argc:The input integer values
 * @argv: The input string values
 * Return: If tehre is no problem should return 0
 */
int main(int argc, char *argv[])
{
	int mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	mul = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", mul);

	(void)argc;

	return (0);
}
