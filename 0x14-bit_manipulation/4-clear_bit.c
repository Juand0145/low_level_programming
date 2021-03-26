#include "holberton.h"

/**
 * clear_bit - a function that sets the value of a bit to 0 at a
 * given index.
 * @n: The number to replace the bit
 * @index: the position of the bit to clear
 * Return: if i tworks print 1 if dont print -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}