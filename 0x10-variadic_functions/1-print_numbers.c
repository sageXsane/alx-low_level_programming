#include "variadic_functions.h"

/**
 * print_numbers - prints n number with a separator
 * @separator: string that separates the numbers
 * @n: number of numbers
 * @...: numbers to be printed
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args_ptr;

	va_start(args_ptr, n);
	for (i = 0; i < n; i++)
	{
		if ((separator == NULL) || (i == (n - 1)))
			printf("%d", va_arg(args_ptr, int));
		else
			printf("%d%s", va_arg(args_ptr, int), separator);
	}
	printf("\n");
	va_end(args_ptr);
}
