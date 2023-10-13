#include "main.h"
#include <stdio.h>

/**
 * main - prints largest prime factor of 612852475143 followed by new line
 * Return: always 0 (success)
 */

int main(void)
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
