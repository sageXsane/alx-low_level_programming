#include "main.h"
#include <unistd.h>

/**
 * _abs - returns the absolute value of int
 * @a: int value thats tested for absolute value
 *
 * Return: returns the absoulte value of a
 */
int _abs(int a)
{
	if (a < 0)
		a = a * -1;
	return (a);
}
