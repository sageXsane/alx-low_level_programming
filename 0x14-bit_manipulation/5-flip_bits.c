#include "main.h"

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
