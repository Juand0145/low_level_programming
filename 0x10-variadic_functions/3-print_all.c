#include "variadic_functions.h"

/**
 * print_all - a function that prints anything.
 * @format: Types we wnat to print
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *str;
	char *separator = "";

	va_list arg;

	va_start(arg, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
			case 'c':
				printf("%s%c", separator, va_arg(arg, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(arg, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(arg, double));
				break;
			case 's':
				str = va_arg(arg, char *);
				if (!str)
					str = "(nil)";
				printf("%s%s", separator, str);
				break;
			default:
				i++;
				continue;
			}
			separator = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(arg);
}
