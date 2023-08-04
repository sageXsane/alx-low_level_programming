#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: the number of arguments
 * @argv: array that contains all arguments
 *
 * Return: returns 0 if success, 1 if there's no arg[1]/arg[2]
 */
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;
	int num;

	for (i = 1; i < argc; i++)
	{
		num = atoi(argv[i]);
		if (num == 0)
		{
			printf("Error\n");
			return (1);
		}
		else if (num > 0)
		{
			sum += num;
		}
	}
	printf("%d\n", sum);
	return (0);
}
