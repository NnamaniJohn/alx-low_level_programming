#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: array to search
 * @size: size of array
 * @cmp: function for comparism
 * Return: int
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array || !cmp)
		return (-1);
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			break;
	}

	return (i);
}