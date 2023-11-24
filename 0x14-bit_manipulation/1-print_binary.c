#include "main.h"
/**
 * _rtopow - calculates a base raised to a power.
 * @base: the number to raised to a power.
 * @power: the power to raise the base to.
 *
 * Return: the result of the base raised to the power.
 */
unsigned long int _rtopow(unsigned int base, unsigned int power)
{
	unsigned int i;
	unsigned long int n;

	n  = 1;
	for (i = 1; i <= power; i++)
		n *= base;
	return (n);
}
/**
 * print_binary - prints binary representation of a number.
 * @n: the number to be converted to binary.
 *
 * Return: unnecessary as function returns void.
 */
void print_binary(unsigned long int n)
{
	unsigned long int divisor, check;
	char flag = 0;

	divisor = _rtopow(2, sizeof(unsigned long int) * 8 - 1);
	while (divisor != 0)
	{
		check = divisor & n;
		if (check == divisor)
		{
			flag = 1;
			_putchar('1');
		}
		else if (divisor == 1 || flag == 1)
			_putchar('0');
		divisor >>= 1;
	}
}
