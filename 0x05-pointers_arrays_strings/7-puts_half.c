#include "holberton.h"

/**
 * puts_half - print the half of the string
 * @str: the string we will cut in half
 */
void puts_half(char *str)
{
	int count, half;

	for (count = 0; str[count] != '\0'; count++)
	{}

	for (half = count / 2; str[half] != '\0'; half++)
		_putchar(str[half]);

	_putchar('\n');
}
