#include "main.h"
#include <unistd.h>

/**
 * print_square - prints a square that is size big
 * @size: size of the square
 *
 */
void print_square(int size)
{
	int i = 0;
	int b;

	while ((i < size) || (size <= 0))
	{
		i++;
		if (size <= 0)
		{
			_putchar('\n');
			break;
		}
		for (b = 0; b < size; b++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
