#include "main.h"
/**
 * _strchr - a function locates a character in a string.
 * @s: the string to be searched.
 * @c: the character to be located.
 *
 * Description: the _strchr() function locates
 * 1st occurrence of c in s or NULL if c isn't in s.
 *
 * Return: a pointer to 1st occurrence of c.
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}

	return (NULL);
}
