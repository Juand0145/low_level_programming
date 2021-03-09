#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

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

	perro = malloc(sizeof(dog_t));
	if (perro == NULL)
		return (NULL);

	perro->name = malloc(sizeof(name));
	if (perro->name == NULL)
	{
		free(perro);
		return (NULL);
	}
	perro->owner = malloc(sizeof(owner));
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
