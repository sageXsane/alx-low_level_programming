#include "search_algos.h"

/**
 * binary_search - searches for value in array using binary search
 * @array: integer array
 * @size: size of array
 * @value: value that is searched for
 *
 * Return: returns index of value else -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t mid;
	size_t i;
	size_t low = 0;
	size_t high = size - 1;

	if (array == NULL)
		return (-1);
	while (low <= high)
	{
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			if (i != high)
				printf("%d, ", array[i]);
			else
				printf("%d\n", array[i]);
		}
		mid = (low + high) / 2;
		if (array[mid] <  value)
			low = mid + 1;
		else if (array[mid] > value)
			high = mid - 1;
		else
			return (mid);
	}
	return (-1);
}
