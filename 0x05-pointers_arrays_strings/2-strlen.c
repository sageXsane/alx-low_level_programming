#include "main.h"

/**
 * _strlen - calculates the length of a string
 * @s: the string/ char array
 *
 * Return: returns the length of the string
 */
int _strlen(char *s)
{
	int len = 0;
	int i = 0;

	while ((*(s + i)) != '\0')
	{
		len++;
		i++;
	}
	return (len);
}
