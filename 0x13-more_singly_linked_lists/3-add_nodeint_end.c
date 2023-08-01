#include "lists.h"

/**
 * add_nodeint_end - to add a node at the end of a linked list
 * @head: that points the first element in the list
 * @n: the data to be inserted in the new element
 * Return: points to the new node, or NULL if it fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *xyz;
	listint_t *mno = *head;

	xyz = malloc(sizeof(listint_t));
	if (!xyz)
		return (NULL);

	xyz->n = n;
	xyz->next = NULL;

	if (*head == NULL)
	{
		*head = xyz;
		return (xyz);
	}

	while (mno->next)
		mno = mno->next;

	mno->next = xyz;

	return (xyz);
}
