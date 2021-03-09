#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * counter - Count the numebr of character in a string
 * @s: The strin we want to counter
 * Return: The number of characters
 */
int counter(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;

	return (i);

}

/**
 * _strcpy - Copy and string
 * @dest: The string of destination
 * @src: The string of source
 * Return: The string of destnation
 */
char *_strcpy(char *dest, char *src)
{
	int i, j;

	for (i = 0; src[i] != '\0'; i++)
		;

	for (j = 0; j < i; j++)
		dest[j] = src[j];

	dest[j] = '\0';

	return (dest);
}

/**
 * new_dog - a function that creates a new dog.
 * @name: Name of the dog
 * @age: Age of teh dog
 * @owner: Owner of the dog:
 * Return: Pointer to the new dog, if it fail NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *perro;
	int count_1, count_2;

	count_1 = counter(name);
	count_2 = counter(owner);

	perro = malloc(sizeof(dog_t));
	if (perro == NULL)
		return (NULL);

	perro->name = malloc(sizeof(char) * (count_1 + 1));
	if (perro->name == NULL)
	{
		free(perro);
		return (NULL);
	}
	perro->owner = malloc(sizeof(char) * (count_2 + 1));
	if (perro->owner == NULL)
	{
		free(perro);
		free(perro->name);
		return (NULL);
	}
	_strcpy(perro->name, name);
	_strcpy(perro->owner, owner);
	perro->age = age;

	return (perro);
}
