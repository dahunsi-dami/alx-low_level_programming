#include "main.h"
#include <stdio.h>
/**
 * main - prints 1st 98 Fibonacci numbers followed by new line
 * Return: always 0 (success)
 */
int main(void)
{
	unsigned long a = 1, b = 2, s = 0, a_hf1, a_hf2, b_hf1, b_hf2, hf1, hf2;
	int i;

	printf("%lu, %lu, ", a, b);

	for (i = 0; i < 90; i++)
	{
		s = a + b;

		printf("%lu, ", s);
		a = b;
		b = s;
	}
	a_hf1 = a / 10000000000;
	a_hf2 = a % 10000000000;
	b_hf1 = b / 10000000000;
	b_hf2 = b % 10000000000;

	for (i = 90; i < 96; i++)
	{
		hf1 = a_hf1 + b_hf1;
		hf2 = a_hf2 + b_hf2;
		if (hf2 > 9999999999)
		{
			hf1 += 1;
			hf2 %= 10000000000;
		}
		printf("%lu%lu", hf1, hf2);
		if (i != 95)
			printf(", ");
		a_hf1 = b_hf1;
		a_hf2 = b_hf2;
		b_hf1 = hf1;
		b_hf2 = hf2;
	}

	printf("\n");
	return (0);
}
