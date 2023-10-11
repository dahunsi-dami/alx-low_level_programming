#include "main.h"
#include <stdio.h>

/**
 * main - prints 1st 50 Fibonacci numbers followed by new line
 *
 * Return: always 0 (success)
 */

int main(void)
{
	long a = 1;
	long b = 2;
	int i;
	long sum;

	printf("%ld, ", a);
	printf("%ld, ", b);

	for (i = 0; i <= 47; i++)
	{
		if (i == 47)
		{
			sum = a + b;
			printf("%ld", sum);
		}
		else
		{
			sum = a + b;
			printf("%ld, ", sum);
			a = b;
			b = sum;
		}
	}
	printf("\n");
	return (0);
}
