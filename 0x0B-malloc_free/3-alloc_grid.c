#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: int
 * @height: int
 * Return: pionter
 */

int **alloc_grid(int width, int height)
{
	int *r;
	int **p;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	p = (int **) malloc(sizeof(r) * height);
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		r = (int *) malloc(sizeof(int) * width);
		if (r == NULL)
		{
			free(r);
			for (j = 0; j < i; j++
					free(p[i]);
		}
		p[i] = r;
		for (j = 0; j < width; j++)
			r[j] = 0;
	}
	return (p);
}
