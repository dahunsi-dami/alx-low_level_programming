#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - a function that prints a name.
 * @name: the name to be print, a string.
 * @f: a function pointer.
 *
 * Return: unnecessary as function prototype is void.
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || *name == '\0')
		return;
	f(name);
}
