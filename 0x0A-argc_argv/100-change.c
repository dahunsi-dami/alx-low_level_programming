#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints min number of coins to make change for an amount of money.
 * @argc: number of arguments, including program name.
 * @argv: 1D array of arguments passed.
 *
 * Return: always 0 (success) or 1 (error).
 */
int main(int argc, char *argv[])
{
	int cents, i = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	while (cents > 0)
	{
		i++;
		if ((cents - 25) >= 0)
		{
			cents -= 25;
			continue;
		}
		if ((cents - 10) >= 0)
		{
			cents -= 10;
			continue;
		}
		if ((cents - 5) >= 0)
		{
			cents -= 5;
			continue;
		}
		if ((cents - 2) >= 0)
		{
			cents -= 2;
			continue;
		}
		if ((cents - 1) == 0)
			cents -= 1;
	}
	printf("%d\n", i);
	return (0);
}
