#include "main.h"

/**
 * get_endianness - check the endianness of the architecture
 *
 * Return: 0 if big endian or 1 if little endian
 */
int get_endianness(void)
{
	int num = 1;

	return ((num & 1));
}
