#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * free_dog - a function that frees dogs
 *
 * @d: na structure of type dog_t
 *
 * Return: (void)
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
