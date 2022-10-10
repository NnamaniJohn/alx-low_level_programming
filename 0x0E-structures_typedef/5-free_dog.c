#include "dog.h"

/**
 * free_dog - free memory
 * @d: dog
 * Return: void
 */

void free_dog(dog_t *d)
{
	free(d.name);
	free(d.owner);
}
