#include "main.h"

/**
 * _abs - computes absolute value of an integer
 * @a: integer to be computed to absolute value
 * Return: returns computed absolute value
 */

int _abs(int a)
{
	if (a < 0)
	{
		int b;

		b = a * -1;

		return (b);
	}
	else
	{
		return (a);
	}
}
