#include "lists.h"
/**
 * if_null - checks if a node is NULL
 * @node: node to be checked
 *
 * Return: NULL if true else node
 */
dlistint_t *if_null(dlistint_t *node)
{
	if (node == NULL)
	{
		return (NULL);
	}
	return (node);
}

/**
 * insert_dnodeint_at_index - insert a node a specific postion
 * @h: pointer to the pointer of the head of the doubly
 * @idx: index where the node should be inserted
 * @n: data to stored in the new node
 *
 * Return: address of new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t)), *prev_node = NULL, *current;
	unsigned int count = 0;

	if_null(new);
	new->n = n;
	new->prev = NULL;
	new->next = NULL;
	if (idx == 0)
	{
		new->next = *h;
		if (*h != NULL)
		{
			(*h)->prev = new;
		}
		*h = new;
	}
	else
	{
		current = *h;
		while (current != NULL && count < idx)
		{
			prev_node = current;
			current = current->next;
			count++;
		}
		if (prev_node == NULL)
		{
			free(new);
			return (NULL);
		}
		new->next = current;
		new->prev = prev_node;
		prev_node->next = new;
		if (current != NULL)
		{
			current->prev = new;
		}
	}
	return (new);
}
