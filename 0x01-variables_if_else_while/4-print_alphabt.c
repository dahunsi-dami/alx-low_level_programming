#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */

/**
 * main - Prints alphabet in lowercase followed by new linei
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char s;

	s = 'a';

	while (s <= 'z')
	{
		while (s != 'q' && s != 'e')
		{
			putchar(s);
			break;
		}
		s++;
	}

	putchar('\n');

	return (0);
}
