#include "lists.h"

/**
 * list_len - function that return the number of elements of a list_t list
 * @h: list type
 * Return: the number of nodes
 */

size_t list_len(const list_t *h)
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
