#include "main.h"

/**
 * print_binary - prints the binary value of an integer
 * @n: integer that must be converted to binary
 *
 */
void print_binary(unsigned long int n)
{
	int size = sizeof(unsigned long int) * 8;
	int i;
	int bit;
	int isZero = 1;

	for (i = (size - 1); i >= 0; i--)
	{
		bit = (n >> i) & 1;
		if (bit == 1)
			isZero = 0;
		if (isZero == 0)
			_putchar(bit + '0');
	}
	if (isZero == 1)
		_putchar('0');
}
