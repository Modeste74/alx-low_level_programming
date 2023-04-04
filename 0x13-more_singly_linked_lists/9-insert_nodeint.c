#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a node at the index of said node
 * @head: pointer to the beggining node pointer
 * @idx: index of the node
 * @n: data to be stored in the new node
 *
 * Return: address on the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node_index, *temp;
	unsigned int place;
	
	new_node_index = malloc(sizeof(listint_t));
	new_node_index->n = n;

	if (*head == NULL)
	{
		return (NULL);
	}
	if (idx)
	{
		temp = *head;
		if (temp == NULL)
		{
			return (NULL);
		}
		for (place = 0; place < (idx - 1); place++)
		{
			temp = temp->next;
		}
	}

	if (idx == 0)
	{
		new_node_index->next = *head;
		*head = new_node_index;
		return (new_node_index);
	}
	new_node_index->next = temp->next;
	temp->next = new_node_index;
	return (new_node_index);
}
