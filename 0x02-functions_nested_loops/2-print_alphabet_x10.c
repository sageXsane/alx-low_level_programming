#include "main.h"
#include <unistd.h>

/**
 * print_alphabet_x10 - outputs a-z 10x using ascii code
 *
 * Return: returns 0;
 */
void print_alphabet_x10(void)
{
	int i;
	int row;

	for (row = 0; row < 10; row++)
	{
		for (i = 97; i < 123; i++)
			_putchar(i);
		_putchar('\n');
	}
}
