#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - change cents
 * @argc: argc
 * @argv: argv
 * Return: int
 */

int main(int argc, char *argv[])
{
	int cents, rem;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (atoi(argv[1]) <= 0)
		printf("0\n");
	else
	{
		cents = atoi(argv[1]) / 25;
		rem = atoi(argv[1]) % 25;
		cents += rem / 10;
		rem = rem % 10;
		cents += rem / 5;
		rem = rem % 5;
		cents += rem / 2;
		rem = rem % 2;
		cents += rem;
		printf("%d\n", cents);
	}
	return (0);
}
