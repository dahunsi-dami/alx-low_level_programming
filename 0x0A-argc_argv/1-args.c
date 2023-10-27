#include <stdio.h>
#include "main.h"

/**
 * main - prints number of arguments minus program name.
 * @argc: number of arguments, including program name.
 * @argv: 1D array of arguments passed.
 *
 * Return: always 0 (to denote success).
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
