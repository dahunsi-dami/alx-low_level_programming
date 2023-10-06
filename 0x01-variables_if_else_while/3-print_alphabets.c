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
	char S;

	s = 'a';
	S = 'A';

	while (s <= 'z')
	{
		putchar(s);
		s++;
	}

	while (S <= 'Z')
	{
		putchar(S);
		S++;
	}

	putchar('\n');

	return (0);
}
