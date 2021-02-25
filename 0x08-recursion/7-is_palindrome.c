#include "holberton.h"

/**
 * counter - Count the number of characters
 * @s: The phrase to count
 * Return: The number of characters
 */
int counter(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + counter(s + 1));
}

/**
 * palindrome - check if the word is a palindrome
 * @i: the starting point for the progresive count
 * @n: the count down
 * @s: the phrase to check
 * Return: is its a palindrome or not.
 */
int palindrome(int i, int n, char *s)
{

	if (*(s + i) != *(s + n - 1))
		return (0);

	if (i >= n)
		return (1);

	return (palindrome(i + 1, n - 1, s));
}

/**
 * is_palindrome - a function that returns 1 if a string
 * is a palindrome and 0 if not.
 * @s: The phrase to check if it is a palindrome
 * Return: 1 if is positive 0 if is not
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);

	return (palindrome(0, counter(s), s));
}
