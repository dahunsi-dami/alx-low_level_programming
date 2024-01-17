#include "cops.h"
/**
 * mod - function that gets module of a/b.
 * @a: the 1st integer to be divided by.
 * @b: the 2nd integer to divided a with.
 * Return: the modulo of a & b.
 */
int mod(int a, int b)
{
	int rem;

	rem = a % b;
	return (rem);
}
