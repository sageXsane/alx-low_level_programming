#include "main.h"
#include <string.h>

int palindrome_check(char *s, int start, int end);

/**
 * is_palindrome - displays whether string is a palindrome
 * @s: string
 *
 * Return: the result of palindrome_check
 */
int is_palindrome(char *s)
{
	int len = strlen(s);

	if (len == 0)
		return (1);
	return (palindrome_check(s, 0, (len - 1)));
}

/**
 * palindrome_check - checks whether converse elements of a string are equal
 * @s: string
 * @start: start element to check
 * @end : end element to check
 *
 * Return: returns 1 if palindrome else 0
 */
int palindrome_check(char *s, int start, int end)
{
	if (s[start] != s[end])
		return (0);
	if (start >= end)
		return (1);
	return (palindrome_check(s, (start + 1), (end - 1)));
}
