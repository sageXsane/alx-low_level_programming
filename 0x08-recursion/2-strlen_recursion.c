#include "main.h"

/**
 * _strlen_recursion - returns the length of a string exclusding null byte
 * @s: string
 *
 * Return: return length of string s
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (1 + _strlen_recursion(s));
}
