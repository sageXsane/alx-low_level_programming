#include "main.h"

/**
 * flip_bits - counts number of bits it takes to flip one number to another
 * @n: first number
 * @m: second number
 *
 * Return: returns number of flips
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int size = sizeof(unsigned long int) * 8;
	unsigned int flip = 0;
	int i;

	for (i = (size - 1); i >= 0; i--)
	{
		if (((n >> i) & 1) != ((m >> i) & 1))
			flip++;
	}
	return (flip);
}
