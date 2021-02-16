#include "holberton.h"

/**
 * rev_string - print in reverse
 * @s: the phrase we want to return in reverse
 */
void rev_string(char *s)
{
	char ch;
	int i, count, end;

	count = 0;
	end = 0;
	ch = '0';

	while (s[count] != '\0')
	{
		count++;
	}

	end = count - 1;

	for (i = 0; i < count / 2; i++)
	{
		ch = s[i];
		s[i] = s[end];
		s[end--] = ch;
	}
}
