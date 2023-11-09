#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - execs func given as parameter array elements.
 * @array: the array containing the elements.
 * @size: the size of array or number of elements.
 * @action: function pointer to function to execute.
 *
 * Return: unnecessary as function prototype is void.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
