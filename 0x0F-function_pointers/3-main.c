#include "3-calc.h"

/**
 * main - prints the answer to an operation of two integers
 * @argc:  number of argumets on command line
 * @argv: array containing command line arguments
 *
 * Return: returns 0
 */
int main(int argc, char *argv[])
{
	int a, b;
	char *op;
	int result;
	int (*op_ptr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	op = argv[2];
	op_ptr = get_op_func(op);
	if (op_ptr != NULL)
	{
		result = op_ptr(a, b);
		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
		exit(99);
	}
	return (0);
}
