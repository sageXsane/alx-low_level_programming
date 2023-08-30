#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of list
 * @head: points to the adress of head node
 * @n: int element of a node
 *
 * Return: returns address of the new element or NULL if list is empty
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;
	int cpy_n = n;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = cpy_n;
	new->next = *head;
	*head = new;
	return (*head);
}
