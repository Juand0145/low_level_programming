#include "holberton.h"

/**
 * _isupper - check if is upper or lower case
 * @c: the letter to check
 * Return: 1 if is uppercase and 0 if is lower case
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	if (c >= 'a' && c <= 'z')
		return (0);
	return (c);
}
