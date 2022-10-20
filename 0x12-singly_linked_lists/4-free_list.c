#include "lists.h"

/**
 * free_list - free memory of list
 * @head: pointer to list head
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *next;

	next = head->next;
	while (next != NULL)
	{
		free(head);
		free(head->str);
		head = next;
		next = head->next;
	}
	free(head);
	free(head->str);
}
