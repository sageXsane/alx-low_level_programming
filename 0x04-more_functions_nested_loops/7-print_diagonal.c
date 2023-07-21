#include "main.h"
#include <unistd.h>

/**
 * print_diagonal - prints a diagonal line that is n long
 * @n: length of the line
 *
 */
void print_diagonal(int n)
{
	int i;
	int spaces = 0;
	int b;

	for (i = 0; i <  n; i++)
	{
		if (n <= 0)
			_putchar('\n');
		for (b = 0; b <= spaces; b++)
		{
			if (b == i)
				_putchar(92);
			else
				_putchar(' ');
		}
		spaces++;
		_putchar('\n');
	}
}
