#include "lists.h"

/**
 * get_nodeint_at_index - print the nth node of list
 * @head: pointer to head node
 * @index: the nth node wanted
 *
 * Return: return the n element of the node or NULL if the index does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *check;
	unsigned int i;
	unsigned int size = 0;

	check = head;
	while (check != NULL)
	{
		size++;
		check = check->next;
	}
	if (size < index)
		return (NULL);
	check = head;
	for (i = 0; i < index; i++)
		check = check->next;
	return (check);
}
