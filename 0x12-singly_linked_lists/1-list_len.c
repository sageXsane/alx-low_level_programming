#include "lists.h"

/**
 * list_len - prints the number of  elements of a linked list
 * @h: head pointer of list
 *
 * Return: returns the number of nodes in linked list
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t *check;

	check = h;
	while (check != NULL)
	{
		count++;
		check = check->next;
	}
	return (count);
}
