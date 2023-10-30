#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - frees 2D array created by alloc_grid().
 * @grid: the array to be freed.
 * @height: the height of the 2D array.
 *
 * Return: unnecessary as function type is void.
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
