#include "holberton.h"
/**
 * _puts - write a sentence
 *@str: the sentences we want to write
 */
void _puts(char *str)
{
	int n;

	for (n = 0; str[n] != '\0'; n++)
	{
		_putchar(str[n]);
	}

	_putchar('\n');
}
