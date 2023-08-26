#include "lists.h"

/**
 * add_node - add node to the begining of a linked list
 * @head: the address of the head node
 * @str: the str elemement of list_t
 *
 * Return: returns the address of new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int size = 0;
	char *dup = strdup(str);

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	while (dup[size] != '\0')
		size++;
	new->str = dup;
	new->len = size;
	new->next = *head;
	*head = new;
	return (*head);
}
