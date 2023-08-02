#include "main.h"

/**
 * _puts_recursion - display elements of a string recursively
 * @s: string
 *
 */
void _puts_recursion(char *s)
{
	char c = *s;

	if (c == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(c);
	s++;
	_puts_recursion(s);
}
