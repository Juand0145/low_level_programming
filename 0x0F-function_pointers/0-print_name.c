#include "function_pointers.h"

/**
 * print_name - a function that prints a name.
 * @name: Name of the person to print
 * @f: Pointer the function that actually prints
 */
void print_name(char *name, void (*f)(char *))
{
	if (f || name)
		f(name);
}
