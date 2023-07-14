#include <stdio.h>

/**
 * main - prints the alphabets in lowercase in reverse
 *
 * Return: returns 0;
 */
int main(void)
{
	int start = 'z';
	int end  = 'a';
	int c;

	for (c = start; c >= end; c--)
		putchar(c);
	putchar('\n');
	return (0);
}
