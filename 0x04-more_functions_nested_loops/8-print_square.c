#include "main.h"
#include <unistd.h>

/**
 * print_square - prints a square that is size big
 * @size: size of the square
 *
 */
void print_square(int size)
{
	int i;
	int b;

	for (i = 0; i < size; i++)
	{
		if (size <= 0)
			break;
		for (b = 0; b < size; b++)
		{
			_putchar('#');
		}
		_putchar('\n')
	}
}
