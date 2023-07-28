#include "main.h"

/**
 * _strncpy - copy n bytes string src pointer to the buffer pointed to dest
 * @dest: string array where extra infor will be added
 * @src: string array that contains extra info
 * @n: the number of bytes that are concatenated from src
 *
 * Return: resturns the dest array
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while ((i < n) && (src[i] != '\0'))
	{
		dest[i] = src[i];
		i++;
	}
	while ((i < n))
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
