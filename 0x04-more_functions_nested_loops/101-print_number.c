#include "main.h"
#include <unistd.h>

/**
 * print_number - prints number with consideration for negative values
 * @n: the number that must be displayed
 */
void print_number(int n)
{
	int sign = 0;

	if ((n < 0) && (sign == 0))
	{
		_putchar(45);
		sign++;
		n = n * -1;
	}
	if (n > 9)
		print_number(n / 10);
	_putchar((n % 10) + '0');
}
