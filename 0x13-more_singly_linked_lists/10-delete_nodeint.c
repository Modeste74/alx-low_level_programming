#include "lists.h"

/**
 * delete_nodeint_at_index - delete a particular node
 * @head: pointer to the pointer of the first node
 * @index: postion of node
 *
 * Return: 1 if win and -1 if fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *erase, *new_head;

	erase = *head;
	new_head = *head;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = erase->next;
		free(erase);
		erase = NULL;
		return (1);
	}
	else
	{
		while (index > 0)
		{
			new_head = erase;
			erase = erase->next;
			index--;
			return (1);
		}
		new_head->next = erase->next;
		free(erase);
		erase = NULL;
		return (1);
	}
	return (1);
}
