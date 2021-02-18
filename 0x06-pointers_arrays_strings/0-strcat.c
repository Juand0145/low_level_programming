#include "holberton.h"
/**
 * _strcat - cocatenates two strings
 * @dest: Destination string
 * @src: string to cocatenates
 * Return: Give us the dest result
 */
char *_strcat(char *dest, char *src)
{
	int counter, j;

	for (counter = 0; dest[counter] != '\0'; counter++)
	{}

	for (j = 0; src[j] != '\0'; j++, counter++)
	{
		dest[counter] = src[j];
	}

	dest[counter] = '\0';

	return (dest);
}
