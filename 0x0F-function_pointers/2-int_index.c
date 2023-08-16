#include "function_pointers.h"

/**
 * int_index - finds index of the first element for which cmp function is true
 * @array: an array of integers which test cmp function
 * @size: size of the array
 * @cmp: pointer to a function
 *
 * Return: returns the index where cmp is true/ returns -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
