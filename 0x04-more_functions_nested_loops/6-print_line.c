#include "main.h"

/**
 * print_line - draws straight line according to argument in terminal
 * @n: integer that dictates line length
 * Return: not necessary as function type is void
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
