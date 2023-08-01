#include "lists.h"

/**
 * free_listint_safe - to free a linked list
 * @h: points to the first node of the linked list
 * Return: the number of elements to be freed list
 */

size_t free_listint_safe(listint_t **h)
{
	size_t lgth = 0;
	int d;
	listint_t *tem;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		d = *h - (*h)->next;
		if (d > 0)
		{
			tem = (*h)->next;
			free(*h);
			*h = tem;
			lgth++;
		}
		else
		{
			free(*h);
			*h = NULL;
			lgth++;
			break;
		}
	}

	*h = NULL;

	return (lgth);
}
