#include "lists.h"

/**
 * print_dlistint - used to print all the element of a doubly
 * @h: pointer to head of doubly
 *
 * Return: Number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
