#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - allocates memory and terminates if fail.
 * @b: unsigned integer variable.
 *
 * Return: unnecessary as function type is void.
 */
void *malloc_checked(unsigned int b)
{
	void *strg;

	strg = malloc(b);

	if (strg == NULL)
	{
		exit(98);
	}
	else
	{
		return (strg);
	}
}
