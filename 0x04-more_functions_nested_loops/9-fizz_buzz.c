#include "main.h"
#include <stdio.h>

/**
 * main - outputs 1-100, if number is div by 3 = Fizz, if div by 5 = Buzz
 *
 * Return: returrns 0
 */
int main(void)
{
	int i;

	for (i = 1; i < 101; i++)
	{
		if (((i % 3) == 0) && ((i % 5) == 0))
			printf("FizzBuzz");
		else if ((i % 5) == 0)
			printf("Buzz");
		else if ((i % 3) == 0)
			printf("Fizz");
		else
			printf("%d", i);
		if (i != 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
