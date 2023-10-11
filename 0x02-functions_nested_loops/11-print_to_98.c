#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - function that prints all natural numbers from argument to 98
 *
 * @n: integer where print of natural numbers starts
 *
 * Return: unnecessary as function type is void
 */

void print_to_98(int n)
{
	if (n > 98)
	{
		int i = n;

		while (i > 98)
		{
			printf("%d, ", i);
			--i;
		}
	}
	else
	{
		int i = n;

		while (i < 98)
		{
			printf("%d, ", i);
			++i;
		}
	}
	printf("98\n");
}
