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
		while (!((s[i] >= 98) && (s[i] <= 122)))
			i++;
		if ((s[i - 1] == ' ') || (s[i - 1] == '\t') || (s[i - 1] == '\n') ||
(s[i - 1] == ',') || (s[i - 1] == ';') || (s[i - 1] == '.') ||
(s[i - 1] == '!') || (s[i] == '?') || (s[i - 1] == 34) || (s[i - 1] == 40) ||
(s[i - 1] == 41) || (s[i - 1] == 123) || (s[i - 1] == 125) || (i == 0))
			if ((s[i] >= 97) && (s[i] < 123))
				s[i] = s[i] - 32;
		i++;
	}
	return (a);
}
