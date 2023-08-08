#include "main.h"

/**
 * create_array - creates a char array and initializes it with a specific char
 * @size: the size of the array
 * @c: the specified char
 *
 * Return: pointer to the array, else NULL if size is
 */
char *create_array(unsigned int size, char c)
{
	char *arr = malloc(size);
	unsigned int i;

	if ((arr == NULL) || (size == 0))
	return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;
	arr[size] = '\0';
	return (arr);
}
