#include "main.h"

/**
 * _print_rev_recursion - display reverse elements of a string recursively
 * @s: string
 *
 */
void _print_rev_recursion(char *s)
{
	char c = *s;

	if (c == '\0')
		return;
	s++;
	_print_rev_recursion(s);
	_putchar(c);
}
