#include "main.h"
#include <stdio.h>
/**
 * *leet - encodes a string into 1337.
 * @str: the string whose select letters will be encoded.
 * Return: return changed string.
 */

char *leet(char *str)
{
	int i, element = 0;

	int lowercase[] = {97, 101, 111, 116, 108};
	int upcase[] = {65, 69, 79, 84, 76};
	int leetcase[] = {52, 51, 48, 55, 49};

	while (str[element] != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if ((str[element] == lowercase[i]) ||
					(str[element] == upcase[i]))
			{
				str[element] = leetcase[i];
				break;
			}
		}
		element++;
	}
	return (str);
}
