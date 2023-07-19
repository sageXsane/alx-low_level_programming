#include "main.h"
#include <unistd.h>

/**
 * _islower - checks whether a character is lowercase
 * @c: char that is checked to see whether its lowercase
 *
 * Return: returns 1 if c is lowwercase else returns 0
 */
int _islower(int c)
{
	if ((c >= 97) && (c <= 122))
		return (1);
	else
		return (0);
}
