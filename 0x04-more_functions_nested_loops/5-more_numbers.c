#include "main.h"
#include <unistd.h>

/**
 * more_numbers - prints 0-9 x10
 *
 */
void more_numbers(void)
{
	int i;
	int b;

	for (b = 1; b <= 10; b++)
	{
		for (i = 0; i < 15; i++)
		{
			if (i >= 10)
			{
				_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
			}
			else
			{
				_putchar(i + '0');
			}
		}
		_putchar('\n');
	}
}
