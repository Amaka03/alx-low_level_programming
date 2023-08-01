#include "lists.h"

/**
 * listint_len - returning the number of elements in a linked listint_t lists
 * @h: linked list type to traverse
 * Return: nodes number
 */

size_t listint_len(const listint_t *h)
{
	size_t nm = 0;

	while (h)
	{
		nm++;
		h = h->next;
	}

	return (nm);
}
