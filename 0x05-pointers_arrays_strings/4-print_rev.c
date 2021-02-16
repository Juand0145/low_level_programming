#include "holberton.h"

/**
 * print_rev - print in reverse
 * @s: the phrase we want to return in reverse
 */
void print_rev(char *s)
{
	int i, n;

	for (i = 0; s[i] != '\0'; i++)
	{}

	for (n = i - 1; n >= 0; n--)
	{
		_putchar(s[n]);
	}
	_putchar('\n');
}
