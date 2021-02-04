#include <stdio.h>

/**
* main - This main print the diferents bytes size
* Return: It return the size of diferent numbers
*/
int main(void)
{
	printf("Size of a char: %d byte(s)\n", sizeof(char));
	pritnf("Size of an int: %d byte (s)\n", sizeof(int));
	pritnf("Size of a long long int: %d byte(s)\n,", sizeof(long long int));
	printf("Size of a float: %d byte(s)\n", sizeof(float));
	return (0);
}
