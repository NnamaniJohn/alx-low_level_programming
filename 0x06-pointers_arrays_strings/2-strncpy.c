#include "main.h"

/**
 * _strncpy - function that copies a string
 * @dest: string
 * @src: string
 * @n: int
 * Return: pointer
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int j;

	while (src[i] != '\0')
		i++;
	for (j = 0; j < n; j++)
	{
		if (j > i)
			*(dest + j) = '\0';
		else
			*(dest + j) = src[j];
	}

	return (dest);
}
