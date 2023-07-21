#include "main.h"
#include <unistd.h>

/**
 * print_line - prints a line that is n long
 * @n: length of the line
 *
 */
void print_line(int n)
{
	int i;

	for (i = n; i > 0; i--)
	{
		if (n <= 0)
			break;
		_putchar('_');
	}
	_putchar('\n');
}
