#include "main.h"
#include <unistd.h>

/**
 * _isdigit - determines whether a character isa digit
 * @c: ascii value of a character
 *
 * Return: returns 1 if digit else 0
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);
	else
		return (0);
}
