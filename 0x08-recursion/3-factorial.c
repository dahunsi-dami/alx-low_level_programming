#include "main.h"
/**
 * factorial - function that returns factorial of a number.
 * @n: the number whose factorial should be returned.
 * Return: -1 if n < 0, else 0 for success.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
