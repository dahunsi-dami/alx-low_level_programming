#include "main.h"
#include <stdio.h>
/**
 * *cap_string - capitalize all words of a string.
 * @str: the string whose words will be capitalized.
 * Return: return changed string.
 */

char *cap_string(char *str)
{
	int i, length = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	for (i = 0; i < length ; i++)
	{
		if (str[i] == ' ' || str[i] == ',' || str[i] == ';' ||
				str[i] == '\n' || str[i] == '\t' ||
				str[i] == '.' || str[i] == '!' || str[i] == '?' ||
				str[i] == '"' || str[i] == '(' ||
				str[i] == ')' || str[i] == '{' ||
				str[i] == '}')
		{
			if (str[i + 1] >= 97 && str[i + 1 <= 122])
			{
				str[i + 1] -= 32;
			}
		}
	}
	return (str);
}
