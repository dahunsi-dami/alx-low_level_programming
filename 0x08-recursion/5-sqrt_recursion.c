#include "main.h"
/**
 * sqrt_recurse - calculates natural square root recursively.
 * @n: the number whose natural square root should be calculated.
 * @sqr: the integer guess for the square root
 * Return: square root if found, else -1.
 */
int sqrt_recurse(int n, int sqr);

/**
 * _sqrt_recursion - function that returns natural square root of number.
 * @n: the number whose square root should be returned.
 * Return: -1 if n has no natural square root, else 0 for success.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	return (sqrt_recurse(n, 0));
}

int sqrt_recurse(int n, int sqr)
{
	if (sqr * sqr == n)
	{
	return (sqr);
	}

	if (sqr * sqr > n)
	{
	return (-1);
	}

	return (sqrt_recurse(n, sqr + 1));
}
