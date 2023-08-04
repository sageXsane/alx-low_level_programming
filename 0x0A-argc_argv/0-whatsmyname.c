#include <stdio.h>

/**
 * main - prints the arguments that is equal to the program's name
 * @argc: the number of arguments on command line
 * @argv: array conatining arguments on command line
 *
 * Return: returns 0
 */
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
