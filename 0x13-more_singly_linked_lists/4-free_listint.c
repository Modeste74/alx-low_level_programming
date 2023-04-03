#include "lists.h"
/**
 * free_listint - frees the linked list
 * @head: beggining of the list
 *
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *store;

	while (head)
	{
		store = head;
		head = head->next;
		free(store);
	}
}
