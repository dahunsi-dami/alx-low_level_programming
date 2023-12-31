#include <stdio.h>
#include<stdlib.h>
/**
 * main - prints opcodes of its own main function.
 * @argc: counts the number of arguments to main.
 * @argv: 1D array of arguments passed as strings.
 *
 * Return: always 0 (success).
 */
int main(int argc, char *argv[])
{
	int i, numbyte;
	char *ar;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	numbyte = atoi(argv[1]);

	if (numbyte < 0)
	{
		printf("Error\n");
		exit(2);
	}

	ar = (char *)main;

	for (i = 0; i < numbyte; i++)
	{
		printf("%02x", ar[i] & 0xFF);
		if (i != numbyte - 1)
		{
			printf(" ");
		}
	}
	printf("\n");

	return (0);
}
