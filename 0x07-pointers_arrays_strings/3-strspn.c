#include "main.h"

/**
 * _strspn - unction that gets the length of a prefix substring
 * @s: string
 * @accept: char
 * Return: int
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j, n = 0, pre;

	while (*(s + i))
	{
		j = 0;
		while (*(accept + j))
		{
			if (*(s + i) == *(accept + j))
			{
				pre = 1;
				break;
			}
			j++;
		}
		if (pre != 1)
			break;
		n++;
		pre = 0;
		i++;
	}
	return (n);
}
