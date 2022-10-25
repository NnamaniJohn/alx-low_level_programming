#include "lists.h"

/**
 * reverse_listint - function that reverses a listint_t linked list
 * @head: head node
 * Return: list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *old = NULL, *next;

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = old;
		old = *head;
		*head = next;
	}
	*head = old;
	return (old);
}
