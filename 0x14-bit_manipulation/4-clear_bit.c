#include "main.h"
/**
 * clear_bit - function that sets value of a bit at given index to 0.
 * @n: pointer to value to set.
 * @index: 0-indexed and index of bit to set.
 *
 * Return: 1 if success, else -1 if error.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
