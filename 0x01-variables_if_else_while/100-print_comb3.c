#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 *
 * Return: returns 0;
 */
int main(void)
{
	int start = '0';
	int end  = '9';
	int b;
	int c;

	for (b = start; b <= end; b++)
	{
		for (c = start; c <= end; c++)
		{
			if (b < c)
			{
				putchar(b);
				putchar(c);
				if ((c != '9') || (b != '8'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
