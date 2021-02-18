#include "holberton.h"

/**
 * rot13 - Transltae a phrase in ROT 13
 * @s: the phrase we want to Translate
 * Return: The prhase trnaslated
 */
char *rot13(char *s)
{
	char *abec = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *rot13 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; abec[j] != '\0'; j++)
		{
			if (s[i] == abec[j])
			{
				s[i] = rot13[j];
				break;
			}
		}
	}
	return (s);
}
