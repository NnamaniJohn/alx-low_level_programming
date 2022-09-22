#include "main.h"

/**
 * rot13 - function that encodes a string using rot13
 * @s: string
 * Return: pointer
 */

char *rot13(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		while ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z'))
		{
			if ((s[i] + 13 >= 'A' && s[i] + 13 <= 'Z') ||
					(s[i] + 13 >= 'a' && s[i] + 13 <= 'z'))
				s[i] = s[i] + 13;
			else
				s[i] = s[i] - 13;
			break;
		}
		i++;
	}

	return (s);
}
