#include "main.h"

/**
 * _strncat - copy n bytes string src pointer to the buffer pointed to dest
 * @dest: string array where extra infor will be added
 * @src: string array that contains extra info
 * @n: the number of bytes that are concatenated from src
 *
 * Return: resturns the dest array
 */
char *_strncat(char *dest, char *src, int n)
{
	char *dest2 = dest;
	int i;

	while (*dest != '\0')
		dest++;
	for (i = 0; i < n; i++)
	{
		if (*src == '\0')
			break;
		*dest = *src;
		src++;
		dest++;
	}

	*dest = '\0';

	return (dest2);
}
