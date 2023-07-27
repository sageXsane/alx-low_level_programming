#include "main.h"
#include <unistd.h>

/**
 * string_toupper - converts lower cases characters into uppercase
 * @c: string
 *
 * Return: returns the update uppercase string
 */
char *string_toupper(char *c)
{
	char *a = c;
	int i = 0;

	while (c[i] != '\0')
	{
		if ((c[i] >= 97) && (c[i] < 123))
			c[i] = c[i] - 32;
		i++;
	}
	return (a);
}
