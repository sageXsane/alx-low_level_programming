#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: the number of arguments
 * @argv: array that contains all arguments
 *
 * Return: returns 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
