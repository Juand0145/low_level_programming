#include "holberton.h"
#include "stdio.h"
/**
 * main - print 1 to 100 and fizz buzz
 * Return: if there is no problem should be 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf(" FizzBuzz");

		else if (i % 3 == 0 && i % 5 != 0)
			printf(" Fizz");

		else if (i % 5 == 0 && i % 3 != 0)
			printf(" Buzz");

		else if (i == 1)
			printf("1");

		else
			printf(" %d", i);
	}

	printf("\n");

	return (0);
}
