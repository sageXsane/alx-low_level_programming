#include "main.h"
#include <unistd.h>

/**
 * print_triangle - prints a square that is size big
 * @size: size of the square
 *
 */
void print_triangle(int size)
{
	int i = 0;
	int space = size;
	int hash = 0;
	int s, h;

	while (((i < size) && (space > 0) && (hash < size)) || (size <= 0))
	{
		i++;
		hash++;
		space--;
		if (size <= 0)
		{
			_putchar('\n');
			break;
		}
		else
		{
			for (s = 0; s < space; s++)
				_putchar(' ');
			for (h = 0; h < hash; h++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
