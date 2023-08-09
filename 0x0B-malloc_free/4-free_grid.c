#include "main.h"

/**
 * free_grid - frees 2d array
 * @grid: 2d array
 * @height: height of array
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
