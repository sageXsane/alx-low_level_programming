#include "main.h"

/**
 * print_rev :- prints a string in reverse to stdout
 * @s: the string/ char array
 *
 */
void print_rev(char *s)
{
	int i = 0;
	char c;
	int len = 0;

	while ((*(s + i)) != '\0')
	{
		len++;
		i++;
	}

	while (len > 0)
	{
		c = *(s + (len - 1));
		_putchar(c);
		len--;
	}
	_putchar('\n');
}
