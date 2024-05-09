#include "search_algos.h"

/**
* linear_search - search for value in int array w/ linear search algo.
*
* @array: pointer to 1st element of array to search in.
* @size: number of elements in array.
* @value: value to search for.
* Return: always for success, else -1.
*/

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
