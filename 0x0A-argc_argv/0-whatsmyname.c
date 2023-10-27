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
 * main - prints name of program followed by new line.
 * @argc: number of arguments, including program name.
 * @argv: 1D array of arguments passed.
 *
 * Return: always 0 (to denote success).
 */
int main(int argc, char *argv[])
{
	int i, j;

	for (i = 0; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			_putchar(argv[i][j]);
		}
	}
	_putchar('\n');

	return (0);
}
