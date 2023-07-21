#include "main.h"
#include <unistd.h>

/**
 * print_triangle - prints a square that is size big
 * @size: size of the square
 *
 */
void print_triangle(int size)
{
	int i;
	int b;
	int c;
	int space = 0;
	int hash = n;

	for (i = 0; i < size; i++)
	{
		if (size <= 0)
		{
			_putchar('\n');
			break;
		}
		for (b = 0; b < space; b++
		{
			_putchar(' ');
			space++
		}
		for (c = 0; c < hash; c++)
		{
			_putchar('#');
			hash--;
		}
		_putchar('\n');
	}
}
