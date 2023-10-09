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
	int a = 0;
	int b;

	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			putchar((a / 10) + '0');
			putchar((a % 10) + '0');
			putchar (' ');
			putchar((b / 10) + '0');
			putchar((b % 10) + '0');

			if (a != 98 || b != 99)
			{
				putchar(',');
				putchar(' ');
			}
			++b;
		}
		++a;
	}

	putchar('\n');

	return (0);
}
