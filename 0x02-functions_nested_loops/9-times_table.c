#include "main.h"
#include <unistd.h>

/**
 * times_table - returns timetables in 9x9
 *
 */
void times_table(void)
{
	int r, c, prod;

	for (r = 0; r < 10; r++)
	{
		for (c = 0; c < 10; c++)
		{
			prod = c * r;
			if (prod > 9)
			{
				_putchar(' ');
				_putchar((prod / 10) + '0');
				_putchar((prod % 10) + '0');
			}
			else
			{
				if (c != 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(prod + '0');
			}
			if (c != 9)
				_putchar(',');
		}
		_putchar('\n');
	}
}
