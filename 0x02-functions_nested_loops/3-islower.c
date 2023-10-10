#include "main.h"
#include <ctype.h>

/**
 * _islower - checks for lowercase char
 * @c: integer character to be checked
 * Return: returns 1 is c is lowercase and 0 if not
 */

int _islower(int c)
{
	if (islower_l(c) == '1')
	{
		return (1);
	}
	{
		return (0);
	}
}
