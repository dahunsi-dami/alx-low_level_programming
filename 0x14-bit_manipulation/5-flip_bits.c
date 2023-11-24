#include "main.h"
/**
 * flip_bits - returns number of bits needed to flip one number to another.
 * @n: the 1st number.
 * @m: the 2nd number.
 *
 * Return: number of bits needing to be flipped.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int o, p;
	int i, j;

	p = n ^ m;
	j = 0;

	for (i = 63; i >= 0; i--)
	{
		o = p >> i;
		if (o & 1)
		{
			j++;
		}
	}
	return (j);
}
