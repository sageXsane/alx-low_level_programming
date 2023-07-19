#include "main.h"
#include <unistd.h>

/**
 * _isalpha - checks whether a character is an alphabet
 * @c: char that is checked to see whether its an alphabet
 *
 * Return: returns 1 if c is an alphabet else returns 0
 */
int _isalpha(int c)
{
	if (((c >= 65) && (c <= 90)) || ((c >= 97) && (c <= 122)))
		return (1);
	else
		return (0);
}
