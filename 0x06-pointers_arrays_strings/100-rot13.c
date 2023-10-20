#include "main.h"
#include <stdio.h>
/**
 * *rot13 - encodes a string into rot13.
 * @str: the string whose select letters will be encoded.
 * Return: return changed string.
 */

char *rot13(char *str)
{
	int i, element = 0;

	char letters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rots[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (str[element] != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (str[element] == letters[i])
			{
				str[element] = rots[i];
				break;
			}
		}
		element++;
	}
	return (str);
}
