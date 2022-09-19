#include "main.h"

/**
 * rev_string - reverse a string
 * @s: string 
 * Return: void
 */

void rev_string(char *s)
{
	int i = 0;
	int j;
	int len;
	char temp;

	while (s[i] != '\0')
		i++;

	len = i;
	i = 0;
	j = len - 1;
	
	while (i < j)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		i++;
		j--;
	}
}
