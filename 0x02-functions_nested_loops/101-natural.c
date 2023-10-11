#include "main.h"
#include <stdio.h>

/**
 * main - sums multiples of 3 and 5 below 1024
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int a = 0;
	int sum;

	while (a < 1024)
	{
		if ((a % 3 == 0) || (a % 5 == 0))
		{
			sum += a;
			break;
		}
		++a;
	}
	printf("%d\n", sum);
	return (0);
}
