#include "lists.h"

/**
 * free_listint - free the contents of linked list
 * @head: pointer to head node
 *
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
