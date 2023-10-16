#include <stdio.h>
#include "main.h"
/**
 * swap_int - swaps values of two integers
 * @a: first integer to be swapped
 * @b: second integer to be swapped
 * Return: unnecessary as function type is void
 */
void swap_int(int *a, int *b)
{
	int hld = *a;
	*a = *b;
	*b = hld;
}
