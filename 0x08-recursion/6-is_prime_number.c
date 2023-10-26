#include "main.h"

int judge_prime(int n, int i);

/**
 * is_prime_number - checks if a given number is a prime number.
 * @n: the number to be checked by judge_prime.
 * Return: 1 if n is prime, else 0.
 */
int is_prime_number(int n)
{
	return (judge_prime(n, 1));
}

/**
 * judge_prime - function that checks if given number is prime.
 * @n: the number to be checked.
 * @i: the number of time the check operation is performed.
 *
 * Return: 1 if prime number, else 0.
 */
int judge_prime(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}

	if ((i > 1) && (n % i == 0))
	{
		return (0);
	}

	if ((n / i) < i)
	{
		return (1);
	}

	return (judge_prime(n, i + 1));
}
