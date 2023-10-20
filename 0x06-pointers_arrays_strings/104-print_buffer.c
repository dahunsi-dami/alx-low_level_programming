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
	int a, c;

	a = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (a < size)
	{
		int e = (size - a < 10) ? size - a : 10;

		printf("%08x: ", a);

		for (c = 0; c < e; c++)
		{
			printf("%02x", *(b + a + c));
			if (c % 2)
			{
				printf(" ");
			}
		}
		for (c = 0; c < 10 - e; c++)
			printf("   ");
		for (c = 0; c < e; c++)
		{
			char d = *(b + a + c);

			if (d < 32 || d > 126)
			{
				d = '.';
			}
			printf("%c", d);
		}
		printf("\n");
		a += 10;
	}
}
