#include "lists.h"

/**
 * listint_len - function that return the number of elements of a listint_t list
 * @h: list type
 * Return: the number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t size = 0;

	if (!h)
		return (0);
	while (h)
	{
		h = h->next;
		size++;
	}
	return (size);
}
