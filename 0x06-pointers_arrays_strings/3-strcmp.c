#include "main.h"

/**
 * _strcmp - function that compares two strings
 * @s1: string
 * @s2: string
 * Return: int
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while ((s1[i] != '\0') && (s2[i] != '\0'))
	{
		i++;
	}
	return (s1[i + 1] - s2[i + 1]);
}
