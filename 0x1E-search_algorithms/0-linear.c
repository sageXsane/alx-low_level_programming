#include "search_algos.h"

/**
 * linear_search - searches int array for a value using linear search
 * @array: array of integers to be searched
 * @size: the size of array
 * @value: value that is searched for
 *
 * Return: returns index with value else -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
