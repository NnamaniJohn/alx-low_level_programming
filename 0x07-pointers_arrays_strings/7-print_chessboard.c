#include "main.h"

/**
 * print_chessboard -  function that prints the chessboard
 * @a: char
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int i = 0;
	int j;

	while (i < (int)(sizeof(*a) / sizeof(char)))
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
		i++;
	}
}
