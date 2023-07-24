#include "main.h"

/**
 * rev_string - reverse a string
 * @s: the string/ char array
 *
 */
void rev_string(char *s)
{
	int len = 0;
	int i = 0;
	int t = 0;
	int front, back;

	while ((*(s + i)) != '\0')
	{
		len++;
		i++;
	}

	while (t < len)
	{
		front = *(s + t);
		back = *(s + (len - 1));
		*(s + t) = back;
		*(s + (len - 1)) = front;
		t++;
		len--;
	}
}
