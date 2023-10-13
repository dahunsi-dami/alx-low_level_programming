#include "main.h"
#include <stdio.h>

/**
 * high_prime  - prints largest prime factor of 612852475143
 * followed by new line
 * Return: always 0 (success)
 */

long high_prime(void)
{
	long hiprm = -1;
	long n = 612852475143;
	long prnum;

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

	return (hiprm);
}

int main(void)
{

	printf("%ld\n", high_prime());

	return (0);
}
