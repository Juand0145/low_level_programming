#include "holberton.h"

/**
 * _atoi - comvert from string to integer
 * @s: th string we want to comvert
 * Return: return int value
 */
int _atoi(char *s)
{
	int i, n, sign, count, j, mult;
	sign = 1;
	count = 0;
	mult = 1;
	n = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if ((s[i - 1] >= '0' && s[i - 1] <= '9') && (s[i] < '0' || s[i] > '9'))
			break;

		if (s[i] == '-')
			sign = sign * -1;

		if (s[i] >= '0' && s[i] <= '9')
		{
			count ++;
		}
	}


	for (j = i - 1; j >= i - count; j--)
	{
		n = (s[j] - '0') * mult + n;
		mult = mult * 10;
	}

	return (n * sign);
}
