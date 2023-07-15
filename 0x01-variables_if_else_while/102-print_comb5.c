#include <stdio.h>

/**
 * main - prints all possible different combinations of two two- digits
 *
 * Return: returns 0;
 */
int main(void)
{
	int i;
	int j;
	int a;
	int b;
	int c;
	int d;

	for (i = 0; i < 100; i++)
	{
		for (j = 0; j < 100; j++)
		{
			a = (i / 10) + 48;
			b = (i % 10) + 48;
			c = (j / 10) + 48;
			d = (j % 10) + 48;
			if ((a + b) < (c + d))
			{
				putchar(a);
				putchar(b);
				putchar(' ');
				putchar(c);
				putchar(d);
				if ((d != '9') || (c != '9') || (b != '8') || (a != '9'))
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
