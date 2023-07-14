#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - displays whether  randomly generated n is negative, positive or zero
 *
 * Return: returns 0 if successful
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);
	return (0);
}
