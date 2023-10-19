#include "main.h"
#include <stdio.h>
/**
 * *string_toupper - changes all lowcase letters of string to upcase.
 * @str: the string whose lowcase will be switched to upcase.
 * Return: return changed string.
 */

char *string_toupper(char *str)
{
	int i, length = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	for (i = 0; i < length ; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] -= 32;
		}
		else
		{
			continue;
		}
	}
	return (str);
}
