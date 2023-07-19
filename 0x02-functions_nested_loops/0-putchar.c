#include "main.h"
#include <unistd.h>

/**
 * main - displays '_putchar' follwed by a newline
 *
 * Return: returns 0
 */
int main(void)
{
	char str[] = "_putchar";
	char c;
	int i;

	for (i = 0; i < 8; i++)
	{
		c = str[i];
		_putchar(c);
	}
	_putchar('\n');
	return (0);
}

