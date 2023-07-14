#include <stdio.h>

/**
 * main - prints 0-9 in one line
 *
 * Return: returns 0
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		printf("%d", num);
	printf("\n");
	return (0);
}
