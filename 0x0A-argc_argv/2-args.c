#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments it gets.
 * @argc: number of arguments, including program name.
 * @argv: 1D array of arguments passed.
 *
 * Return: always 0 (to denote success).
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
