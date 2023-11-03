#include <stdlib.h>
/**
 * array_range - creates an array of integers.
 * @min: the starting integer in the array.
 * @max: the last integer of the array.
 *
 * Return: return pointer to new array, else NULL.
 */
int *array_range(int min, int max)
{
	int *nstrg, i;

	if (min > max)
		return (NULL);

	nstrg = malloc(sizeof(int) * ((max - min) + 1));

	if (nstrg == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
	{
		nstrg[i] = min;
		min++;
	}

	return (nstrg);

}
