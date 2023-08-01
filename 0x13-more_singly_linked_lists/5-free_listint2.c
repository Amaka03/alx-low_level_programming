#include "lists.h"

/**
 * free_listint2 - to free a linked list
 * @head: the pointer to the linked list that is to be freed
 */

void free_listint2(listint_t **head)
{
	listint_t *xyz;

	if (head == NULL)
		return;

	while (*head)
	{
		xyz = (*head)->next;
		free(*head);
		*head = xyz;
	}

	*head = NULL;
}
