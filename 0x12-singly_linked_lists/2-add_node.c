#include "lists.h"

/**
 * add_node - add another node at the beggining
 * @head: points to a pointer
 * @str: constant string to be duplicated in new temp
 *
 * Return: size the new node data
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

	temp = malloc(sizeof(list_t));
	if (!temp)
	{
		free(temp);
		return (NULL);
	}
	temp->next = *head;
	temp->str = strdup(str);
	temp->len = strlen(str);
	*head = temp;
	return (*head);
}
