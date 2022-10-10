#include "dog.h"

/**
 * new_dog - funtion to create new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog n_dog;
	char *n, *o;
	int i, j, k;

	while (name[i])
		i++;
	while (owner[j])
		j++;

	n = malloc(sizeof(char) * i);
	o = malloc(sizeof(char) * j);

	if (n == NULL || o == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
	{
		n[i] = name[i];
	}
	for (k = 0; k < j; k++)
	{
		o[j] = owner[j];
	}
	n_dog.name = n;
	n_dog.age = age;
	n_dog.owner = o;

	return (n_dog);
}
