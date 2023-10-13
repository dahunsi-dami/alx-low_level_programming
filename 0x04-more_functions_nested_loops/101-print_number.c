#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to be printed
 * Return: not necessary as function type is void
 */

void print_number(int n)
{
	unsigned int a = n;
	char m = '-';

	if (n < 0)
	{
		_putchar(m);
		a = -a;
	}

	if ((a / 10) > 0)
	{
		print_number(a / 10);
	}
	
	_putchar((a % 10) + '0');
}
