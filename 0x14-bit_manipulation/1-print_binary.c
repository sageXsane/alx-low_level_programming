#include "main.h"

/**
 * print_binary - prints binary representation of a number
 * @n: the number to be converted
 *
 */
void print_binary(unsigned long int n)
{
	int size = sizeof(unsigned long int) * 8;
	int zeros = 1;
	int bit;
	int i;

	for (i = (size - 1); i >= 0; i--)
	{
		bit = (n >> i) & 1;
		if (bit == 1)
			zeros = 0;
		if (zeros != 1)
			_putchar(bit + '0');
	}
	if (zeros == 1)
		_putchar(48);
}
