#include "main.h"

/**
 * set_bit - sets the bit at the index th position to 1
 * @n: address of decimal value
 * @index: position of the wanted bit
 * Return: 1 if successfull else -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int shift;

	if (index > (sizeof(unsigned long int) * 8))
		return (-1);
	shift = 1 << index;
	*n |= shift;
	return (1);
}
