#include "lists.h"

/**
 * free_list - frees list_t list from memory
 * @head: pointer of head node
 *
 * Description: The list is free by free array type element of the node
 * then the node itself
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
