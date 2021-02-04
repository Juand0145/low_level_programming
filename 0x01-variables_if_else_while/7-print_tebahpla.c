#include <stdio.h>

/**
 * main - print the alphabelt in reverse
 * Return: if there is no proble should return 0
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
