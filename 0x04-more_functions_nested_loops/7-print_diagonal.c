#include "main.h"

/**
 * print_diagonal - draws diagonal line according to argument on terminal
 * @n: integer that dictates line length
 * Return: not necessary as function type is void
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int y, x;

		for (y = 0; y < n; y++)
		{
			for (x = 0; x < n; x++)
			{
				if (x == y)
				{
					_putchar('\\');
				} else if (x < y)
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
