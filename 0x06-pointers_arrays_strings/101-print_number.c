#include "main.h"
#include <unistd.h>
#include <limits.h>
#include <stdio.h>

/**
 * print_number - prints number with consideration for negative values
 * @n: the number that must be displayed
 */
void print_number(int n)
{
	unsigned int a;

	if (n < 0)
	{
		_putchar(45);
		a = -n;
	}
	else
	{
		a = n;
	}
	if (a > 9)
		print_number(a / 10);
	_putchar((a % 10) + '0');
}
