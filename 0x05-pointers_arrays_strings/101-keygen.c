#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random valid
 * Return: return 0 succes
 */
int main(void)
{
	int pass[50];
	int i;

	srand(time(NULL));

	for (i = 0; i < 50; i++)
	{
		pass[i] = rand() % 78;
		putchar(pass[i] + '0');
	}
	return (0);
}
