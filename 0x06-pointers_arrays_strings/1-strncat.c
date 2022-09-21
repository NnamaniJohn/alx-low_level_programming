#include "main.h"

/**
 * _strncat -  function that concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: int
 * Return: pointer to the resulting string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j;
	while (dest[i] != '\0')
		i++;

	for (j = 0; j < n; j++)
	{
		*(dest + i + j) = src[j];
		if (src[j] == '\0')
			break;
	}

	return (dest);
}
