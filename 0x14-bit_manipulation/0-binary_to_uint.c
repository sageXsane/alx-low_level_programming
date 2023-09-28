#include "main.h"

/**
 * binary_to_uint - converts a bonary to decimal
 * @b: string representing binary number
 *
 * Return: returns the decimal number or 0 if fail
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int i = 0;
	int size;
	int exp;

	if (b == NULL)
		return (0);
	size = getsize(b);
	exp = size - 1;
	while (b[i] != '\0')
	{
		if (b[i] == '1')
			num += power_2(exp);
		else if (b[i] == '0')
			num += 0;
		else
			return (0);
		i++;
		exp--;
	}
	return (num);
}

/**
 * power_2 - to the power of 2 function
 * @exp: the exponent of base 2
 *
 * Return: value of the power
 */
unsigned int power_2(int exp)
{
	int ans = 1;
	int i;

	for (i = 0; i < exp; i++)
	{
		ans *= 2;
	}
	return (ans);
}

/**
 * getsize - get size of string
 * @s: string
 *
 * Return: return size of string;
 */
int getsize(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
