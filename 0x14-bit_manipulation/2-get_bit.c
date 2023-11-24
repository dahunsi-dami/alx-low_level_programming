#include "main.h"
/**
 * get_bit - function that returns value of a bit at given index.
 * @n: the number to check the bit in.
 * @index: 0-indexed and index of bit to check.
 *
 * Return: value of bit at index, else -1 if error.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int divisor, check;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	divisor = 1 << index;
	check = divisor & n;
	if (check == divisor)
		return (1);
	return (0);
}
