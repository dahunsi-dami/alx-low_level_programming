#include "main.h"
/**
 * _puts - prints string to stdout followed by new line
 * @s: string to be printed to sdout
 * Return: unnecessary as function type is void
 */
void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
