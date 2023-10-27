#include "main.h"
#include <stdio.h>
/**
 * *_strncpy - function that copies a string, imitating man strcpy.
 * @dest: the string to be copied to.
 * @src: the string to be copied.
 * @n: bytes of src to be copied.
 * Return: a pointer to the resulting string dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int k;


	for (k = 0; src[k] != '\0' && k < n; k++)
	{
		dest[k] = src[k];
	}

	for (; k < n; k++)
	{
		dest[k] = '\0';
	}

	return (dest);
}
