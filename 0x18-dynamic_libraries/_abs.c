#include "main.h"

/**
 * _abs - computes absolute value of an integer
 * @n: integer to be computed to absolute value
 * Return: returns computed absolute value
 */

int _abs(int n)
{
	if (n < 0)
	{
		int b;

		b = n * -1;

		return (b);
	}
	else
	{
		return (n);
	}
}
