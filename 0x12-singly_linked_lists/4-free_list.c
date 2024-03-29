#include "lists.h"

/**
 * free_list - frees the list
 * @head: to be freed
 *
 * Return: void
 */
void free_list(list_t *head)
{
	while (head)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
