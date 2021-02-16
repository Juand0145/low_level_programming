#include "holberton.h"

/**
 * _strlen - return the leght of a string
 * @s: word to lenghted
 * Return: the leght of the word
 */
int _strlen(char *s)
{
	int n;

	for (n = 0; s[n] != '\0'; n++)
	{}

	return (n);
}
