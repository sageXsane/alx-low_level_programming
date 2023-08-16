#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - iterates array and performs a specific action
 * @array: array being iterated over
 * @size: size of array
 * @action: pointer to a specified action function
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
