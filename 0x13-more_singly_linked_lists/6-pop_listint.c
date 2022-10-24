#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a list
 * @head: head node
 * Return: int
 */

int pop_listint(listint_t **head)
{
	listint_t *next;
	int n;

	if (head == NULL || *head == NULL)
		return (0);
	next = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = next;
	return (n);
}
