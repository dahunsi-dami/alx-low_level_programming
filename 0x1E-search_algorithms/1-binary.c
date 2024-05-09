#include "search_algos.h"

/**
* binary_search - search for value in int array w/ binary search algo.
*
* @array: pointer to 1st element of array to search in.
* @size: number of elements in array.
* @value: value to search for.
* Return: always for success, else -1.
*/

int binary_search(int *array, size_t size, int value)
{
	int small;
	int big;
	int medium;
	int i;

	if (array == NULL)
		return (-1);

	for (small = 0, big = size - 1; small <= big;)
	{
		medium = (small + big) / 2;

		printf("Searching in array: ");
		for (i = small; i <= big; i++)
			printf("%i%s", array[i], i == big ? "\n" : ", ");

		if (value == array[medium])
			return (medium);
		else if (value < array[medium])
			big = medium - 1;
		else
			small = medium + 1;

	}
	return (-1);
}
