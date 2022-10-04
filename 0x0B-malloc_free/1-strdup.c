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

	if (str == NULL)
		return (NULL);

	while (str[i])
		i++;

	i++;
	p = (char *) malloc(sizeof(char) * i);
	if (p == NULL)
		return (NULL);
	while (i > 0)
	{
		i--;
		p[i] = str[i];
	}

	return (p);
}
