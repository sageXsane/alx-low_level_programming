#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints sum of diagonals
 * @a: pointer of 2d array
 * @size: size of square array
 *
 */
void print_diagsums(int *a, int size)
{
	int f;
	int b;
	int fsum = 0;
	int bsum = 0;

	for (f = 0; f < size; f++)
		fsum += a[f * size + f];
	printf("%d, ", fsum);

	for (b = 0; b < size; b++)
		bsum += a[(size - 1 - b) * size + b];
	printf("%d\n", bsum);
}
