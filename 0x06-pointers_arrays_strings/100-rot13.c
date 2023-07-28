#include "main.h"
#include <unistd.h>

/**
 * rot13 - converts each alpha charater with the 13th letter after it
 * @s: converted string
 *
 * Return: returns converted string
 */
char *rot13(char *s)
{
	int i = 0;
	int j;
	char *a = s;
	char b[] = "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz";
	char c[] = "NnOoPpQqRrSsTtUuVvWwXxYyZzAaBbCcDdEeFfGgHhIiJjKkLlMm";

	while (s[i] != '\0')
	{
		for (j = 0; j < 56; j++)
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
