#include "main.h"
/**
 * _strlen - returns length of a string
 * @s: character whose length is measured
 * Return: returns 0 always (Success)
 */
int _strlen(char *s)
{
	size_t slength = 0;

	while (*s++)
	slength++;

	return (slength);
}
