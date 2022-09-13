#include "main.h"

/**
* print_alphabet_x10 - function that prints 10x the alphabet in lowercase
*
* Return: void
*/

void print_alphabet_x10(void)
{
	char alphabets[] = "abcdefghijklmnopqrstuvwxyz";
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 26; j++)
		{
			_putchar(alphabets[j]);
		}
		_putchar('\n');
	}
}
