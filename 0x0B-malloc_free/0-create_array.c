#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates an array of chars and
 * initializes it with a specific char.
 *
 * @size: size of the array to be created.
 * @c: the char to be initialized with.
 *
 * Return: pointer to the array, else NULL if it fails.
 */
char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	ar = malloc(sizeof(char) * size);

	if (ar == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			ar[i] = c;
		}

		return (ar);
	}
}
