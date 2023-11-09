#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index - searches for an integer
 * Description: returns the index of the 1st element
 * for which compare func doesn't return 0.
 * @array: the array containing the elements.
 * @size: the size of the array or number of elements.
 * @cmp: function pointer to each func in 2-main.c
 *
 * Return: -1 if no element matches, else the int
 * that matches.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}
