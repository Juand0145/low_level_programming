#include "variadic_functions.h"

/**
 * sum_them_all - a function that returns the sum of all its parameters.
 * @n: the number of parameters
 * Return: The sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, value;
	va_list numbers;

	value = 0;
	va_start(numbers, n);

	for (i = 0; i < n; i++)
	{
		value += va_arg(numbers, unsigned int);
	}

	if (n == 0)
		return (0);

	return (value);
}
