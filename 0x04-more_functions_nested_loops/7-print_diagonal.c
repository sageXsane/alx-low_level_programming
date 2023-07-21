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

	for (i = 0; i < n; i++)
	{
		if (n <= 0)
			break;
		_putchar(' ');
		_putchar('\\');
	}
	_putchar('\n');
}
