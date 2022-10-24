#include "lists.h"

/**
 * insert_nodeint_at_index -  function that inserts a new node
 * at a given position
 * @head: head node
 * @idx: position
 * @n: value to insert
 * Return: list node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current, *prev, *new;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	current = *head;
	while (i < idx && current != NULL)
	{
		prev = current;
		current = current->next;
		i++;
	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	new->next = current;
	if (idx == 0 )
		*head = new;
	else
		prev->next = new;
	return (new);
}
