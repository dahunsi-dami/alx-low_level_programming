#include "main.h"

/**
 * print_square - draws a square followed by a new line
 * @size: size of the square to be printed
 * Return: not necessary as function type is void
 */

void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		int y, x;

		for (y = 0; y < size; y++)
		{
			for (x = 0; x < size; x++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
