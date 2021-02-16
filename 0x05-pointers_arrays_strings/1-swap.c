#include "holberton.h"

/**
 * swap_int - swap the value of two integers
 * @a: first value
 * @b: second value
 */
void swap_int(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
