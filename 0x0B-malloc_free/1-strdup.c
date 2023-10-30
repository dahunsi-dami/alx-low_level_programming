#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - returns pointer to new alloc space in memory
 * which contains copy of given string parameter.
 *
 * @str: the string parameter whose copy is to be stored.
 *
 * Return: pointer to the new alloc space, else
 * NULL if insufficient memory.
 */
char *_strdup(char *str)
{
	char *sar;
	int length = 0, i;

	if (str == 0)
	{
		return (NULL);
	}

	while (str[length] != '\0')
	{
		length++;
	}

	sar = malloc(sizeof(char) * length);

	if (sar == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < length; i++)
		{
			sar[i] = str[i];
		}

		return (sar);
	}
}
