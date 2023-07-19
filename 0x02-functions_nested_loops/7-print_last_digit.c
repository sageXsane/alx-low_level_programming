#include "main.h"
#include <unistd.h>

/**
 * print_last_digit - returns the last digit of int
 * @a: int value we use to find last digit
 *
 * Return: returns the last digit of a
 */
int print_last_digit(int a)
{
	int rem;

	rem = a % 10;
	if (rem < 0)
		rem = rem * -1;
	return (rem);
}
