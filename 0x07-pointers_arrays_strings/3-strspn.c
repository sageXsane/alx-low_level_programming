#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: the string that is checked for elemeents of substring accept
 * @accept: prefix substring
 *
 * Return: returns the number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int num = 0;
	int count = 0;
	int i;

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
		if (count == 0)
			break;
		num++;
		s++;
		count = 0;
	}
	return (num);
}
