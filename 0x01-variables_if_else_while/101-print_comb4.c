#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 *
 * Return: returns 0;
 */
int main(void)
{
	int start = '0';
	int end  = '9';
	int a;
	int b;
	int c;

	for (b = start; b <= end; b++)
	{
		for (c = start; c <= end; c++)
		{
			for (a = start; a <= end; a++)
			{
				if ((b < c) && (c < a))
				{
					putchar(b);
					putchar(c);
					putchar(a);
					if ((a != '9') || (c != '8') || (b != '7'))
					{
					putchar(',');
					putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
