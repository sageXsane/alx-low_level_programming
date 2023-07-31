#include "main.h"

/**
 * _memcpy - copies  n bytes of the memory area src to memory area dest
 * @dest: char array that will have copied elememts of src
 * @src: the array onatining the elements that will be copied to dest
 * @n: indicates how many elements of dest must be filled with src
 *
 * Return: returns pointer to the memory of dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *p = dest;

	for (i = 0; i < n; i++)
	{
		*dest = src[i];
		dest++;
	}
	return (p);
}
