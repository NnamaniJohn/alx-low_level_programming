#include "main.h"

/**
 * _strstr -  function that locates a substring
 * @haystack: char
 * @needle: char
 * Return: char
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0, j;

	while (*(haystack + i))
	{
		j = 0;
		while (*(needle + j) && *(haystack + i + j) &&
				*(needle + j) == *(haystack + i + j))
		{
			j++;
		}
		if (*(needle + j) == '\0')
			return (haystack + i);
		i++;
	}
	return (0);
}
