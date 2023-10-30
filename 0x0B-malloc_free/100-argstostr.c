#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr - concatenates all arguments of a program.
 * @ac: the count of arguments to the program.
 * @av: pointer to pointer to 1D vector of arguments.
 *
 * Return: a pointer to the new string, else NULL if fail.
 */
char *argstostr(int ac, char **av)
{
	char *str
	int i = 0, j, k, char_len = 0;

	if ((ac == 0) || (av == NULL))
	{
		return (NULL);
	}

	while (i < ac)
	{
		char_len += strlen(av[i]) + 1;
		i++;
	}

	str = malloc(sizeof(char) * (char_len + 1));

	if (str == NULL)
		return (NULL);

	for (i = 0; j = 0; i++)
	{
		for (k = 0; av[i][k] != '\0'; k++)
		{
			str[j++] = av[i][k];
		}
		str[j++] = '\n';
	}

	str[j] = '\0';

	return (str);
}
