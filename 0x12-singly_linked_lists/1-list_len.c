#include "lists.h"

/**
 * list_len - return nodes in linked lists
 * @h: head of the linked list
 *
 * Return: nodes
 */
size_t list_len(const list_t *h)
{
	int nodes = 0;

	while (h != NULL)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
