#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */

/**
 * main - print low case alphabet with new line
 *
 * Description: You can only use the putchar function and twice max
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char s;

	s = 'z';

	while (s >= 'a')
	{
		putchar(s);
		s--;
	}

	putchar('\n');

	return (0);
}
