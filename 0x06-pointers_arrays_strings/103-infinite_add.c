#include "main.h"
#include <stdio.h>
/**
 * *infinite_add - adds two numbers.
 * @n1: the 1st number to be added.
 * @n2: the 2nd number to be added.
 * @r: where addition of n1 and n2 will be stored.
 * @size_r: the length of result
 * Return: pointer to the result stored in r or 0.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int a = 0, b = 0, c, d = 0, i, j, k = 0;

	while (n1[a] != '\0')
		a++;
	while (n2[b] != '\0')
		b++;
	if (a > b)
		d = a;
	else
		d = b;

	if (d + 1 > size_r)
		return (0);
	r[d] = '\0';
	for (c = d - 1; c >= 0; c--)
	{
		a--;
		b--;
		if (a >= 0)
			i = n1[a] - '0';
		else
			i = 0;
		if (b >= 0)
			j = n2[b] - '0';
		else
			j = 0;
		r[c] = (i + j + k) % 10 + '0';
		k = (i + j + k) / 10;
	}
	if (k == 1)
	{
		r[d + 1] = '\0';
		if (d + 2 > size_r)
			return (0);
		while (d-- >= 0)
			r[d + 1] = r[d];
		r[0] = k + '0';
	}
	return (r);
}
