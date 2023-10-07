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

	for (s = 0; s <= 98; s++)
	{
		for (c = s + 1; c <= 98; c++)
		{
			putchar((s /= 10) = '0');
			putchar((s % 10) + '0');
			putchar (' ');
			putchar((c /= 10) = '0');
			putchar((c % 10) + '0');
			if (s == 98 && c == 98)
			continue;
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
