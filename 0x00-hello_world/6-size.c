#include <stdio.h>

/**
 * main - prints size of various types on the computer it is compiled + run on
 * @*messages: a str/char tpe that is a parameter to puts function
 *
 * Description: program uses multiple printf statements to output
 * uses sizeof function to get sizes
 * the types asks for are: char, int, long int, long long int and float
 * stdio: allows program to use standard input/output
 * Return: returns 0
 */
int main(void)
{
	printf("Size of a char: %zu byte(s)\n", sizeof(char));
	printf("Size of an int: %zu byte(s)\n", sizeof(int));
	printf("Size of a long int: %zu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(long long int));
	printf("Size of a float: %zu byte(s)\n", sizeof(float));
	return (0);
}
