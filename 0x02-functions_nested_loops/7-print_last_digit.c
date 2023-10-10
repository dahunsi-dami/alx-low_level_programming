#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 * @a: integer whose last digit will be printed
 * Return: returns value of last digit
 */

int print_last_digit(int a)
{
	int b;

	b = a % 10;

	if (b < 0)
	{
		b *= -1;
	}

	_putchar(b + '0');

	return (b);
}
