#include "main.h"
#include <stdio.h>
/**
 * main - print sum of even-valued numbers in Fibonacci sequence till 4 million
 * Return: always 0 (success)
 */
int main(void)
{
	long a = 1, b = 2, evensum = 2, sum;
	int i;

	for (i = 0; i <= 47; i++)
	{
		if (i == 47)
		{
			sum = a + b;
			printf("%ld", evensum);
			break;
		}
		else
		{
			sum = a + b;
			if (sum % 2 == 0 && sum <= 4000000)
				evensum += sum;
			else if (sum > 4000000)
			{
				printf("%ld", evensum);
				break;
			}
			else
				sum += 0;
			a = b;
			b = sum;
		}
	}
	printf("\n");
	return (0);
}
