#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: returns the lowest significant byte
 */
int get_endianness(void)
{
	int num = 1;
	int lsb = num & 1;

	return (lsb);
}
