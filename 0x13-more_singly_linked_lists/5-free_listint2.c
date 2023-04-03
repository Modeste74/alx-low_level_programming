#include "lists.h"

/**
 * free_listint2 - frees a list
 * @head: pointer that point to the head pointer of the list
 *
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *store;

	while (*head)
	{
		store = (*head)->next;
		free(*head);
		*head = store;
	}
	*head = NULL;
}
