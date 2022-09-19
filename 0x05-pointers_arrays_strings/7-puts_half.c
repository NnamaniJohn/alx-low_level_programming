#include "main.h"

/**
 * puts_half - function that prints half of a string
 * @str: string
 * Return: void
 */

void puts_half(char *str)
{
	int n;
	int i = 0;

	while (str[i] != '\0')
		i++;

	n = (i - 1) / 2;
	
	while (n < i - 1)
	{
		n++;
		_putchar(str[n]);
	}
	_putchar('\n');
}
