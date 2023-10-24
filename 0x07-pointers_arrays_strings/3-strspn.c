#include <stdio.h>
#include "main.h"
/**
 * _strspn - gets length of prefix substring.
 * @s: the string to be counted.
 * @accept: the string where chars will be cross-checked.
 *
 * Return: number of bytes in s that are present in accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, a;

	for (i = 0; s[i] != '\0'; i++)
	{
		a = 1;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				a = 0;
				break;
			}
		}

		if (a == 1)
			break;
	}
	return (i);
}
