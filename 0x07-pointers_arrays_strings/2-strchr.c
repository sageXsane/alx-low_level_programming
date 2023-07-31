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
	int ct = 0;
	int i;

	while (s[ct] != '\0')
		ct++;
	for (i = 0; i <= ct; i++)
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
	}
	return (NULL);
}
