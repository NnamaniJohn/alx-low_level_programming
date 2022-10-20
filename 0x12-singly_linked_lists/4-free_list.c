#include "lists.h"

/**
 * free_list - free memory of list
 * @head: pointer to list head
 * Return: void
 */

void free_list(list_t *head)
{
	while (head != NULL)
	{
		free(head);
		free(head->str);
		head = head->next;
	}
}
