#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Counting the number of unique nodes
 * in a looped linked list.
 * @head: A pointer to be checked
 * Return: return 0 if the list is not looped, or unique nodes number
 */

size_t looped_listint_len(const listint_t *head)
{
	const listint_t *mn, *op;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	mn = head->next;
	op = (head->next)->next;

	while (op)
	{
		if (mn == op)
		{
			mn = head;
			while (mn != op)
			{
				nodes++;
				mn = mn->next;
				op = op->next;
			}

			mn = mn->next;
			while (mn != op)
			{
				nodes++;
				mn = mn->next;
			}

			return (nodes);
		}

		mn = mn->next;
		op = (op->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - to safely print a linked list.
 * @head: points to the head of the list.
 * Return: nodes number in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}
