#include "main.h"
#include <stdio.h>

/**
 * main  - prints largest prime factor of 612852475143
 * followed by new line
 *
 * Return: always 0 (success)
 */

int main(void)
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

	printf("%ld\n", hiprm);
	
	return (0);
}
