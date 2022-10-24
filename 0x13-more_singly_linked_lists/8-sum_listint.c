#include "lists.h"

/**
 * sum_listint - function that returns the sum of all the data (n) of a list
 * @head: head node
 * Return: int
 */

int sum_listint(listint_t *head)
{
	listint_t *current;
	int sum = 0;

	current = head;
	while(current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
