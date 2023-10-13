#include "main.h"
#include <stdio.h>

/**
 * main - prints largest prime factor of 612852475143 followed by new line
 * @n: integer to be factorized
 * Return: always 0 (success)
 */

int high_prime(long n)
{
	long hiprm = -1, n, prnum, num;

	while (n % 2 == 0)
	{
		hiprm = 2;

		n /= 2;
	}

	for (prnum = 3; prnum * prnum <= n; prnum += 2)
	{
		while (n % prnum == 0)
		{
			hiprm = prnum;

			n /= prnum;
		}
	}

	if (n > 2)
	{
		hiprm = n;
	}

	num = 612852475143;

	printf("%ld\n", high_prime(num));

	return (0);
}
