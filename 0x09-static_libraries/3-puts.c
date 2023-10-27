#include <stdio.h>
#include "main.h"
/**
 * _puts - prints string to stdout followed by new line
 * @str: string to be printed to sdout
 * Return: unnecessary as function type is void
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
