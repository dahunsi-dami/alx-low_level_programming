#include "main.h"

/**
 * print_times_table - print n times table starting with 0
 *
 * @n: integer whose times table will be printed
 *
 * Return: unnecessary as function type is void
 */

void print_times_table(int n)
{
	int a, m, p;

	if (n <= 15 && n >= 0)
	{
		for (a = 0; a <= n; ++a)
		{
			_putchar(48);

			for (m = 1; m <= n; ++m)
			{
				_putchar(',');
				_putchar(' ');

				p = a * m;

				if (p <= 9)
					_putchar(' ');

				if (p <= 99)
					_putchar(' ');

				if (p >= 100)
				{
					_putchar((p / 100) + 48);
					_putchar((p / 10) % 10 + 48);
				}
				else if (p <= 99 && p >= 10)
					_putchar((p / 10) + 48);
				_putchar((p % 10) + 48);
			}
			_putchar('\n');
		}
	}
}
