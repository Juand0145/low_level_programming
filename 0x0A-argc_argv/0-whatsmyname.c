#include <stdio.h>

/**
 * main - a program that prints its name, followed by a new line.
 * @argc:The input integer values
 * @argv: The input string values
 * Return: If tehre is no problem should return 0
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);

	(void)argc;

	return (0);
}
