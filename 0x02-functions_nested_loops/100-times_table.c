#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
 * print_times_table - returns n x n timetables
 * @n: lets us know which timetables we are ending with (< 15 and > 0)
 *
 */
void print_times_table(int n)
{
	int r, c, prod;

	for (r = 0; r < n + 1; r++)
	{
		if (!((n >= 0) && (n < 15)))
			break;
		for (c = 0; c < n + 1; c++)
		{
			prod = c * r;
			if ((prod > 9) && (prod < 100))
			{
				printf("  %d", prod);
			}
			else if (prod > 99)
			{
				printf(" %d", prod);
			}
			else
			{
				if (c != 0)
					printf("   ");
				printf("%d", prod);
			}
			if (c != n)
				printf(",");
		}
		printf("\n");
	}
}
