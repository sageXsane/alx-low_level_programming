#include "main.h"
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * main - finds the largest prime factor of a num
 *
 * Description: the program does this by divind the number with
 * a prime number (i) until it has remainders then moves to the next one
 * the num will ultimately have 1 number(i) that only divides num once
 * Return: returns 0
 */
int main(void)
{
	long int large = 2;
	long int num = 612852475143;
	long int i;

	while ((num % 2) == 0)
		num = num / 2;
	for (i = 3; (i * i) <= num; i += 2)
	{
		while ((num % i) == 0)
		{
			large = i;
			num /= i;
		}
	}
	if (num > 2)
		large = num;
	printf("%ld\n", large);
	return (0);
}
