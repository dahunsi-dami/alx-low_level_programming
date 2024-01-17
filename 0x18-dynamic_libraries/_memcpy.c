#include "main.h"
/**
 * _memcpy - a function that copies memory area.
 * @dest: where n bytes of memory area will be copied to.
 * @src: where buytes will be copied from.
 * @n: number of bytes to be copied from src.
 *
 * Description: the _memcpy() function copies
 * n bytes from memory area src to memory area dest.
 *
 * Return: a pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
