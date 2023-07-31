#include "main.h"

/**
 * _memset - fills the first n bytes of the memory area pointed with byte b
 * @s: char array that will be filled with char b
 * @b: the value set to all n elements of array
 * @n: indicates how many elements of array must be filled with b
 *
 * Return: returns pointer to the memory of s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *p = s;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (p);
}
