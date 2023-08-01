#include "lists.h"

/**
 * pop_listint - to delete the head node of a linked list
 * @head: points to the first element
 * Return: deleted data
 * or 0 for an empty list
 */

int pop_listint(listint_t **head)
{
	listint_t *mno;
	int nm;

	if (!head || !*head)
		return (0);

	nm = (*head)->n;
	mno = (*head)->next;
	free(*head);
	*head = mno;

	return (nm);
}
