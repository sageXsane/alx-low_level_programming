#include "main.h"
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool isInt(char *s_num);

/**
 * main - print min number of coins to make change for an amount of money
 * @argc: number of arguments on command line
 * @argv: array containing command line arguments
 *
 * Return: returns 0, else 1 if there's more thant one number/num not valid
 */
int main(int argc, char *argv[])
{
	int num;
	int count = 0;

	if (argc != 2 || (isInt(argv[1]) == false))
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(argv[1]);
	if (num < 0)
	{
		printf("%d\n", count);
		return (0);
	}
	while ((num / 25) != 0)
	{
		num -= 25;
		count++;
	}
	while ((num / 10) != 0)
	{
		num -= 10;
		count++;
	}
	while ((num / 5) != 0)
	{
		num -= 5;
		count++;
	}
	while ((num / 2) != 0)
	{
		num -= 2;
		count++;
	}
	if (num == 1)
		count++;
	printf("%d\n", count);
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
