#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers
 * @min: min int
 * @max: max int
 * Return: pointer
 */

int *array_range(int min, int max)
{
	int len, i;
	int *a;

	if (min > max)
		return (NULL);

	len = max - min + 1;
	a = malloc(sizeof(int) * len);
	if (a == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		a[i] = min + i;
	return (a);
}
