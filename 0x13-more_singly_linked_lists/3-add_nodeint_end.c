#include "lists.h"

/**
 * add_nodeint_end - adds new node at the end
 * @head: pointer to the link of the new node
 * @n: data to be stored in the new node
 *
 * Return: address of new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *last_node, *following;
	int size;

	last_node = malloc(sizeof(listint_t));
	if (!last_node)
	{
		free(last_node);
		return (NULL);
	}
	last_node->n = n;
	last_node->next = NULL;

	if (*head == NULL)
	{
		*head = last_node;
	}
	else
	{
		following = *head;
		for (size = 0; following->next != NULL; size++)
		{
			following = following->next;
		}
		following->next = last_node;
	}

	return (*head);
}
