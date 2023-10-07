#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */

/**
 * main - print all possible combinations of two digits
 *
 * Description: numbers separated by comma in ascending order.
 * Two digits must differ, and a combinations shouldn't be repeated.
 *
 * Use putchar function only.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int s;
	int c;
	int f;

	for (s = '0'; s < '9'; s++)
	{
		for (c = s + 1; c <= '9'; c++)
		{
			for (f = c + 1; f <= '9'; f++)
			{
				if ((s != c) != f)
				{
					putchar(s);
					putchar(c);
					putchar(f);
					if (s == '7' && c == '8')
					continue;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
