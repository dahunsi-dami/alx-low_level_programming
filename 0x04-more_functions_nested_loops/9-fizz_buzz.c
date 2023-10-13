#include "main.h"
#include <stdio.h>
/**
 * main - print 1-100 and replace multiples of 3 with Fizz, multiples of 5
 * with Buzz, and multiples of both 3 and 5 with FizzBuzz. End it all
 * with a new line.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if (a % 3 == 0 && !(a % 5 == 0))
			printf("Fizz");
		else if (a % 5 == 0 && !(a % 3 == 0))
			printf("Buzz");
		else if (a % 3 == 0 && a % 5 == 0)
			printf("FizzBuzz");
		else
			printf("%d", a);

		if (a != 100)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
