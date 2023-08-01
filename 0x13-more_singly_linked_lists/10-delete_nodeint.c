#include "lists.h"

/**
 * delete_nodeint_at_index - deletes theat index node of a linked list
 * @head: points to the first element in the linked list
 * @index: index to be deleted
 * Return: 1 if it succeeds, or -1 if it fails
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *opq = *head;
	listint_t *rst = NULL;
	unsigned int g = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(opq);
		return (1);
	}

	while (g < index - 1)
	{
		if (!opq || !(opq->next))
			return (-1);
		opq = opq->next;
		g++;
	}

	rst = opq->next;
	opq->next = rst->next;
	free(rst);

	return (1);
}
