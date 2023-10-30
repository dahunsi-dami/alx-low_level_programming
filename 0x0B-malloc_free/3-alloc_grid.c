#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - returns pointer to 2D array of integers
 * intialized to 0.
 * @width: the width of the 2D array.
 * @height: the height of the 2D array.
 *
 * Return: pointer to 2D array, else NULL if fail.
 */
int **alloc_grid(int width, int height)
{
	int **ar, x, y, i;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	ar = malloc(sizeof(int *) * height);

	if (ar == NULL)
	{
		return (NULL);
	}

	for (y = 0; y < height; y++)
	{
		ar[y] = malloc(sizeof(int) * width);

		if (ar[y] == NULL)
		{
			for (i = 0; i <= y; i++)
			{
				free(ar[i]);
			}
			free(ar);

			return (NULL);
		}

		for (x = 0; x < width; x++)
		{
			ar[y][x] = 0;
		}
	}
	return (ar);
}
