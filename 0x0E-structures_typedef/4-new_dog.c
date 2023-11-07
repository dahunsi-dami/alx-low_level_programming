#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * _strlen - calculates the length of any string.
 * @s: the string whose length will be calculated.
 *
 * Return: the length of the string.
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}

/**
 * _strcpy - copies string from src to dest.
 * @src: the string to be copied.
 * @dest: a pointer to buffer where string's pasted.
 *
 * Return: pointer to destination (dest).
 */
char *_strcpy(char *dest, char *src)
{
	int i, j = 0;

	while (src[j] != '\0')
		j++;
	for (i = 0; i < j; i++)
		dest[i] = src[i];
	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - creates a new dog.
 * @name: name of the new dog to be created.
 * @age: the age of the new dog to be created.
 * @owner: the name of the owner of this new dog.
 *
 * Return: pointer to new dog, else NULL.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len_one = _strlen(name);
	int len_two = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (len_one + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (len_two + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}

	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
