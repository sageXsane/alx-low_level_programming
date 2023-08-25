#include "lists.h"

/**
 * print_list - lists the elements of a linked list
 * @h: head pointer of list
 *
 * Return: returns the number of nodes in linked list
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *check;

	check = h;
	while (check != NULL)
	{
		count++;
		if ((check->str) == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", check->len, check->str);
		check = check->next;
	}
	return (count);
}
