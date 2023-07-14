#include <stdio.h>

/**
 * main - prints the alphabets in lowercase
 *
 * Return: returns 0;
 */
int main(void)
{
	int start = 'a';
	int end  = 'z';
	int c;

	for (c = start; c <= end; c++)
	{
		if ((c != 'q') && (c != 'e'))
			putchar(c);
	}
	putchar('\n');
	return (0);
}
