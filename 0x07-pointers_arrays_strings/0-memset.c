#include <stdio.h>
#include "main.h"
/**
 * _memset - a function that fills memory with a constant byte.
 * @s: pointer to a section in memory.
 * @b: byte to be slotted in n bytes of memory stored in s.
 * @n: represents number of bytes to be filled from base position.
 *
 * Description: the _memset() function fills 1st n bytes of
 * memory area pointed to by s with constant byte b.
 * Return: a pointer to fill memory s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
