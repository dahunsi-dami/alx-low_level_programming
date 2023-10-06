#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */

/**
 * main - print single digit numbers of base 10 from 0 with a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int s;

	s = 0;

	while (s < 10)
	{
		putchar((s + '0'));
		s++;
	}

	putchar('\n');

	return (0);
}
