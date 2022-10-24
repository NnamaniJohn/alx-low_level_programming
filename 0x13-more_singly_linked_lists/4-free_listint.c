#include "lists.h"

/**
 * free_listint - free memory of list
 * @head: pointer to list head
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
