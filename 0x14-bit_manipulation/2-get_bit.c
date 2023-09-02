#include "main.h"

/**
 * get_bit - returns bit at a given index
 * @n: number
 * @index: index
 *
 * Return: returns the bit value or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	bit = (n >> index) & 1;
	return (bit);
}
