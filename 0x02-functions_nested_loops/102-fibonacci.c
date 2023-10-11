#include "main.h"
#include <stdio.h>

/**
 * main - prints 1st 50 Fibonacci numbers followed by new line
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int a = 1;
	int b = 2;
	int i;
	int sum;

	printf("%d, ", a);
	printf("%d, ", b);

	for (i = 0; i <= 47; i++)
	{
		if (i == 47)
		{
			sum = a + b;
			printf("%d", sum);
		}
		else
		{
			sum = a + b;
			printf("%d, ", sum);
			a = b;
			b = sum;
		}
	}
	printf("\n");
	return (0);
}
