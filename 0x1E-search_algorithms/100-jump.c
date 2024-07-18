#include "search_algos.h"

/**
 * jump_search - search for a value using jump algorithm
 * @array: sorted integer array
 * @size: size of array
 * @value: value to be searched for
 *
 * Return: returns index of value else -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i;
	size_t lower = 0;
	size_t jump = (int)floor(sqrt(size));
	size_t upper = jump;

	if (array == NULL)
		return (-1);
	print_value(array, lower);
	while ((array[upper] < value) && (lower < size) && (upper < size))
	{
		print_value(array, upper);
		lower = upper;
		upper += jump;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", lower, upper);
	for (i = lower; i <= upper; i++)
	{
		if (i > size - 1)
			break;
		print_value(array, i);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}

/**
 * print_value - displays element associated with array index
 * @array: integer array
 * @index: index
 */
void print_value(int *array, size_t index)
{
	printf("Value checked array[%ld] = [%d]\n", index, array[index]);
}
