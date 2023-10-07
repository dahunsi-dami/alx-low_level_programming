#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */

/**
 * main - print all possible combinations of single digit numbers
 *
 * Description: numbers separated by comma in ascending order.
 * Use putchar function only.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int s;

	s = 0;

	while (s < 10)
	{
		putchar(s + '0');
		while (s < 9)
		{
			putchar(',');
			putchar(' ');
			break;
		}
		s++;
	}

	putchar('\n');

	return (0);
}
