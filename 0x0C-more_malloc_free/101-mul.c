#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * all_digits - checks if a string isn't composed of digits.
 * @p: the string whose characters are to be checked.
 *
 * Return: 0 if any character isn't a digit, else 1.
 */
int all_digits(char *p)
{
	int i = 0;

	while (p[i])
	{
		if ((p[i] < '0' || p[i] > '9'))
		{
			_putchar('E');
			_putchar('r');
			_putchar('r');
			_putchar('o');
			_putchar('r');
			exit(98);
		}
		i++;
	}
	return (1);
}
/**
 * err - prints Error, new line, and exit with status 98.
 *
 * Return: unnecessary as function type is void.
 */
void err(void)
{
	_putchar('E');
	_putchar('r');
	_putchar('r');
	_putchar('o');
	_putchar('r');
	_putchar('\n');
	exit(98);
}
/**
 * _strlen - calculates length of a string.
 * @p: the string whose length is to be calculated.
 *
 * Return: the calculated length of the string.
 */
int _strlen(char *p)
{
	int i = 0;

	while (p[i] != '\0')
	{
		i++;
	}

	return (i);
}
/**
 * main - finds product of two positive numbers.
 * @argc: the number of arguments passed to main.
 * @argv: the 1D array of arguments passed to main.
 *
 * Return: product of the two positive numbers.
 */
int main(int argc, char *argv[])
{
	char *v1 = argv[1], *v2 = argv[2];
	int leno = _strlen(v1), lent = _strlen(v2), len, *prod, i, d1, d2;
	int carry = 0, j = 0;

	if (argc != 3 || !all_digits(v1) || !all_digits(v2))
		err();
	len = leno + lent + 1;
	prod = malloc(sizeof(int) * len);
	if (!prod)
		return (1);
	for (i = 0; i <= leno + lent; i++)
		prod[i] = 0;
	for (leno = leno - 1; leno >= 0; leno--)
	{
		d1 = v1[leno] - '0';
		carry = 0;
		for (lent = _strlen(v2) - 1; lent >= 0; lent--)
		{
			d2 = v2[lent] - '0';
			carry += prod[leno + lent + 1] + (d1 * d2);
			prod[leno + lent + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			prod[leno + lent + 1] += carry;
	}
	for (i = 0; i < len - 1; i++)
	{
		if (prod[i])
			j = 1;
		if (j)
			_putchar(prod[i] + '0');
	}
	if (!j)
		_putchar('0');
	_putchar('\n');
	free(prod);
	return (0);
}
