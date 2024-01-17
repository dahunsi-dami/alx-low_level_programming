#include "main.h"
/**
 * *_strncat - function that appends n bytes of src to dest.
 * @dest: the string to be appended to.
 * @src: the string to be appended.
 * @n: bytes of src to be appended.
 * Return: a pointer to the resulting string dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int k, lendest = 0;

	while (dest[lendest] != '\0')
	{
		lendest++;
	}

	for (k = 0; src[k] && k < n; k++)
	{
		dest[lendest + k] = src[k];
	}

	return (dest);
}
