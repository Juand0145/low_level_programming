#include "holberton.h"

/**
 * _strncat - function that concatenates two strings.
 * @dest: Destinatio string
 * @src: String to cocatenate
 * @n: number of bytes required in the string
 * Return: Returns the cocatenated string in dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int counter, j;

	for (counter = 0; dest[counter] != '\0'; counter++)
	{}

	for (j = 0; (src[j] != '\0') && (j < n); j++, counter++)
	{
		dest[counter] = src[j];
	}

	dest[counter] = '\0';

	return (dest);
}
