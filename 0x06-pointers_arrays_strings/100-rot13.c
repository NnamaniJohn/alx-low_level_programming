#include "main.h"

/**
 * rot13 - function that encodes a string using rot13
 * @s: string
 * Return: pointer
 */

char *rot13(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) >= 'A' && *(s + i) <= 'Z')
		{
			*(s + i) = *(s + i) + 13;
			if (*(s + i) > 'Z')
				*(s + i) = *(s + i) - 26;
		}
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
		{
			if (*(s + i) + 13 > 'z')
				*(s + i) = *(s + i) - 13;
			else
				*(s + i) = *(s + i) + 13;
		}
		i++;
	}

	return (s);
}
