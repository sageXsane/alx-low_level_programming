#include "main.h"

/**
 * _pow_recursion - recursively calculate the value of x to the power of y
 * @x: base
 * @y: exponent
 *
 * Return: return x^y, if y < 0 return -1(only pos exponents)
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, (y - 1)));
}
