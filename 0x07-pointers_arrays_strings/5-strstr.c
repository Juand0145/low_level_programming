#include "holberton.h"
#include <stdio.h>

/**
 * _strstr - function finds the first occurrence
 * of the substring needle in the string haystack.
 * The terminating null bytes (\0) are not compared
 * @haystack: Primary string
 * @needle: Substring yo check
 * Return: pointer to the begining of the string
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{

		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j]  != needle[j])
				break;
		}

		if (!needle[j])
			return (&haystack[i]);

	}
	return (NULL);
}
