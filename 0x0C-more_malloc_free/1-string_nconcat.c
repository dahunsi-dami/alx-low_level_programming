#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - concatenates 2 strings, s1 and 1st n bytes of s2.
 * @s1: the 1st string to be concatenated.
 * @s2: the 2nd string to be concatenated.
 * @n: the 1st n bytes of s2 to be appended to s1.
 *
 * Return: return pointer to new string, else NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *nstrg;
	unsigned int len_one = 0, len_two = 0, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len_one] != '\0')
	{
		len_one++;
	}

	while (s2[len_two] != '\0')
	{
		len_two++;
	}

	if (n >= len_two)
		n = len_two;

	nstrg = malloc(sizeof(char) * (len_one + n + 1));

	if (nstrg == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		nstrg[i] = s1[i];

	for (j = 0; j < n && s2[j] != '\0'; j++)
	{
		nstrg[i] = s2[j];
		i++;
	}

	nstrg[i] = '\0';

	return (nstrg);

}
