#include "lists.h"

/**
 * get_nodeint_at_index - returns the data in the node of the indexed node
 * @head: points to the first node
 * @index: postion element of the required node data
 *
 * Return: nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count;

	for (count = 0; count < index; count++)
	{
		if (head == NULL)
		{
			return (NULL);
		}
		head = head->next;
	}
	return (head);
}
