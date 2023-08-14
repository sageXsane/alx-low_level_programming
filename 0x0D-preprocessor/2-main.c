#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the name of the current file using predefine macro
 *
 * Return: returns 0
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
