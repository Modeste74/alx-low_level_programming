#include "lists.h"

/**
 * listint_len - returns the no element in a list
 * @h: head of the list
 *
 * Return: elements
 */
size_t listint_len(const listint_t *h)
{
	size_t elements = 0;

	while (h)
	{
		h = h->next;
		elements++;
	}
	return (elements);
}
