#include "holberton.h"

/**
 * prime - Calculates if is a prime is_prime_number
 * @n: Number to define if  it's prime
 * @a: counter
 * Return: return 1 and 0 if is prime or not
 */
int prime(int n, int a)
{
	if (a == n)
		return (1);

	if (n % a == 0)
		return (0);

	return (prime(n, a + 1));
}

/**
 * is_prime_number -a function that returns 1 if
 * the input integer is a prime number, otherwise
 * return 0.
 * @n: Number to define if  it's prime
 * Return: return 1 and 0 if is prime or not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (prime(n, 2));
}
