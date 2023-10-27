#include <stdio.h>
#include "main.h"
/**
 * _strpbrk - searches a string for any set of bytes.
 * @s: the string to be searched for bytes in accept.
 * @accept: the string where chars will be cross-checked.
 *
 * Return: pointer to byte in s that's in accept else NULL.
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}

	}
	return (NULL);
}
