#include <stdio.h>

/**
 * main - a program that prints the number of arguments
 * passed into it.
 * @argc:The input integer values
 * @argv: The input string values
 * Return: If tehre is no problem should return 0
 */
int main(int argc, char *argv[])
{
	if (argc > 1)
	{
		argc = argc - 1;
		printf("%d\n", argc);
	}

	else
		printf("0\n");

	(void)argv;

	return (0);
}
