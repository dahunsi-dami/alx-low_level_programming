#include "main.h"
/**
 * set_bit - function that sets value of a bit at given index to 1.
 * @n: pointer to value to set.
 * @index: 0-indexed and index of bit to set.
 *
 * Return: 1 if success, else -1 if error.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	i = 1 << index;
	*n = *n | i;
	return (1);
}
