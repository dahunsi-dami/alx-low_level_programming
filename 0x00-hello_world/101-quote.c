#include <stdio.h>
#include <unistd.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Description: This program prints
 * a string with a new line to
 * standard error.
 *
 * Return: to 1. That is, indicate an
 * error. Or print to standard error.
 */

int main(void)
{
	char *gstring = "and that piece of art is useful\" - Dora Korpar, 2015-
		10-19\n";

	int length;

	length = strlen(gstring);

	write(STDERR_FILENO, gstring, length);
	return (1);
}
