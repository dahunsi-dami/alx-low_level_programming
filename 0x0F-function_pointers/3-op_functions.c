#include "3-calc.h"

/**
 * op_add - returns sum of a & b.
 * @a: the 1st number to be summed up.
 * @b: the 2nd number to be summed up.
 *
 * Return: the sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns difference of a & b.
 * @a: the number to subtract b from.
 * @b: the number to be subtracted from a.
 *
 * Return: the difference of a & b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns product of a and b.
 * @a: the number to be multiplied with b.
 * @b: the number to be multiplied with a.
 *
 * Return: the product of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns result of division of a by b.
 * @a: the number to be divided by b.
 * @b: the number to divide a by.
 *
 * Return: the result of division of a by b.
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - returns remainder of division of a by b.
 * @a: the number to be divided by b.
 * @b: the number to divide a by.
 *
 * Return: the remainder of division of a by b.
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
