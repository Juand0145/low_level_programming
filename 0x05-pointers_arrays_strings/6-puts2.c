#include "holberton.h"

/**
 * puts2 - print intermiten character
 * @str: string to enter
 */
void puts2(char *str)
{
	int i, counter;

	for (counter = 0; str[counter] != '\0'; counter++)
	{}

	for (i = 0; i <= counter; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
