#include <stdio.h>
#include <math.h>

/**
 * main - prints out even fibonacci numbers not exceeding  4,000,000
 *
 * Return: returns 0
 */
int main(void)
{
	int first = 1;
	int second = 2;
	int next = first + second;
	int sum = 2;

	while (next <= 4000000)
	{
		if ((next % 2) == 0)
			sum = sum + next;
		first = second;
		second = next;
		next = first + second;
	}
	printf("%d\n", sum);
	return (0);
}

