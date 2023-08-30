#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of list
 * @head: points to the adress of head node
 * @n: int element of a node
 *
 * Return: returns address of the new element or NULL if list is empty
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	int cpy_n = n;
	listint_t *last = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = cpy_n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	while (last->next != NULL)
		last = last->next;
	last->next = new;
	return (*head);
}
