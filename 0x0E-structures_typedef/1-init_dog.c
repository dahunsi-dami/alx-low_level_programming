#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - intializes a var of type struct dog.
 * @d: a pointer to the variable to initialize.
 * @name: the name of the dog to initialize.
 * @age: the age of the dog to initialize.
 * @owner: name of dog owner to initialize.
 *
 * Return: unnecessary as function type is void.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
