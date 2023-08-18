#include "variadic_functions.h"

/**
 * print_all - prints unknown arguments of function of diferent datatypes
 * @format: string containing what datatype must be printed
 * @...: arguments
 *
 */
void print_all(const char * const format, ...)
{
	va_list arg_ptr;
	int i = 0;

	while (format == NULL)
	{
		printf("\n");
		return;
	}
	va_start(arg_ptr, format);
	while (format[i] != '\0')
	{
		format_print(arg_ptr, format[i]);
		if ((format[i + 1] != '\0') &&
(format[i] == 'c' || format[i] == 'i' || format[i] == 'f' || format[i] == 's'))
		printf(", ");
		i++;
	}
	printf("\n");
	va_end(arg_ptr);
}

/**
 * format_print - uses switch statements to print the correct datatype
 * @arg_ptr: pointer to function arguments
 * @s: the char in format string
 *
 */
void format_print(va_list arg_ptr, char s)
{
	char *str;

	switch (s)
	{
		case 'c':
			printf("%c", va_arg(arg_ptr, int));
			break;
		case 'i':
			printf("%d", va_arg(arg_ptr, int));
			break;
		case 'f':
			printf("%f", va_arg(arg_ptr, double));
			break;
		case 's':
			str = va_arg(arg_ptr, char *);
			if (str == NULL)
			str = "(nil)";
			printf("%s", str);
			break;
		default:
			break;
	}
}
