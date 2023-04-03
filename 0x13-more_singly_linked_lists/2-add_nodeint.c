#include "lists.h"

/**
 * add_nodeint - adds a new node at the beggining
 * @head: pointer to the head pointer
 * @n: data stored in the linked list
 *
 * Return: address of new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = *head;
	new_node->n = n;
	*head = new_node;
	return (*head);
}
