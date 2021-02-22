#include "holberton.h"

/**
 * _memcpy - function copies n bytes from memory
 * area src to memory area dest
 * @src: bytes to copy to dest
 * @dest: Destination bytes for been copied
 * @n: Number of bytes to copy
 * Return: The result of the copy
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n && src[i] != '\n'; i++)
	{
		src[i] = dest[i];
	}

	return (dest);
}
