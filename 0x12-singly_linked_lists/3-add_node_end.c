#include "lists.h"

/**
 * add_node_end - adds a node at the end of the list
 * @head: pointer to a pointer
 * @str: string to be duplicated
 *
 * Return: size of str
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *last, *following;

	last = malloc(sizeof(list_t));
	if (!last)
	{
		free(last);
		return (NULL);
	}
	last->len = strlen(str);
	last->str = strdup(str);
	last->next = NULL;

	if (*head == NULL)
	{
		*head = last;
	}
	else
	{
		following = *head;
		while (following->next != NULL)
		{
			following = following->next;
		}
		following->next = last;
	}
	return (*head);
}
