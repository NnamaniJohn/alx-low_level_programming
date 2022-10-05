#include "main.h"
#include <stdlib.h>

/**
 * argstostr -  function that concatenates all the arguments of your program
 * @ac: args count
 * @av: args value
 * Return: pionter to string
 */

char *argstostr(int ac, char **av)
{
	char *p;
	int i, j, len;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j])
			j++;
		len += j - 1;
	}
	p = (char *) malloc(sizeof(char) * len);
	len = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			p[len] = av[i][j];
			len++;
		}
		p[len] = '\n';
		len++;
	}
	return (p);
}
