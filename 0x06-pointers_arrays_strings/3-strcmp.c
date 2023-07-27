#include "main.h"
#include <unistd.h>

/**
 * _strcmp - compares two strings
 * @s1: first string to be compared
 * @s2: second string to be compared
 *
 * Return: resturns the ascii difference between the first observed characters
 */
int _strcmp(char *s1, char *s2)
{
	int dif = 0;

	while ((*s1 != '\0') || (*s2 != '\0'))
	{
		if (*s1 != *s2)
		{
			dif = *s1 - *s2;
			break;
		}
		s1++;
		s2++;
	}
	return (dif);
}
