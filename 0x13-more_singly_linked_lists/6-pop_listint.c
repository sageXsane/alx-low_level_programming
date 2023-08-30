#include "lists.h"

/**
 * pop_listint - delete the head node of list
 * @head: points to head node
 *
 * Return: the n element of head node or 0 if list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (*head == NULL)
		return (0);
	temp = *head;
	num = temp->n;
	*head = (*head)->next;
	free(temp);
	return (num);
}
