#include "main.h"

/**
 * reverse_array - reverses the n characters of a string
 * @a: string that is reversed
 * @n: number of charaters in string that are to be reversed
 *
 */
void reverse_array(int *a, int n)
{
	int front;
	int back;
	int i = 0;

	while (i < n)
	{
		front = a[i];
		back = a[n - 1];
		a[i] = back;
		a[n - 1] = front;
		i++;
		n--;
	}
}
