#include "variadic_functions.h"

/**
 * print_numbers - a function that prints numbers, followed by a new line.
 * @separator: the separator beyween numbers
 * @n: Number of values.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int i;

	va_start(num, n);

	for (i = 0; i < n; i++)
	{
		if (i != n - 1 && separator)
			printf("%d%s", va_arg(num, unsigned int), separator);

		else
			printf("%d", va_arg(num, unsigned int));
	}

	printf("\n");

	va_end(num);
}
