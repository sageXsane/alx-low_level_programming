#include <stdio.h>

/**
 * main - prints the numbers 0..9 using putchar function
 *
 * Return: returns 0;
 */
int main(void)
{
	int nstart = '0';
	int nend  = '9';
	int astart = 'a';
	int aend = 'f';
	int c;

	for (c = nstart; c <= nend; c++)
		putchar(c);
	for (c = astart; c <= aend; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
