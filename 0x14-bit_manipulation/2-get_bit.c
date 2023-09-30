#include "main.h"

/**
 * get_bit - return the bit at the index th position of an integer number
 * @n: decimal value
 * @index: position of the wanted bit
 * Return: the value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > (sizeof(unsigned long int) * 8))
		return (-1);
	bit = (n >> index) & 1;
	return (bit);
}
