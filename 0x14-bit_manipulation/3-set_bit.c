#include "holberton.h"

/**
 * set_bit - a function that sets the value of a bit to 1 at a given
 * index.
 * @n: pointer to the number to change the bit
 * @index: position of the bit
 * Return: if it work print 1 if it not print -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}