#include "main.h"
#include <stdio.h>

/**
 * main - prints 1st 98 Fibonacci numbers followed by new line
 *
 * Return: always 0 (success)
 */

int main(void)
{
	unsigned long a = 1;
	unsigned long b = 2;
	int i;
	unsigned long sum;

	printf("%lu, ", a);
	printf("%lu, ", b);

	for (i = 0; i <= 95; i++)
	{
		if (i == 95)
		{
			sum = a + b;
			printf("%lu", sum);
		}
		else
		{
			sum = a + b;
			printf("%lu, ", sum);
			a = b;
			b = sum;
		}
	}
	printf("\n");
	return (0);
}
