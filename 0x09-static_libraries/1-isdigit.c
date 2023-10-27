#include "main.h"

/**
 * _isdigit - checks if argument is a digit
 * @c: the integer to be checked
 * Return: 1 if c is digit and 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
