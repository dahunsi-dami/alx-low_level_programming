#include "main.h"

/**
 * _isalpha - checks for alphabetic char
 * @c: character to be checked
 * Return: returns 1 if c is letter and 0 if not
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	{
		return (0);
	}
}
