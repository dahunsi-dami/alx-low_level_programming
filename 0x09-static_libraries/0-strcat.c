#include "main.h"
#include <stdio.h>
/**
 * *_strcat - function that concatenates two strings.
 * @dest: the string to be appended to.
 * @src: the string to be appended.
 * Return: a pointer to the resulting string dest.
 */

char *_strcat(char *dest, char *src)
{
	int k, lendest = 0, lensrc = 0;

	while (dest[lendest] != '\0')
	{
		lendest++;
	}

	while (src[lensrc] != '\0')
	{
		lensrc++;
	}

	for (k = 0; k <= lensrc; k++)
	{
		dest[lendest + k] = src[k];
	}

	return (dest);
}
