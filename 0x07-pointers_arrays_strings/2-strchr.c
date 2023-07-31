#include "main.h"
#include <stddef.h>

/**
 * _strchr - checks the first occurence of c in s
 * @s: string that's checked
 * @c: char that we are checking for
 *
 * Return: returns pointer of s pointing to occurrence of c
 */
char *_strchr(char *s, char c)
{
	char *p = NULL;

	while (*s != '\0')
	{
		if (*s == c)
		{
			p = s;
			break;
		}
		s++;
	}
	return (p);
}
