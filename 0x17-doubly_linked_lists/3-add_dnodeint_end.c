#include "lists.h"

/**
 * add_dnodeint_end - adds a node at end of doubly
 * @head: pointer to a pointer of the head
 * @n: data to be stored in new last node
 *
 * Return: address of the new element else 0
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_tail, *transverser;

	new_tail = malloc(sizeof(dlistint_t));
	if (new_tail == NULL)
	{
		return (NULL);
	}
	new_tail->n = n;
	new_tail->prev = NULL;
	new_tail->next = NULL;
	if (*head == NULL)
	{
		*head = new_tail;
	}
	else
	{
		transverser = *head;
		while (transverser->next != NULL)
		{
			transverser = transverser->next;
		}
		transverser->next = new_tail;
		new_tail->prev = transverser;
	}
	return (new_tail);
}
