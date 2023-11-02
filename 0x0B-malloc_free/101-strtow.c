#include <stdlib.h>
#include <string.h>
/**
 * wordcounter - function that counts number of words in string
 * @str: the string that has the words in it.
 *
 * Return: integer (number of words counted).
 */
int wordcounter(char *str)
{
	int w;

	while (*str != '\0')
	{
		if (*str == ' ')
			str++;
		else
		{
			while (*str != ' ' && *str != '\0')
				str++;
			w++;
		}
	}
	return (w);
}
/**
 * release_array - function that frees all dynamically alloc arrays.
 * @arry: the array to be released.
 * @i: the index of the array.
 *
 * Return: unnecessary as function prototype is void.
 */
void release_array(char **arry, int i)
{
	if (arry != NULL && i != 0)
	{
		while (i >= 0)
		{
			free(arry[i]);
			i--;
		}
		free(arry);
	}
}
/**
 * strtow - prints space-separated strings into words.
 * @str: the string to be splitted.
 *
 * Return: a pointer to array of strings, else NULL if fail.
 */
char **strtow(char *str)
{
	char **nstrg;
	int i, j, k, wc, wi;

	if (str == NULL || *str == '\0' || strcmp(str, "") == 0)
		return (NULL);
	wc = wordcounter(str);
	nstrg = malloc(sizeof(char *) * (wc + 1));
	if (nstrg == NULL || wc == 0)
		return (NULL);
	for (i = j = 0; i < wc; i++)
	{
		for (wi = j; str[wi] != '\0'; wi++)
		{
			if (str[wi] == ' ')
				j++;
			if (str[wi] != ' ' && (str[wi + 1] ==
						' ' || str[wi + 1] == '\0'))
			{
				nstrg[i] = malloc((wi - j + 2) * sizeof(char));
				if (nstrg[i] == NULL)
				{
					release_array(nstrg, i);
					return (NULL);
				}
				break;
			}
		}
		for (k = 0; j <=  wi; j++, k++)
			nstrg[i][k] = str[j];
		nstrg[i][k] = '\0';
	}
	nstrg[i] = NULL;
	return (nstrg);
}
