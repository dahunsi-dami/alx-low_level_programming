#include <stdio.h>
#include "main.h"
/**
 * print_array - prints n elements of array of ints, before new line
 * @a: array to be printed
 * @n: number of elements of array to be printed
 * return: unnecessary as function type is void
 */
void print_array(int *a, int n)
{
	int b;

	for (b = 0; b < n; b++)
	{
		printf("%d", a[b]);

		if (b != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
