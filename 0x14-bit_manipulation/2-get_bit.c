#include "holberton.h"

/**
 * get_bit - a function that returns the value of a bit at a given
 * index.
 * @n: The number to analize
 * @index: The position of the bit
 * Return: The bit value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}