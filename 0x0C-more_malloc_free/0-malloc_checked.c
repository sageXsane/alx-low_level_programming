#include "main.h"

/**
 * malloc_checked - allocates memory using malloc and returns pointer
 * @b: allocated size
 *
 * Description: the program will exit with value 98 if b =0/malloc fails
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	if (b == 0)
		exit(98);
	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
