#include "lists.h"

/**
 * sum_dlistint - return sum of all data in doubly
 * @head: pointer to first node
 *
 * Return: sum else 0
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;
	dlistint_t *current;

	sum = 0;
	current = head;
	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
