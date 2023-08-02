#include "main.h"

int sqrt_recursion(int n, int sqr);

/**
 * _sqrt_recursion - displays the sqrt of n
 * @n: the number whose square root is to be found
 *
 * Return: returns the result of function sqrt_recursion, returns -1 if n neg
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt_recursion(n, 0));
}

/**
 * sqrt_recursion - reccursively calculates the square root of n
 * @n: the number whose square is to be found
 * @sqr: possiible square root
 *
 * Return: returns the square root of n/-1 if n not natural square number
 */
int sqrt_recursion(int n, int sqr)
{
	if ((sqr * sqr) > n)
		return (-1);
	if ((sqr * sqr) == n)
		return (sqr);
	return (sqrt_recursion(n, (sqr + 1)));
}
