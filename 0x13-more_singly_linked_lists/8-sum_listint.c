#include "lists.h"

/**
 * sum_listint - adds the n elements of a list together
 * @head: points tothe head node
 *
 * Return: returns the sum of n elements/ 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	listint_t *check;
	int sum = 0;

	check = head;
	if (check == NULL)
		return (0);
	while (check != NULL)
	{
		sum += check->n;
		check = check->next;
	}
	return (sum);
}
