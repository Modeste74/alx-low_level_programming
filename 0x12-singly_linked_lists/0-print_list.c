#include "lists.h"

/**
 * print_list - used to print element of a sinle linked list
 * @h: head of the linkedd list
 *
 * Return: nodes
 */
size_t print_list(const list_t *h)
{
	int nodes = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%d] (nil)\n", 0);
			nodes++;
			h = h->next;
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
			nodes++;
			h = h->next;
		}
	}
	return (nodes);
}
