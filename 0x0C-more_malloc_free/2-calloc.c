#include <stdlib.h>
/**
 * _calloc - allocates memory for an array with malloc & memory set to 0.
 * @nmemb: the number of elements to be in the array.
 * @size: the size of each elements in bytes.
 *
 * Return: return pointer to allocated memory, else NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *nstrg;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	nstrg = malloc(size * nmemb);

	if (nstrg == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		nstrg[i] = 0;

	return (nstrg);

}
