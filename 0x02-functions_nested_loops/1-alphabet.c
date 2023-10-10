#include "main.h"

/**
 * print_alphabet - print lowercase alphabet before new line
 *
 * Return: unnecessary for function with type void
 */

void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}

	_putchar('\n');
}
