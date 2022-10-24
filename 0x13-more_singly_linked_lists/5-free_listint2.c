#include "lists.h"

/**
 * free_listint2 - free memory of list
 * @head: pointer to list head
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head != NULL)
	{
		while (*head != NULL)
		{
			temp = (*head)->next;
			free(*head);
			*head = temp;
		}
		*head = NULL;
	}
}
