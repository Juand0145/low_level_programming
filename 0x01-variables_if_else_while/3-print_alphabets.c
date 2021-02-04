#include <stdio.h>

/**
 * main - print alphabet in lower and upper case
 * Return: if there is no problem should be 0
 */
int main(void)
{
	int (ch);
	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
