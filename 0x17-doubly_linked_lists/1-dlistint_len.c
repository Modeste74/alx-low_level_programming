#include "lists.h"

/**
 * dlistint_len - Returns the no of elements in the doubly
 * @h: pointer to the head of a doubly
 *
 * Return: Number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t elements;

	elements = 0;
	while (h != NULL)
	{
		h = h->next;
		elements++;
	}
	return (elements);
}
