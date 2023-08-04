#include <stdio.h>

/**
 * main - prints the number of arguments the program has, excluding argv[0]
 * @argc: number of arguments in comand line
 * @argv: array containing arguments on command line
 *
 * Return: returns 0
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", (argc - 1));
	return (0);
}
