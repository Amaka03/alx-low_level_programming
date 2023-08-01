#include "lists.h"

/**
 * insert_nodeint_at_index - to inserts a new node into a linked list,
 * at a given position
 * @head: points to the first node in the linked list
 * @idx: new node added index
 * @n: data to be inserted into the new node
 * Return: the pointer to the new node, or NULL if it fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int x;
	listint_t *y;
	listint_t *z = *head;

	y = malloc(sizeof(listint_t));
	if (!y || !head)
		return (NULL);

	y->n = n;
	y->next = NULL;

	if (idx == 0)
	{
		y->next = *head;
		*head = y;
		return (y);
	}

	for (x = 0; z && x < idx; x++)
	{
		if (x == idx - 1)
		{
			y->next = z->next;
			z->next = y;
			return (y);
		}
		else
			z = z->next;
	}

	return (NULL);
}
