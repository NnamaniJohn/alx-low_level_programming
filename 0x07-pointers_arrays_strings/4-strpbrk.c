#include "main.h"

/**
 * _strpbrk -  function that searches a string for any of a set of bytes
 * @s: char
 * @accept: char
 * Return: pointer
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0, j;

	while (*(s + i))
	{
		j = 0;
		while (*(accept + j))
		{
			if (*(s + i) == *(accept + j))
				return (s + i);
			j++;
		}
		i++;
	}
	return (0);
}
