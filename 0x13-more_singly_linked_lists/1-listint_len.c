#include "lists.h"

/**
 * listint_len - counts the number of nodes in a lined list listint_t
 * @h: the pointer of the head node
 *
 * return: number of nodes in list
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *check;
	size_t count = 0;

	check = h;
	while (check != NULL)
	{
		count++;
		check = check->next;
	}
	return (count);
}
