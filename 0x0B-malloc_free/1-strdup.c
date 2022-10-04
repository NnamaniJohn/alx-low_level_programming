#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string
 * Return: pointer to string
 */

char *_strdup(char *str)
{
	int i = 0;
	char *p;

	while (str[i])
		i++;

	p = (char *) malloc(sizeof(char) * i);
	if (p == NULL || str == NULL)
		return (NULL);
	while (i >= 0)
	{
		p[i] = str[i];
		i--;
	}

	return (p);
}
