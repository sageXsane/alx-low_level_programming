#include "main.h"
#include <unistd.h>

/**
 * print_numbers - prints 0-9
 *
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
