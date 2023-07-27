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
	int i;
	char *dest2 = dest;

	for (i = 0; i < n; i++)
	{
		if (*src == '\0')
		{
			*dest = '\0';
			break;
		}
		*dest = *src;
		src++;
		dest++;
	}
	return (dest2);
}
