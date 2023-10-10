#include "main.h"

/**
 * print_alphabet_x10 - print 10 times the lowercase alphabet before new line
 *
 * Return: unnecessary for function with type void
 */

void print_alphabet_x10(void)
{
	char a;
	int x;

	for (x = 0; x < 10; x++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}

	_putchar('\n');
	}
}
