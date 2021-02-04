#include <stdio.h>

/**
 * main - print nnumbers exadecimas in lower case
 * Return: if there is no problem the return should be 0
 */
int main(void)
{
	int n;
	char ch;

	for (n = 0; n < 10; n++)
	{
		putchar(n);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
