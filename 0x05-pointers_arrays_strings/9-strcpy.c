#include "holberton.h"

/**
 * _strcpy - transform a string
 * @dest: destination
 * @src: source
 * Return: It return a character
 */
char *_strcpy(char *dest, char *src)
{
	int i, count;

	for (count = 0; src[count] != '\0'; count++)
	{}

	for (i = 0; i <= count; i++)
		dest[i] = src[i];

	return (dest);
}
