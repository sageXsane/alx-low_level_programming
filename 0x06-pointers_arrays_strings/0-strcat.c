#include "main.h"

/**
 * _strcat - copy string src pointer to the buffer pointed to dest
 * @dest: string array where extra infor will be added
 * @src: string array that contains extra info
 *
 * Return: resturns the dest array
 */
char *_strcat(char *dest, char *src)
{
	char *dest2 = dest;

	while (*dest != '\0')
		dest++;
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}

	*dest = '\0';

	return (dest2);
}
