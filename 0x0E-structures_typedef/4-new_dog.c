#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - funtion to create new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *n_dog;
	char *n, *o;
	int i, j, k;

	if (name == NULL || owner == NULL)
		return (NULL);

	while (*(name + i) != '\0')
		i++;
	while (*(owner + j) != '\0')
		j++;
	n_dog = malloc(sizeof(dog_t));

	if (n_dog == NULL)
		return (NULL);
	n = malloc(sizeof(char) * i + 1);
	o = malloc(sizeof(char) * j + 1);

	if (n == NULL || o == NULL)
	{
		free(n_dog);
		return (NULL);
	}
	for (k = 0; k < i; k++)
	{
		n[k] = name[k];
	}
	n[k] = '\0';
	for (k = 0; k < j; k++)
	{
		o[k] = owner[k];
	}
	o[k] = '\0';
	n_dog->name = n;
	n_dog->age = age;
	n_dog->owner = o;

	return (n_dog);
}
