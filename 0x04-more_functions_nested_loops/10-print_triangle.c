#include "main.h"

/**
 * print_triangle - draws a triangle followed by a new line
 * @size: size of the triangle to be printed
 * Return: not necessary as function type is void
 */

void print_triangle(int size)
{
	int y, x;

	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		for (y = 1; y <= size; y++)
		{
			for (x = 1; x <= size; x++)
			{
				if ((x + y) <= size)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
}
