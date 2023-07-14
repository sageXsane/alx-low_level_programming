#include <stdio.h>

/**
 * main - prints the numbers 0..9 using putchar function
 *
 * Return: returns 0;
 */
int main(void)
{
	int start = '0';
	int end  = '9';
	int c;

	for (c = start; c <= end; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
