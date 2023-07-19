#include "main.h"
#include <unistd.h>

/**
 * print_sign - prints the sign of a int
 * @n: int that is checked to see whether its negative/positive/zero
 *
 * Return: returns 1 if n is +, 0 if n is 0, -1 if n is -
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
