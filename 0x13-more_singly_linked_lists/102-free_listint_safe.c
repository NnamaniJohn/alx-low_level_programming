#include "lists.h"


size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	listint_t *temp;

	if (h != NULL)
	{
		while (*h != NULL)
		{
			temp = (*h)->next;
			(*h)->next = NULL;
			free(*h);
			*h = temp;
			size++;
		}
		*h = NULL;
	}
	return (size);
}
