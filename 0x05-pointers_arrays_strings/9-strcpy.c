#include "main.h"

/**
 * _strcpy - copy string src pointer to the buffer pointed to dest
 * @dest: string array where extra infor will be added
 * @src: string array that contains extra info
 *
 * Return: resturns the dest array
 */
char *_strcpy(char *dest, char *src)
{
	int len = 0;
	int i = 0;
	int s = 0;
	char  c;

	while ((*(dest + i)) != '\0')
	{
		len++;
		i++;
	}

	while ((*(src + s)) != '\0')
	{
		c = src[s];
		dest[i] = c;
		i++;
		s++;
	}
	c = src[s];
	dest[i] = c;
	return (dest);
}
