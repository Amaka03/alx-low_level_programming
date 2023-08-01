#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: the first node in linked list
 * @index: the index of the node to be returned
 * Return: points to the missing node, or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int e = 0;
	listint_t *uvw = head;

	while (uvw && e < index)
	{
		uvw = uvw->next;
		e++;
	}

	return (uvw ? uvw : NULL);
}
