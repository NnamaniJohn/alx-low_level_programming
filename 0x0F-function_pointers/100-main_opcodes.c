#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints the opcodes
 * @argc: args count
 * @argv: args value
 * Return: int
 */

int main(int argc, char **argv)
{
	int num, i;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	num = atoi(argv[1]);
	if (num < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < num; i++)
	{
		printf("%02hhx", *((char *)main + i));
		if (i < num - 1)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
