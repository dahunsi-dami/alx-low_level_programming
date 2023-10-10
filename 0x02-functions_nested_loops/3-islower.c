#include "main.h"

/**
 * _islower - checks for lowercase char
 * @c: integer character to be checked
 * Return: returns 1 is c is lowercase and 0 if not
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	{
		return (0);
	}
}
