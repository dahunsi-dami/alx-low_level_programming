#include "main.h"

int checker(char *c, int c1, int c2);

/**
 * length_recursion - a function to count the length of a string.
 * @c: parameter representing the string.
 * Return: the calculated length of the string for use in other functions.
 */
int length_recursion(char *c)
{
	if (*c == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + length_recursion(c + 1));
	}
}

/**
 * checker - a function that checks if equal opposite characters are equal.
 * @c: the string containing the characters to be checked.
 * @c1: represents the first character in the string.
 * @c2: represents the last character in the string.
 *
 * Return: 0 if success, else 1.
 */
int checker(char *c, int c1, int c2)
{
	if (c1 >= c2)
	{
		return (1);
	}

	if (c[c1] != c[c2])
	{
		return (0);
	}

	return (checker(c, c1 + 1, c2 - 1));
}

/**
 * is_palindrome - a function that checks if a string is a palindrome.
 * @s: the string to be checked.
 *
 * Return: returns 1 if s is palindrome and 0 if not.
 */
int is_palindrome(char *s)
{
	if (length_recursion(s) <= 1)
	{
		return (1);
	}

	return (checker(s, 0, length_recursion(s) - 1));
}
