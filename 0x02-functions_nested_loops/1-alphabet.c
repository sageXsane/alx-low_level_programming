#include "main.h"
#include <unistd.h>

/**
 * print_alphabet - outputs a-z using ascii code
 *
 * Return: returns 0;
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i < 123; i++)
		_putchar(i);
	_putchar('\n');
}
