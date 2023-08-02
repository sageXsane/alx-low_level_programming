#include "main.h"

/**
 * factorial - returns factorial of given number
 * @n: number of factorial
 *
 * Return: returns the factorial of n, returns -1 if n is negative, 1 if n = 0
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
