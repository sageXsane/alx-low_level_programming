#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list listint_t
 * @h: head pointer of list
 *
 * Return: returns the number of nodes in list
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	const listint_t *check;

	check = h;
	while (check != NULL)
	{
		count++;
		printf("%d\n", check->n);
		check = check->next;
	}
	return (count);
}
