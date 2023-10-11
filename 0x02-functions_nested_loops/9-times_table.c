#include "main.h"

/**
 * times_table - print the 9 times table starting with 0
 *
 * Return: unnecessary as function type is void
 */

void times_table(void)
{
	int n;
	int m;
	int p;

	while (n <= 9)
	{
		_putchar(48);

		m = 1;
		while (m <= 9)
		{
			_putchar(',');
			_putchar(' ');

			p = n * m;

			if (p <= 9)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((p / 10) + 48);
			}

			_putchar((p % 10) + 48);

			m++;
		}

		_putchar('\n');
		n++;
	}
}
