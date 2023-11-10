#include "variadic_functions.h"
/**
 * print_numbers - prints numbers, followed by new line.
 * @separator: string to be printed between numbers.
 * @n: number of integers passed to the function.
 * @...: variable number of numbers to be printed.
 *
 * Return: unnecessary as function returns void.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list nm;

	va_start(nm, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(nm, int));

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(nm);
}
