#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings.
 * @s1: first string
 * @s2: second string
 * Return: pionter
 */

char *str_concat(char *s1, char *s2)
{
	int len_s1 = 0, len_s2 = 0, len;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len_s1])
		len_s1++;
	while (s2[len_s2])
		len_s2++;
	p = (char *) malloc(sizeof(char) * (len_s1 + len_s2 + 1));
	if (p == NULL)
		return (NULL);
	for (len = 0; len < (len_s1 + len_s2); len++)
	{
		if (len < len_s1)
			p[len] = s1[len];
		else
			p[len] = s2[len - len_s1];
	}
	p[len] = '\0';
	return (p);
}
