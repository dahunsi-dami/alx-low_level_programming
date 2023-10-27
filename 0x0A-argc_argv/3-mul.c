#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints product of two arguments after 1st arg.
 * @argc: number of arguments, including program name.
 * @argv: 1D array of arguments passed.
 *
 * Return: always 0 (to denote success).
 */
int main(int argc, char *argv[])
{
	int i, mult = 1;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			int num = atoi(argv[i]);

			mult *= num;
		}

		printf("%d\n", mult);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
