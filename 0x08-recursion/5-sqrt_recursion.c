# include "holberton.h"

/**
 * _sqrt - Square root
 * @n: Number to calculate the square root
 * @a: The square root, if it have it
 * Return: The square root
 */
int _sqrt(int n, int a)
{
	if (a * a > n)
		return (-1);

	if (a * a == n)
		return (a);

	return (_sqrt(n, a + 1));

}

/**
 * _sqrt_recursion - a function that returns the
 * natural square root of a number.
 * @n: Number to calculate the square root
 * Return: The square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (_sqrt(n, 0));
}
