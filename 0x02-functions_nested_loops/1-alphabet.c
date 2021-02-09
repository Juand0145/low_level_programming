#include "holberton.h"

/**
 * print_alphabet - It prints the alphabet
 **/
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <='z'; ch++)
		_putchar(ch);

	_putchar('\n');
}
