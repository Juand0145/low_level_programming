#include <stdlib.h>
#include "holberton.h"

/**
 * free_grid - a function that frees a 2 dimensional
 * grid previously created by your alloc_grid function.
 * @grid: The grid we want to free
 * @height: The height of the grid
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height == 0)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
