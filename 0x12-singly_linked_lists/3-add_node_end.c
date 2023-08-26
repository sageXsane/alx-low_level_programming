#include "lists.h"

/**
 * add_node_end - add node to the end of a linked list
 * @head: the address of the head node
 * @str: the str elemement of list_t
 *
 * Return: returns the address of new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	int size = 0;
	char *dup = strdup(str);
	list_t *last = *head;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	while (dup[size] != '\0')
		size++;
	new->str = dup;
	new->len = size;
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
