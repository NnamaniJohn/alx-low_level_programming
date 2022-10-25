#include "lists.h"

/**
 * print_listint - function that prints all the elements of a listint_t list
 * @head: list type
 * Return: the number of nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t size = 0;
	listint_t *slow, *fast;
	int is_loop = 0;

	if (!head)
		exit (98);
	slow = fast = head->next;
	while (slow != NULL && fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
			break;
	}
	while (head != NULL)
	{
		if (head == slow->next && is_loop)
			break;
		else
		{
			if (head == slow->next)
				is_loop = 1;
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
			size++;
		}
	}
	return (size);
}
