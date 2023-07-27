#include <stdlib.h>
#include "lists.h"

/**
 * list_len - that returns the number of elements in a linked list_t list
 * @h: the pointer to the linked list_t list
 *
 * Return: then number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t z = 0;

	while (h)
	{
		z++;
		h = h->next;
	}
	return (z);
}
