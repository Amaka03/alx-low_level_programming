#include "lists.h"

/**
 * print_listint - prints the elements of a listint_t list
 * @h: linked list to print
 * Return: nodes number
 */

size_t print_listint(const listint_t *h)
{
	size_t nm = 0;

	while (h)
	{
		printf("%d\n", h->n);
		nm++;
		h = h->next;
	}

	return (nm);
}
