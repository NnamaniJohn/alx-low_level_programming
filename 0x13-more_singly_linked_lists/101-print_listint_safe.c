#include "lists.h"

/**
 * print_listint_safe - function that prints all the elements of
 * a listint_t list
 * @head: list type
 * Return: the number of nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t size = 0;
	listint_t *fast;
	
	if (!head)
		exit(98);
	printf("[%p] %d\n", (void *)head, head->n);
	fast = head->next;
	head = head->next;
	while (head != NULL)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		if (fast != NULL && fast->next != NULL)
			fast = fast->next->next;
		else if (fast != NULL && fast->next == NULL)
			fast = fast->next;
		if (head == fast)
			break;
	}
	/*while (head != NULL)
	{
		if (head != slow->next || !is_loop)
		{
			if (head == slow->next)
				is_loop = 1;
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
			size++;
		}
		else
			break;
	}*/
	return (size);
}
