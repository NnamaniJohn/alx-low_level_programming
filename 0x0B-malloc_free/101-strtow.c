#include "main.h"
#include <stdlib.h>

/**
 * strtow - function that splits a string into words.
 * @str: string to split
 * Return: pionter
 */

char **strtow(char *str)
{
	char *w;
	char **s;
	int i = 0, j = 0, k, words = 1;

	if (str == NULL || *str == '\0')
		return (NULL);
	while (str[i])
	{
		if (str[i] == ' ' && str[i - 1] && str[i - 1] != ' ')
			words++;
		i++;
	}
	s = (char **) malloc(sizeof(char *) *  words);
	if (s == NULL)
		free(s);
		return (NULL);
	words = 0;
	for (i = 0; str[i]; i++)
	{
		if (str[i] == ' ' && str[i - 1] && str[i - 1] != ' ')
		{
			w = (char *) malloc(sizeof(char) * (j + 1));
			if (w == NULL)
			{
				for (; words >= 0; words--)
					free(s[words]);
				free(s);
				return (NULL);
			}
			s[words] = w;
			words++;
			for (k = 0; k < j; k++)
				w[k] = str[i -  j + k];
			w[k] = '\0';
			j = 0;
		}
		else if (str[i] != ' ')
			j++;
	}
	return (s);
}
