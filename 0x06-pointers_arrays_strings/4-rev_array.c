#include "main.h"
#include <stdio.h>
/**
 * reverse_array - function that reverses content of array of integers.
 * @a: the array of integers.
 * @n: the number of elements of array to be reversed.
 * Return: unnecessary as function type is void.
 */

void reverse_array(int *a, int n)
{
	int i, tmp;
	int j = n - 1;

	for (i = 0; i < n / 2 ; i++)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
		j--;
	}
}
