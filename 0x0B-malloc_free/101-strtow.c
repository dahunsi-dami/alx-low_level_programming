#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * strtow - prints space-separated strings into words.
 * @str: the string to be splitted.
 *
 * Return: a pointer to array of strings, else NULL if fail.
 */
char **strtow(char *str)
{
	char **nstrg;
	int i, j, k, l, m, char_len, worder = 0;

	if (str == NULL || strcmp( str, "") == 0)
		return (NULL);

	for (i = 0; str[i] != ' ' && str[i] != '\0'; i++)
	{
		i++;
	}

	char_len = i + 2;

	for (j = 0; str[j] != '\0'; j++)
	{
		if (str[j] == ' ' && str[j + 1] != ' ')
		{
			worder++;
		}
	}

	nstrg = malloc(sizeof(char) * char_len);

	if (nstrg == NULL)
		return (NULL);

	for (k = 0, l = 0; k < worder; k++)
	{
		for (m = 0; str[m] != ' ' && str[m + 1] == ' '; m++)
		{
			nstrg[l++] = str[m];
		}
		nstrg[l++] = '\0';
		nstrg[l++] = '\n';
	}

	return (nstrg);
}
