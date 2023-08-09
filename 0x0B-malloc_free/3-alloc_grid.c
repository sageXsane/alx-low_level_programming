#include "main.h"

/**
 * alloc_grid - allocates memory for 2d array with all elements intialized to 0
 * @width: the width of array
 * @height: the height of array
 *
 * Return: returns 2d array/ NULL if parameters <= 0 or arr == NULL
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int r, c, i;

	if (width <= 0 || height <= 0)
		return (NULL);
	arr = (int **)malloc(height * sizeof(int));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
		arr[i] = (int *)malloc(width * sizeof(int));
	for (r = 0; r < height; r++)
	{
		for (c = 0; c < width; c++)
			arr[r][c] = 0;
	}
	return (arr);
}
