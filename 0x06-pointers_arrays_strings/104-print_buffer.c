#include "main.h"
#include <stdio.h>
/**
 * print_buffer - prints a buffer.
 * @b: pointer to buffer (character array) to be printed.
 * @size: number of bytes of buffer to be printed.
 * Return: unecessary as function type is void.
 */
void print_buffer(char *b, int size)
{
	int a, e, c;

	a = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (a < size)
	{
		e = size - a < 10 ? size - a : 10;
		printf("%08x: ", a);

		for (c = 0; c < 10; c++)
		{
			if (c < e)
				printf("%02x", *(b + a + c));
			else
				printf(" ");
			if (c % 2)
			{
				printf(" ");
			}
		}
		for (c = 0; c < e; c++)
		{
			int d = *(b + a + c);

			if (d < 32 || d > 132)
			{
				d = '.';
			}
			printf("%c", d);
		}
		if (c == e - 1)
			printf("%02x", *(b + a + c));
		printf("\n");
		a += 10;
	}
}
