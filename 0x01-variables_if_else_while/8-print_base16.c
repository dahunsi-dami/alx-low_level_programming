#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */

/**
 * main - print all numbers of base 16 in lowercase followed by new line
 *
 * Description: You can only use the putchar function and thrice max
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int s;
	char c;

	s = 0;
	c = 'a';

	while (s < 10)
	{
		putchar(s + '0');
		s++;
	}

	while (c < 'g')
	{
		putchar(c);
		c++;
	}

	putchar('\n');

	return (0);
}
