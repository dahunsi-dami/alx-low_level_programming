#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints sum of two arguments after 1st arg.
 * @argc: number of arguments, including program name.
 * @argv: 1D array of arguments passed.
 *
 * Return: always 0 (success) or 1 (error).
 */
int main(int argc, char *argv[])
{
	int i, j, n, sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			char *nstr = argv[i];

			for (j = 0; nstr[j] != '\0'; j++)
			{
				if (nstr[j] >= '0' && nstr[j] <= '9')
				{
					continue;
				}
				else
				{
					printf("Error\n");
					return (1);
				}
			}

			n = atoi(nstr);
			sum += n;
		}

		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}

	return (0);
}
