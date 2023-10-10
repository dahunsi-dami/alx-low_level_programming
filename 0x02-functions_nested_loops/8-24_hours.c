#include "main.h"

/**
 * jack_bauer - print every min of Jack's day from to 23:59
 *
 * Return: returns no value
 */

void jack_bauer(void)
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;

	while (a <= 2)
	{
		while (b <= 9)
		{
			if ((a <= 2 && b <= 3) || (a <= 1 && b <= 9))
				while (c <= 5)
				{
					while (d <= 9)
					{
						_putchar(a + '0');
						_putchar(b + '0');
						_putchar(':');
						_putchar(c + '0');
						_putchar(d + '0');
						_putchar('\n');
						d++;
					}
					d = 0;
					c++;
			}
			c = 0;
			b++;
		}
		b = 0;
		a++;
	}
}
