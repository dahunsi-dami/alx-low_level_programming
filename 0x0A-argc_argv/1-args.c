#include <stdio.h>
#include "main.h"
#include <unistd.h>

/**
 * _putchar - prints given character c to stdout of 1.
 *
 * @c: character to be printed
 *
 * Return: returns 1 if successful and -1 if error's encountered
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * main - prints number of arguments minus program name.
 * @argc: number of arguments, including program name.
 * @argv: 1D array of arguments passed.
 *
 * Return: always 0 (to denote success).
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	_putchar((argc - 1) + '0');
	_putchar('\n');

	return (0);
}
