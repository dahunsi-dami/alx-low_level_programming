#include "variadic_functions.h"
/**
 * sum_them_all - returns sum of all its parameters.
 * @n: number of parameters passed to sum_them_all.
 * @...: variable parameters.
 *
 * Return: if n is 0, return 0, else the sum.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list ap;

	if (n == 0)
		return (0);
	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg (ap, int);
	va_end(ap);

	return (sum);
}
