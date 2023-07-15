#include <stdio.h>

/**
 * main - prints all possible different combinations of two two- digits
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
	int d;
	int bc;
	int ad;

	for (b = start; b <= end; b++)
	{
		for (c = start; c <= end; c++)
		{
			for (a = start; a <= end; a++)
			{
				for (d = start; d <= end; d++)
				{
					bc = (int)b + (int)c;
					ad = (int)a + (int)d;
					if (bc < ad)
					{
						putchar(b);
						putchar(c);
						putchar(' ');
						putchar(a);
						putchar(d);
						if ((d != '9') || (a != '9') || (c != '8') || (b != '9'))
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
