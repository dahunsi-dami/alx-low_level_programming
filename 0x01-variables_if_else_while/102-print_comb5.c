#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */

/**
 * main - print all possible combinations of two two digits
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

	while (s <= 99)
	{
		c = s;
		while (c <= 99)
		{
			if (c != s)
			{
				putchar((s / 10) + 48);
				putchar((s % 10) + 48);
				putchar (' ');
				putchar(c / 10) + 48);
				putchar((c % 10) + 48);
				if (s != 98 || c != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			++c;
		}
		++s;
	}

	putchar('\n');

	return (0);
}
