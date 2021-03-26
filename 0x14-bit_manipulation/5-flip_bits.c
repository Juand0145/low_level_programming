#include "holberton.h"

/**
 * flip_bits - a function that returns the number of bits you would
 * need to flip to get from one number to another.
 * @n: the number that wants to be flip it
 * @m: the number we want to accec after the flip
 * Return: The number of bit that must to be flip it
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, n_bits;
	unsigned long int number_a;
	unsigned long int _operator = n ^ m;

  n_bits = 0;
	for (i = 63; i >= 0; i--)
	{
		number_a = _operator >> i;
		if (number_b & 1)
			n_bits++;
	}

	return (n_bits);
}