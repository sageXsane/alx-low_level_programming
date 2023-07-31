#include "main.h"
#include <stddef.h>

/**
 * _strstr - find 1st occurrence of the substring needle in the string haystack
 * @haystack: the string that is searched for a substring
 * @needle: substring
 *
 * Return: the pointer of haystack that contains 1st occurence of  substring
 */
char *_strstr(char *haystack, char *needle)
{
	char *p = NULL;
	int check = 0;
	int b, i;

	for (b = 0; haystack[b] != '\0'; b++)
	{
		for (i = 0; needle[i] != '\0'; i++)
		{
			if (haystack[b + i] == needle[i])
			{
				continue;
			}
			else
			{
				check = 1;
				break;
			}
		}
		if (check == 0)
		{
			p = &haystack[b];
			break;
		}
		else
		{
			check = 0;
			continue;
		}
	}
	return (p);
}
