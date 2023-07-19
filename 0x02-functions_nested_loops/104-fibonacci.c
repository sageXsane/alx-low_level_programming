#include <stdio.h>
#include <math.h>

/**
 * main - prints out the first 98 fibonacci numbers
 *
 * Return: returns 0
 */
int main(void)
{
	int n = 3;
	long int first = 1;
	long int second = 2;
	long int next = first + second;

	printf("%lu, %lu, ", first, second);
	while (n <= 98)
	{
		if (n == 98)
			printf("%lu\n", next);
		else
			printf("%lu, ", next);
		first = second;
		second = next;
		next = first + second;
		n++;
	}
	return (0);
}

