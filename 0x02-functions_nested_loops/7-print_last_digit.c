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

	rem = _abs(a) % 10;
	return (rem);
}
