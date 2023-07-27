#include "main.h"
#include <unistd.h>

/**
 * cap_string - capitalises all words in a string
 * @s: string that is capitalised
 *
 * Return: returns a char array that points to string a
 */
char *cap_string(char *s)
{
	char *a = s;
	int i = 0;

	while (a[i] != '\0')
	{
		if ((s[i] == ' ') || (s[i] == '\t') || (s[i] == '\n') ||
(s[i] == ',') || (s[i] == ';') || (s[i] == '.') || (s[i] == '!') ||
(s[i] == '?') || (s[i] == 34) || (s[i] == 40) || (s[i] == 41) || (s[i] == 123)
|| (s[i] == 125))
			if ((s[i + 1] >= 97) && (s[i + 1] < 123))
				s[i + 1] = s[i + 1] - 32;
		i++;
	}
	return (a);
}
