#include "variadic_functions.h"

/**
 * sum_them_all - gives the sum of n integers
 * @n: number of arguments
 * @...: the integer arguments to be added
 *
 * Return: returns the sum/ zero if n = 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args_ptr;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);
	va_start(args_ptr, n);
	for (i = 0; i < n; i++)
		sum = sum + va_arg(args_ptr, int);
	va_end(args_ptr);
	return (sum);
}
