#include "main.h"

/**
 * flip_bits - determines how may bits it would take to make n into m
 * @n: first number
 * @m: second number
 *
 * Return: returns the number of bites to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int size = sizeof(unsigned long int) * 8;
	int flip = 0;
	int i;

	for (i = (size - 1); i >= 0; i--)
	{
		if (((n >> i) & 1) != ((m >> i) & 1))
			flip++;
	}
	return (flip);
}
