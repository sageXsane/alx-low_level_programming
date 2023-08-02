#include "main.h"

int prime_calc(int n, int div);

/**
 * is_prime_number - displays whether a number is a prime number
 * @n: possible prime number
 *
 * Return: returns the result of prime_calc either 0/1, returns 0 if n is <= 1
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_calc(n, (n - 1)));
}

/**
 * prime_calc - checks whether any other integer is divisible by n
 * @n: possible prime number
 * @div: possible addition divisor to n
 *
 * Return: returns 1 if n is prime_number else 0
 */
int prime_calc(int n, int div)
{
	if (div == 1)
		return (1);
	if ((n % div == 0) && (div > 0))
		return (0);
	return (prime_calc(n, div - 1));
}
