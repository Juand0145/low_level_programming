#include "holberton.h"

/**
 * _abs - Calculate the absolute value of a number
 * @n: the number tu check
 * Return: return the absolute value
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	return (-n);
}
