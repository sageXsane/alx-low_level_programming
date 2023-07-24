#include "main.h"

/**
 * swap_int - takes int pointers and swaps their values
 * @a: first int pointer
 * @b: second int pointer
 *
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
