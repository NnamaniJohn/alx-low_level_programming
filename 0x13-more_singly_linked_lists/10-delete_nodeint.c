#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node at index
 * @head: head node
 * @index: index to delete
 * Return: int
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *prev;
	unsigned int i = 0;

	if (head == NULL)
		return (-1);
	current = *head;
	while (i < index && current != NULL)
	{
		prev = current;
		current = current->next;
		i++;
	}
	if (index == 0 && *head != NULL)
	{
		current = (*head)->next;
		free(*head);
		*head = current;
		return (1);
	}
	else if (i == index && current != NULL)
	{
		prev->next = current->next;
		free(current);
		return (1);
	}
	return (-1);
}
