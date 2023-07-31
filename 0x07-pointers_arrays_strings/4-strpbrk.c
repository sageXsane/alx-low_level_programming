#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - finds the first occurrence in s that contains element of accept
 * @s: the string that is checked for elements of substring accept
 * @accept: prefix substring
 *
 * Return: returns the pointer to byte s pointing 1st occurence of s in accept
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int count = 0;
	char *p = NULL;

	while (*s != '\0')
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				count++;
				break;
			}
		}
		if (count == 1)
		{
			p = s;
			break;
		}
		s++;
		count = 0;
	}
	return (p);
}
