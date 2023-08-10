#include "main.h"

/**
 * _calloc - allocates memory for an array with all its elements set to 0
 * @nmemb: number of elements
 * @size: size of each element
 *
 * Return: returns array/ NULL if malloc fails or parameter = 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;
	int *iptr;

	if ((nmemb == 0) || (size == 0))
		return (NULL);
	ptr = malloc((nmemb + 1) * size);
	if (ptr == NULL)
		return (NULL);
	iptr = (int *)ptr;
	for (i = 0; i < nmemb ; i++)
	{
		iptr = 0;
		iptr++;
	}
	iptr = '\0';
	return (ptr);
}
