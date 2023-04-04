#include "lists.h"

/**
 * sum_listint - sums up all the data in the list
 * @head: the beggining of the list
 *
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int add = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (head != NULL)
	{
		add += head->n;
		head = head->next;
	}
	return (add);
}

