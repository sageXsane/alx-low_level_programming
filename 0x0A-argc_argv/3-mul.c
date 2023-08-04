#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * main - multiples two number from arguments
 * @argc: the number of arguments
 * @argv: array that contains all arguments
 *
 * Return: returns 0, returns 1 if argv[1]/argv[2] are not present
 */
int main(int argc, char *argv[])
{
	int mul;

	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}
	return (0);
}
