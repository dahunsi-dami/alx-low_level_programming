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
	int i, j, k, word_len = 0, worder = 0;

	if (str == NULL || strcmp(str, "") == 0)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ' && (i == 0 || str[i - 1] != ' '))
			worder++;
	}
	nstrg = malloc(sizeof(char *) * (worder + 1));

	if (nstrg == NULL)
		return (NULL);
	for (i = 0, j = 0; i < worder; i++)
	{
		while (str[j] == ' ')
			j++;
		word_len = 0;

		while (str[j + word_len] != ' ' && str[j + word_len] != '\0')
			word_len++;
		nstrg[i] = malloc((word_len + 1) * sizeof(char));

		if (nstrg[i] == NULL)
		{
			for (k = 0; k < i; k++)
				free(nstrg[k]);
			free(nstrg);
			return (NULL);
		}
		for (k = 0; k < word_len; k++)
			nstrg[i][k] = str[j + k];
		nstrg[i][k] = '\0';
		
		j += word_len;
	}
	nstrg[i] = NULL;

	return (nstrg);
}
