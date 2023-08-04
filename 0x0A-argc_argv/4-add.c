#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdbool.h>

bool isInt(char *s_num);

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
		if (isInt(argv[i]) == false)
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
	else if ((*s_num == '-') || (*s_num == '+'))
		s_num++;
	while (*s_num != '\0')
	{
		if ((*s_num < '0') || (*s_num > '9'))
			return (false);
		s_num++;
	}
	return (true);
}
