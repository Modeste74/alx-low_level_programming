#include "lists.h"

/**
 * get_dnodeint_at_index - return the node at nth postion
 * @head: pointer to the fist node
 * @index: index of the node, it starts from 0
 *
 * Return: nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count;
	dlistint_t *current;

	current = head;
	count = 0;
	while (current != NULL && count < index)
	{
		current = current->next;
		count++;
	}
	if (current != NULL)
	{
		return (current);
	}
	return (NULL);
}
