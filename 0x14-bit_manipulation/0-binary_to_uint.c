#include "main.h"

/**
 * binary_to_uint - convert binary number to uint
 * @b: string representing binary number
 *
 * Return: returns the uint number or 0 if b is NULL/chars of b != bit
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int size = 0;
	int i, j;
	unsigned int pow = 1;

	if (b == NULL)
		return (0);
	while (b[size] != '\0')
		size++;
	if (size >= (sizeof(unsigned int) * 8))
		return (0);
	for (i = 0; i < size; i++)
	{
		if ((b[i] != '0') && (b[i] != '1'))
			return (0);
		if (b[i] == '1')
		{
			for (j = 1; j < (size - i); j++)
			{
				if (i == (size - 1))
				{
					pow = 1;
					break;
				}
				pow *= 2;
			}
			num += pow;
			pow = 1;
		}
	}
	return (num);
}
