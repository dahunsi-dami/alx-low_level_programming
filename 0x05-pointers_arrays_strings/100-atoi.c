#include <stdio.h>
#include "main.h"
/**
 * _atoi - converts string to an integer
 * @s: string to be converted
 * Return: returns an integer
 */
int _atoi(char *s)
{
	int a = 0;
	int b = 1;
	int c = 0;
	unsigned int d = 0;

	while (s[a])
	{
		if (s[a] == 45)
		{
			b *= -1;
		}
		while (s[a] >= 48 && s[a] <= 57)
		{
			c = 1;

			d = (d * 10) + (s[a] - '0');
			a++;
		}
		if (c == 1)
		{
			break;
		}
		a++;
	}
	d *= b;
	return (d);
}
