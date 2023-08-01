#include "lists.h"

/**
 * sum_listint - to calculate the sum of all the data of a linked list
 * @head: the first node in the linked list
 * Return: the the sum of all the data
 */

int sum_listint(listint_t *head)
{
	int i = 0;
	listint_t *t = head;

	while (t)
	{
		i += t->n;
		t = t->next;
	}

	return (i);
}
