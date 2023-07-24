#include "main.h"

/**
 * puts2 - displays the elements of an array that are in even idexes
 * @str: string
 *
 */
void puts2(char *str)
{
	int i = 0;
	int c;

	while ((*(str + i) != '\0'))
	{
		if ((i % 2) == 0)
		{
			c = *(str + i);
			_putchar(c);
		}
		i++;
	}
	_putchar('\n');
}
