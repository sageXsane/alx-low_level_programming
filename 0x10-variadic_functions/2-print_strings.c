#include "variadic_functions.h"

/**
 * print_strings - prints n strings with a separator
 * @separator: string that separates the strings
 * @n: number of strings
 * @...: strings to be printed
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args_ptr;
	char *str;

	va_start(args_ptr, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(args_ptr, char *);
		if (str == NULL)
			str = "(nil)";
		if ((separator == NULL) || (i == (n - 1)))
			printf("%s", str);
		else
			printf("%s%s", str, separator);
	}
	printf("\n");
}
