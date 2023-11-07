#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - frees dog.
 * @d: pointer to struct dog to be freed.
 *
 * Return: pointer to new dog, else NULL.
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
