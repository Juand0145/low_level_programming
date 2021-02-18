#include "holberton.h"
/**
 * _strncpy - Copy the string over other strin
 * @dest: String who recive the copy
 * @src: String tha is copied
 * @n: The number of character of the second string that should be copied
 * Return: Return the fusion between both strings
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; (src[i] != '\0') && i < n; i++)
	{
		dest[i] = src[i];
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
