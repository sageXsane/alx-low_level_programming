#include "main.h"
#include <unistd.h>

/**
 * leet - converts string into leet speak
 * @s: converted string
 *
 * Return: returns converted string
 */
char *leet(char *s)
{
	int i = 0;
	int j;
	char *a = s;
	char b[] = "AaEeOoTtLl";
	char c[] = "4433007711";

	while (s[i] != '\0')
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == b[j])
			{
				s[i] = c[j];
				break;
			}
		}
		i++;
	}
	return (a);
}
