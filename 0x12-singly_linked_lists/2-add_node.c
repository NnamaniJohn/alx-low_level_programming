#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list
 * @head: pointer to the head of list
 * @str: string to add
 * Return: address of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = 0;
	while (new->str[new->len])
		new->len++;
	new->next = *head;
	*head = new;

	return (new);
}
