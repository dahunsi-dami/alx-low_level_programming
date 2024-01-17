#include "main.h"
/**
 * _strstr - a function that locates a substring.
 * @haystack: the string to be searched for 1st occurrence
 * of substring needle.
 * @needle: the substring to be searched for in haystack.
 *
 * Return: pointer to beginning of substring else NULL.
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *h = haystack;
		char *n = needle;

		while (*h == *n && *n != '\0')
		{
			h++;
			n++;
		}

		if (*n == '\0')
		{
			return (haystack);
		}

	}
	return (NULL);
}
