#include "main.h"

/**
 * puts_half - prints the 2nd half elements of an array
 * @str: string array
 */
void puts_half(char *str)
{
	int len = 0;
	int i = 0;
	int n;
	int c;

	while (*(str + i) != '\0')
	{
		len++;
		i++;
	}
	if ((len % 2) == 0)
		n = len / 2;
	else
		n = ((len - 1) / 2) + 1;
	for (; n < len; n++)
	{
		c = *(str + n);
		_putchar(c);
	}
	_putchar('\n');
}
