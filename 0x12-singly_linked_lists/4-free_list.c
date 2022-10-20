#include "lists.h"

/**
 * free_list - free memory of list
 * @head: pointer to list head
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
