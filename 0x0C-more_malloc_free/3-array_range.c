#include "main.h"

/**
 * array_range - create array containing values from min to max
 * @min: minimun value
 * @max: maximum value
 *
 * Return: returns pointer/NULL if malloc failes or min > max
 */
int *array_range(int min, int max)
{
	int *arr;
	int i;

	if (min > max)
		return (NULL);
	arr = malloc((max - min + 1) * sizeof(int));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < (max - min + 1); i++)
		arr[i] = min + i;
	return (arr);
}
