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

/**
 * main - calls print_alphabet to display a-z followed by a newline
 *
 * Return: returns 0 if successfull
 */
int main(void)
{
	print_alphabet();
	return (0);
}
