#include <stdio.h>
#include "main.h"
/**
 * puts_half - prints half of a string followed by a new line
 * @str: string whose half is to be printed
 * return: unnecessary as function type is void
 */
void puts_half(char *str)
{
	int a = 0;
	int b;

	while (str[a] != '\0')
	{
		a++;
	}

	if (a % 2 == 1)
	{
		b = (a - 1) / 2;
		b += 1;
	}
	else
	{
		b = a / 2;
	}

	for (; b < a; b++)
	{
		_putchar(str[b]);
	}

	_putchar('\n');
}
