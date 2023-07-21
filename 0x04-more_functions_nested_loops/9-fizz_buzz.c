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

	for (i = 0; i < 101; i++)
	{
		if ((i % 3) == 0)
			printf("Fizz");
		else if ((i % 5) == 0)
			printf("Buzz");
		else
			printf("%d", i);
	}
	printf("\n");
	return (0);
}
