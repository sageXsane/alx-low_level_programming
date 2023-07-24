#include "main.h"

/**
 * _puts - prints a string to stdout
 * @str: the string/ char array
 *
 */
void _puts(char *str)
{
	int i = 0;
	char c;

	while ((*(str + i)) != '\0')
	{
		c = *(str + i);
		_putchar(c);
		i++;
	}
	_putchar('\n');
}
