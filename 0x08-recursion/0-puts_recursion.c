#include "main.h"
/**
 * _puts_recursion - function that prints a string before a new line.
 * @s: the string to be printed before a new line.
 * Return: unnecessary as function prototype is void.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	_puts_recursion(s + 1);
}
