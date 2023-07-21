#include "main.h"
#include <unistd.h>

/**
 * _isupper - determines whether a character is uppercase
 * @c: ascii value of a character
 *
 * Return: returns 1 if uppercase else 0
 */
int _isupper(int c)
{
	if ((c >= 65) && (c <= 90))
		return (1);
	else
		return (0);
}
