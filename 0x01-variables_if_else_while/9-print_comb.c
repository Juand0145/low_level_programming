#include <stdio.h>

/**
 * main - print  combination from a single digit
 * Return: f tehre is no proble the return should be 0
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
