#include "main.h"
/**
 * _pow_recursion - function that returns x raised to power y.
 * @x: the number to be exponented or raised.
 * @y: the power to which the number should be raised.
 * Return: -1 if y < 0, else 0 for success.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	if (y == 0)
	{
		return (1);
	}

	return (x * _pow_recursion(x, y - 1));
}
