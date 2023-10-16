#include <stdio.h>
#include "main.h"
/**
 * rev_string - reverses a string
 * @s: string to be reversed
 * Return: unnecessary for function type void
 */
void rev_string(char *s)
{
	int i = 0, j, k;
	char a;

	while (s[i] != '\0')
	{
		i++;
	}
	j = i - 1;

	for (k = 0; j >= 0 && k < j; j--, k++)
	{
		a = s[k];
		s[k] = s[j];
		s[j] = a;
	}
}
