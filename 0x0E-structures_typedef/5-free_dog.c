#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * free_dog -  a function that frees dogs.
 * @d: The structure call dog
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free (d);
	}
}
