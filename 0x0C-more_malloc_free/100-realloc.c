#include <stdlib.h>
/**
 * _realloc - reallocs a memory block using malloc & free.
 * @ptr: pointer to memory previously alloced with old size.
 * @old_size: the size of allocated space for ptr.
 * @new_size: the size that new memory block should be in.
 *
 * Return: return pointer to new space, else NULL.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *nptr = NULL, *cptr = (char *)ptr;
	unsigned int i, limit;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		nptr = malloc(new_size);
		if (nptr == NULL)
			return (NULL);
	}
	else
	{
		nptr = malloc(new_size);
		if (nptr == NULL)
		{
			free(ptr);
			return (NULL);
		}
		limit = (old_size < new_size) ? old_size : new_size;
		for (i = 0; i < limit; i++)
		{
			nptr[i] = cptr[i];
		}
	}
	free(ptr);
	return (nptr);
}
