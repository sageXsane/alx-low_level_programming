#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdbool.h>

bool isInt(char *s_num);

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
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);

	if ((argc == 1) || (isInt(argv[1]) == false) || (isInt(argv[2]) == false))
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		mul = num1 * num2;
		printf("%d\n", mul);
	}
	return (0);
}

/**
 * isInt - checks whether a string is a valid integer
 * @s_num: the string that's checked
 *
 * Return: returns true if it's a integer, else false
 */
bool isInt(char *s_num)
{
	if ((s_num == NULL) || (*s_num == '\0'))
		return (false);
	else if ((s_num[0] == '-') || (s_num[0] == '+'))
		s_num++;
	while (*s_num != '\0')
	{
		if ((*s_num < '0') || (*s_num > '9'))
			return (false);
		s_num++;
	}
	return (true);
}
