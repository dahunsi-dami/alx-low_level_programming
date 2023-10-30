#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatenates two strings.
 * @s1: the 1st string to be concatenated.
 * @s2: the 2nd string to be concatenated.
 *
 * Return: pointer to the new alloc, else NULL if fail.
 */
char *str_concat(char *s1, char *s2)
{
	char *concate;
	int len_one = 0, len_two = 0, new_len, i, j;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[len_one] != '\0')
		len_one++;

	while (s2[len_two] != '\0')
		len_two++;

	new_len = len_one + len_two + 1;

	concate = malloc(sizeof(char) * new_len);

	if (concate == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < len_one; i++)
		{
			concate[i] = s1[i];
		}

		for (j = 0; j < len_two; j++)
		{
			concate[j + len_one] = s2[j];
		}

		concate[new_len - 1] = '\0';

		return (concate);
	}
}
