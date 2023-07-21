#include "main.h"
#include <unistd.h>

/**
 * print_diagonal - prints a diagonal line that is n long
 * @n: length of the line
 *
 */
void print_diagonal(int n)
{
	int i = 0;
	int spaces = 0;
	int b;

	while (((i < n) && (spaces < n)) || (n <= 0))
	{
		i++;
		spaces++;
		if (n <= 0)
		{
			_putchar('\n');
			break;
		}
		else
		{
			for (b = 0; b < spaces - 1; b++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
}
