#include "lists.h"

/**
 * pop_listint - deletes the first node and returns data of deleted
 * @head: pointer to the pointer head of the linked list
 *
 * Return: data in deleted node
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int m;

	if (*head == NULL)
	{
		return (0);
	}
	temp = *head;
	m = (*head)->n;
	*head = (*head)->next;
	free(temp);

	return (m);
}
