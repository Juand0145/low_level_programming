#include <stdio.h>

/**
 * main - print all nombers from 00 to 99
 * Return: if tehres no error the return should be 0
 */
int main(void)
{
	int n, m;

	for (n = 0; n < 10 ; n++)
	{
		for (m = 0; m < 10; m++)
		{
			putchar(n);
			putchar(m);
			if (n != 9 || m != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
