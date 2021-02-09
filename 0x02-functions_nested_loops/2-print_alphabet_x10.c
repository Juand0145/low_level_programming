#include "holberton.h"
/**
 * print_alphabet_x10 - Print the alphabet 10 times
 */

void print_alphabet_x10(void)
{
	char ch;
	int i;

	for (i = 48; i < 58; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);

		_putchar('\n');
	}
}
