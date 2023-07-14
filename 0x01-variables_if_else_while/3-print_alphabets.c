#include <stdio.h>

/**
 * main - prints the alphabets in lowercase then in uppercase
 *
 * Return: returns 0;
 */
int main(void)
{
	int lstart = 'a';
	int lend  = 'z';
	int ustart = 'A';
	int uend  = 'Z';

	int c;

	for (c = lstart; c <= lend; c++)
		putchar(c);
	for (c = ustart; c <= uend; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
